close all
clear 
Tm=1;                           % duration of the measured signal seconds
Fd=2500000;% sampling frequency Hertz
Ffts=floor(Fd*Tm);
mz=4;                          % zero padding multiplier - limited by the speed of the customer's computer
    %% Input signal (generate , or load from file)
FftL=Tm*Fd*mz;                  % number of FFT samples



REF_Signal=readmatrix('REF_signal3.txt');
Signal=readmatrix('signal3.txt');
s_diff=abs(REF_Signal-Signal);
[Am,im]=max(s_diff)


plot(T,Signal,T,REF_Signal);
