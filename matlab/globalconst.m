function [SGD] = globalconst()
%UNTITLED Summary of this function goes here
%   Detailed explanation goes here
Fd=2500000;
Tm=0.66;
SN=round(Fd*Tm);
mz=4;

SGD.Tm=Tm;                           % duration of the measured signal seconds
SGD.Fd=Fd;% sampling frequency Hertz
SGD.Ffts=SN; %sample number
SGD.mz=mz;                          % zero padding multiplier - limited by the speed of the customer's computer
    %% Input signal (generate , or load from file)
SGD.FftL=SN*mz;                  % number of FFT samples
SGD.Freq_low=299990;
SGD.Freq_hi= 300050;
SGD.A=[1 1E-5 ];      % amplitude array
SGD.F=[300020 300021 ]; % frequency array
SGD.P=[0 77 ];           % phase array
SGD.An=7E-5;                        % noise amplitude
SGD.folder='..\txt\';
SGD.f_err=1e-7;
SGD.a_err=1e-6;

%T=(0:1:SGD.Ffts)/SGD.Fd;

end