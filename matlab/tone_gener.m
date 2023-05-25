function [ An ] = tone_gener( )   % signal generation function from different tones
        %% Parameters changeable (input signal)
    [SGD] = globalconst();    
%     A=[1 1E-2 ];      % amplitude array
%     F=[300000 300002 ]; % frequency array
%     P=[0 77 ];           % phase array
%     An=7E-5;                        % noise amplitude
        %% Generation of working arrays (input signal)
    Signal=SGD.An*randn(1,SGD.Ffts+1);   % random noise array with length equal to time array
    for i=1:length(SGD.F)
        for i1=1:length(Signal)
        Signal(i1)=Signal(i1)+SGD.A(i)*sind((SGD.F(i)*360)*i1/SGD.Fd+SGD.P(i)); % signal array accumulation
        end
    end
    writematrix(Signal,[SGD.folder,'Signal.txt']); % writing signal matrix to file
    An=SGD.An;
end
