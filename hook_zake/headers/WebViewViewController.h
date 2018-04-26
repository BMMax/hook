//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RootViewController.h"

#import "UIWebViewDelegate.h"

@class NSString, UIWebView;

@interface WebViewViewController : RootViewController <UIWebViewDelegate>
{
    NSString *_titleString;
    NSString *_urlString;
    UIWebView *_webView;
}

@property(retain, nonatomic) UIWebView *webView; // @synthesize webView=_webView;
@property(copy, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
@property(copy, nonatomic) NSString *titleString; // @synthesize titleString=_titleString;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (_Bool)navigationShouldPopOnBackButton;
- (void)clearWebCacheThreeMethod;
- (void)clearWebCacheTwoMethod;
- (void)clearWebCacheOneMethod;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)webViewDidFinishLoad:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)createWebViewUI;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

