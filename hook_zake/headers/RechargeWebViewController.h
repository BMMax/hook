//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KINWebBrowserViewController.h"

@class NSArray;

@interface RechargeWebViewController : KINWebBrowserViewController
{
    NSArray *_trustedScheme;
}

@property(retain, nonatomic) NSArray *trustedScheme; // @synthesize trustedScheme=_trustedScheme;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)viewDidLoad;

@end

