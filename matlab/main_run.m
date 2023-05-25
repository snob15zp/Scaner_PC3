clear;                        % clearing memory
close all;
 ls ..\txt\
% cd ..\txt\
 dir
 
    %% Parameters 
[SGD] = globalconst();
                    % array of timings
[ An ] = tone_gener();       % input matrix generation
Signal=readmatrix([SGD.folder,'Signal.txt']); % load input signal matrix
%plot(Signal);
[ Out,FftS ] = main_scanner( Signal ); % function to compile to C
writematrix(Out,[SGD.folder,'Out.txt']);     % write output matrix to file
writematrix(FftS,[SGD.folder,'FftS.txt']); 
