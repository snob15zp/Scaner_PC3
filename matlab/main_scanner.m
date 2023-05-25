function [ Out ,FftS] = main_scanner(Signal ) % scanner function
    [SGD] = globalconst();
    Am=1;a=0;f=0;p=0;i=0;           % initial assignments to enter the search and subtract tone loop
    Out=zeros(3,100);
    FftS=zeros(1,SGD.FftL);
        %% The main cycle of searching and subtracting the tone of maximum amplitude
    while Am>SGD.a_err              % if the amplitude of the subtraction is greater than the specified threshold , then we look for and subtract the next tone
        [ Signal, FftS, Am, a, f, p ] = tone_search( SGD, Signal, a, f, p ); % tone search and subtraction function
        i=i+1;Out(1,i)=a;Out(2,i)=f;Out(3,i)=p; % fill the output array : amplitude , frequency , phase
        if coder.target('MATLAB')   % if there is a generation in C code, then the following does not need to be generated
            disp([i]);              % subtracted tone counter
            [ F ] = tone_graph(FftS ); % plotting function
        end
        if coder.target('MATLAB')
            %size(SGD.F)
            if (i<= length(SGD.F))
            df=f-SGD.F(i)
            end
        end
        foldername=SGD.folder;
        fn3='signal';
        fn3a = sprintf('%i',int32(i));
        fn3f = [fn3,fn3a,'.txt',0];
        %coder.varsize('ActVal1',[qblobs,DmaxSize]);
        %ActVal1(1:qblobs,:)=ActVal(1:qblobs,:);
        if coder.target('MATLAB')
            filesave_ceval(coder.ignoreSize(Signal),foldername,coder.ignoreSize(fn3f),size(Signal),0);
        else
            filesave_ceval(coder.ignoreSize(Signal),foldername,coder.ignoreSize(fn3f),size(Signal),1);
        end

        fn3='FftS';
        fn3a = sprintf('%i',int32(i));
        fn3f = [fn3,fn3a,'.txt',0];
        %coder.varsize('ActVal1',[qblobs,DmaxSize]);
        %ActVal1(1:qblobs,:)=ActVal(1:qblobs,:);
        if coder.target('MATLAB')
            filesave_ceval(coder.ignoreSize(FftS),foldername,coder.ignoreSize(fn3f),size(FftS),0);
        else
            filesave_ceval(coder.ignoreSize(FftS),foldername,coder.ignoreSize(fn3f),size(FftS),1);
        end
 
        fn3='FftS_I';
        fn3a = sprintf('%i',int32(i));
        fn3f = [fn3,fn3a,'.txt',0];
        l=round(SGD.Freq_low/SGD.Fd*SGD.FftL);
        h=round(SGD.Freq_hi/SGD.Fd*SGD.FftL);
        FftS_I=SGD.FftL/SGD.Ffts*FftS(l:h);
        if coder.target('MATLAB')
            filesave_ceval(coder.ignoreSize(FftS_I),foldername,coder.ignoreSize(fn3f),size(FftS_I),0);
        else
            filesave_ceval(coder.ignoreSize(FftS_I),foldername,coder.ignoreSize(fn3f),size(FftS_I),1);
        end

        

    end