//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface UIView (HLToast)
- (struct CGSize)GetStringProperSize:(id)arg1 font:(id)arg2 width:(float)arg3;
- (void)hideToastActivity;
- (void)makeToastActivity:(id)arg1 intercept:(_Bool)arg2;
- (void)makeToastActivity:(id)arg1;
- (void)makeToastActivityWithType:(long long)arg1 intercept:(_Bool)arg2;
- (void)makeToastActivityWithIntercept:(_Bool)arg1;
- (void)makeToastActivityWithType:(long long)arg1;
- (void)makeToastActivity;
- (id)viewForMessage:(id)arg1 title:(id)arg2 image:(id)arg3;
- (struct CGPoint)centerPointForPosition:(id)arg1 withToast:(id)arg2;
- (void)makeToast:(id)arg1 duration:(double)arg2 position:(id)arg3;
- (void)makeToast:(id)arg1 duration:(double)arg2;
- (void)makeToast:(id)arg1;
@end

