function [ F ] = tone_graph( FftS ) % plotting function
        %% Plotting
     %-------------------------------- Signal
%     figure                          % Create a new window
%     plot(T,Signal);                 % draw...
%     xlim([0 0.00003]);              % time interval on the x-axis
%     title('Signal');                % Graph caption
%     xlabel('Second');               % Plot x-axis label
%     ylabel('V');                    % Chart axis label
    [SGD] = globalconst();
    %-------------------------------- Range
    figure                          % Create a new window
    F=0:SGD.Fd/SGD.FftL:SGD.Fd/2;               % Array of frequencies of the calculated spectrum
    stem(F,SGD.mz*FftS(1:length(F)),'k'); % draw...
    xlim([SGD.Freq_low SGD.Freq_hi]);          % X-axis frequency interval
    title('Spectrum');              % Graph caption
    xlabel('Hz');                   % Plot x-axis label
    ylabel('V');             	    % Chart y-axis label
end
