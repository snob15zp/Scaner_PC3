function [s]=AmpPhase(SGD, Signal, f)
        sc=0;ss=0;                  % initial assignments to amounts
        for i=0:SGD.Ffts               % number of time array indexes Tm*Fd+1
            sc=sc+Signal(i+1)*cosd(f*360*i/SGD.Fd); % the first sum of the vector
            ss=ss+Signal(i+1)*sind(f*360*i/SGD.Fd); % second vector sum
        end
        s=sc^2+ss^2;                % variance function - sum of squares of vector sums
end