%hook QSNewsArticleVideoCell

- (void)handlePlayBtnPress:(id)arg1 
{
	%orig;
}

%end 


// 播放广告
%hook QSMPADViewController
-(id)init{
	return nil;
}
%end

// 启动图广告
%hook TADSplashWindow
- (id)initWithSplashItem:(id)arg1 splashDelegate:(id)arg2 withLaunchType:(long long)arg3 noOrderHold:(double)arg4 {

	return nil;
}
%end
