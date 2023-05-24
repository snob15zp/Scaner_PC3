function [ Signal, FftS, Am, a, f, p ] = tone_search( SGD, T, Signal, a, f, p ) % search and delete tones function
    Signal=Signal-a*sind((f*360).*T+p); % calculate the difference signal
        %% Spectral representation of the input signal
    FftS=abs(fft(Signal,SGD.FftL));     % signal Fourier transform amplitude
    FftS=2*FftS./SGD.FftL;              % amplitude normalization of the spectrum
        %% Tone frequency search and calculation
    [Am,im]=max(FftS);              % maximum in the spectrum , where Am is the amplitude of the match , im is the index in the array FftS starting from 1 and not from 0
    f=(im-1)*SGD.Fd/SGD.FftL;       % calculating the tone frequency, im-1 because i starts at 1 and not at 0
        %% Approximation of the residue frequency by the maximum of the vector
    hf=SGD.Fd/SGD.FftL;                   % step and error optimized for speed, deviation ff reset
    fL=f-hf;fR=f+hf;

    vL=AmpPhase(SGD, Signal, fL);
    vR=AmpPhase(SGD, Signal, fR);    

    while abs(fR-fL)>SGD.f_err              % if the step did not reach the optimal error, then
        fX=(fR+fL)/2;
        vX=AmpPhase(SGD, Signal, fX);
        if vL<vR                     % if the maximum value is skipped, then
            fL=fX;
            vL=vX;
        else
            fR=fX;
            vR=vX;;
        end
    end                             % end of approximation in frequency
    f=(fR+fL)/2;
        %% Calculation of the amplitude and phase of the residue by the vector method, provided that the frequency is known
    cs=0;cc=0;ss=0;yc=0;ys=0;       % initial assignments to amounts
    for i=0:SGD.Ffts                % number of time array indexes
        cs=cs+sind(f*720*i/SGD.Fd)/2;   % simplification cos(x)*sin(x)=sin(2*x)/2
        cc=cc+cosd(f*360*i/SGD.Fd)^2;   % time starts from zero,
        ss=ss+sind(f*360*i/SGD.Fd)^2;   % and the index starts from one
        yc=yc+Signal(i+1)*cosd(f*360*i/SGD.Fd); % so in sines and cosines is i
        ys=ys+Signal(i+1)*sind(f*360*i/SGD.Fd); % and the signal contains the index i + 1
    end                             % end of accumulation of sums for the matrix
    A=[cc cs                        % solution of a system of linear equations
       cs ss];                      % assigning sums to matrix A
    B=[yc; ys;];                    % assign sums to matrix B
    X=A\B;                          % solution vector
    an=(mean(FftS(1:round(SGD.Freq_low*SGD.Fd/SGD.FftL)))+mean(FftS(round(SGD.Freq_hi*SGD.Fd/SGD.FftL):round(SGD.Ffts/2)-1)))/2; % average noise amplitude
    a=sqrt(X(1)^2+X(2)^2-an^2);       % subtraction signal amplitude
    p=90*(2-sign(X(1)))-acotd(X(1)/X(2)); % subtraction signal phase 0...360
end
