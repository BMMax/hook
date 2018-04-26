//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RootViewController.h"

@class AliVcMediaPlayer, NSDate, NSDictionary, NSString, UIButton, UIImageView, UILabel, UITapGestureRecognizer, UIView;

@interface LiverViewController : RootViewController
{
    _Bool _isCollection;
    _Bool _isError;
    _Bool _hiddenStatusBar;
    NSDate *_startDate;
    NSDate *_endDate;
    _Bool _isHot;
    _Bool _isFirst;
    NSDictionary *_liverInfo;
    NSString *_adUrl;
    id <LiverViewControllerDelegate> _delegate;
    AliVcMediaPlayer *_aliyunPlayer;
    UIView *_contentView;
    NSDictionary *_playInfo;
    long long _reconnectCount;
    UIImageView *_loadingView;
    UIView *_playerInfoView;
    UIButton *_iconBtn;
    UIButton *_collectionBtn;
    UILabel *_nameLabel;
    UIButton *_shutdownBtn;
    UIButton *_reportBtn;
    UITapGestureRecognizer *_tapGes;
}

@property(retain, nonatomic) UITapGestureRecognizer *tapGes; // @synthesize tapGes=_tapGes;
@property(retain, nonatomic) UIButton *reportBtn; // @synthesize reportBtn=_reportBtn;
@property(retain, nonatomic) UIButton *shutdownBtn; // @synthesize shutdownBtn=_shutdownBtn;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIButton *collectionBtn; // @synthesize collectionBtn=_collectionBtn;
@property(retain, nonatomic) UIButton *iconBtn; // @synthesize iconBtn=_iconBtn;
@property(retain, nonatomic) UIView *playerInfoView; // @synthesize playerInfoView=_playerInfoView;
@property(retain, nonatomic) UIImageView *loadingView; // @synthesize loadingView=_loadingView;
@property(nonatomic) long long reconnectCount; // @synthesize reconnectCount=_reconnectCount;
@property(retain, nonatomic) NSDictionary *playInfo; // @synthesize playInfo=_playInfo;
@property(nonatomic) _Bool isFirst; // @synthesize isFirst=_isFirst;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) AliVcMediaPlayer *aliyunPlayer; // @synthesize aliyunPlayer=_aliyunPlayer;
@property(nonatomic) _Bool isHot; // @synthesize isHot=_isHot;
@property(nonatomic) __weak id <LiverViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *adUrl; // @synthesize adUrl=_adUrl;
@property(retain, nonatomic) NSDictionary *liverInfo; // @synthesize liverInfo=_liverInfo;
- (void).cxx_destruct;
- (void)handleReumePlayerWhenBackForeground;
- (void)handleReumePlayerWhenEnterForeground;
- (void)dealloc;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)stopPlayer;
- (void)pasuePlayer;
- (void)resumePlayer;
- (void)playError;
- (void)startPlay;
- (void)registerPlayerNotifications;
- (void)onVideoFirstFrame:(id)arg1;
- (void)onVideoStop:(id)arg1;
- (void)OnEndCache:(id)arg1;
- (void)OnStartCache:(id)arg1;
- (void)OnSeekDone:(id)arg1;
- (void)OnVideoError:(id)arg1;
- (void)OnVideoFinish:(id)arg1;
- (void)OnVideoPrepared:(id)arg1;
- (void)createAliyunPlayer;
- (void)changeFullPlayModel;
- (void)handleReport:(id)arg1;
- (void)handleShutdown;
- (_Bool)prefersStatusBarHidden;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;
- (void)fullScreenPlay:(_Bool)arg1;
- (void)collectionAction;
- (void)createUI;
- (void)changeLoadingView:(_Bool)arg1;
- (void)addLoadingView;
- (void)fetchLiver;
- (void)changeCollection:(_Bool)arg1;
- (void)refreshCollectionButton;
- (void)requestForRoomStats;
- (void)getCollectionList;
- (id)dateFromString:(id)arg1 format:(id)arg2;
- (void)VerifyExpireTime;

@end

