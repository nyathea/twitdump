//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, UIView;
@protocol TAVPixelBufferSource, TAVPlayerOutputView, TAVPlayerTechnologyObserver;

@interface _TtC22TwitterAVCoreMediaCast25MediaCastPlayerTechnology : NSObject
{
    MISSING_TYPE *pixelBufferSource;
    MISSING_TYPE *observer;
    MISSING_TYPE *outputView;
    MISSING_TYPE *metadata;
    MISSING_TYPE *initialPlaybackTime;
    MISSING_TYPE *currentControlState;
}

- (void).cxx_destruct;
- (id)init;
- (void)handleMediaCastDidFail;
- (void)handleMediaCastStatusUpdateWithNotification:(id)arg1;
- (void)generateDebugReportWithParentReport:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)updateQualityEndpointsIfNeeded;
- (void)stopNativePictureInPicture;
- (_Bool)isNativePictureInPictureActive;
- (void)startNativePictureInPicture;
- (_Bool)isNativePictureInPicturePossible;
- (void)playerTechnologyPrepareForDestruction;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)applyControlState:(id)arg1;
@property(nonatomic, retain) UIView<TAVPlayerOutputView> *outputView; // @synthesize outputView;
@property(nonatomic) __weak id <TAVPlayerTechnologyObserver> observer; // @synthesize observer;
@property(nonatomic, readonly) id <TAVPixelBufferSource> pixelBufferSource; // @synthesize pixelBufferSource;

@end

