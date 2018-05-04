%hook QSNewsArticleVideoCell

- (void)handlePlayBtnPress:(id)arg1 
{
	%orig;
}

%end 


// 启动图广告
%hook TADSplashWindow
- (id)initWithSplashItem:(id)arg1 splashDelegate:(id)arg2 withLaunchType:(long long)arg3 noOrderHold:(double)arg4 {

	return nil;
}
%end



// %hook QSMPADViewController 
// - (id)initWithNibName:(id)arg1 bundle:(id)arg2 {
// 	return nil;
// }
// %end
