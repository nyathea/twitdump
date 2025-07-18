//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSDate;
@protocol AVRInternalRenderView;

@interface AVRRenderView : UIView
{
    _Bool _readyForDisplay;
    long long _contentGravity;
    NSDate *_lastRenderTime;
    UIView<AVRInternalRenderView> *_renderView;
    double _lastAspect;
    struct __CVBuffer *_lastAcquiredPixelBuffer;
    unsigned long long _bufferID;
    struct CGRect _cachedBounds;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long bufferID; // @synthesize bufferID=_bufferID;
@property(nonatomic) struct __CVBuffer *lastAcquiredPixelBuffer; // @synthesize lastAcquiredPixelBuffer=_lastAcquiredPixelBuffer;
@property double lastAspect; // @synthesize lastAspect=_lastAspect;
@property struct CGRect cachedBounds; // @synthesize cachedBounds=_cachedBounds;
@property(retain, nonatomic) UIView<AVRInternalRenderView> *renderView; // @synthesize renderView=_renderView;
@property(retain, nonatomic) NSDate *lastRenderTime; // @synthesize lastRenderTime=_lastRenderTime;
@property(nonatomic) _Bool readyForDisplay; // @synthesize readyForDisplay=_readyForDisplay;
@property(nonatomic) long long contentGravity; // @synthesize contentGravity=_contentGravity;
- (id)_createInternalViewWithTechnology:(long long)arg1 isOpaque:(_Bool)arg2;
- (void)captureStillImageWithCompletion:(CDUnknownBlockType)arg1;
- (void)displayPixelBuffer:(struct __CVBuffer *)arg1 bufferID:(unsigned long long)arg2 presentationTime:(double)arg3;
- (void)displayPixelBuffer:(struct __CVBuffer *)arg1;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 technology:(long long)arg2 isOpaque:(_Bool)arg3;
- (id)initWithFrame:(struct CGRect)arg1 isOpaque:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

