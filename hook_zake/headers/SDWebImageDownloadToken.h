//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SDWebImageOperation.h"

@class NSOperation<SDWebImageDownloaderOperationInterface>, NSString, NSURL;

@interface SDWebImageDownloadToken : NSObject <SDWebImageOperation>
{
    NSURL *_url;
    id _downloadOperationCancelToken;
    NSOperation<SDWebImageDownloaderOperationInterface> *_downloadOperation;
}

@property(nonatomic) __weak NSOperation<SDWebImageDownloaderOperationInterface> *downloadOperation; // @synthesize downloadOperation=_downloadOperation;
@property(retain, nonatomic) id downloadOperationCancelToken; // @synthesize downloadOperationCancelToken=_downloadOperationCancelToken;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (void)cancel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

