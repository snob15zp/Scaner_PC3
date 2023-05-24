function [SGD,T] = globalconst()
%UNTITLED Summary of this function goes here
%   Detailed explanation goes here
SGD.Tm=1;                           % duration of the measured signal seconds
SGD.Fd=2500000;% sampling frequency Hertz
SGD.Ffts=round(SGD.Fd*SGD.Tm); %sample number
SGD.mz=4;                          % zero padding multiplier - limited by the speed of the customer's computer
    %% Input signal (generate , or load from file)
SGD.FftL=SGD.Ffts*SGD.mz;                  % number of FFT samples
SGD.Freq_low=299990;
SGD.Freq_hi= 300050;
SGD.A=[1 1E-6 ];      % amplitude array
SGD.F=[300000 300002 ]; % frequency array
SGD.P=[0 77 ];           % phase array
SGD.An=7E-5;                        % noise amplitude
SGD.folder='..\txt\';
SGD.f_err=1e-7;
SGD.a_err=1e-6;

T=(0:1:SGD.Ffts)/SGD.Fd;

end