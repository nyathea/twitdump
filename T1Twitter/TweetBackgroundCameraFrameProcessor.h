//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, UIColor, UIImage;
@protocol MTLBuffer, MTLCommandQueue, MTLDevice, MTLRenderPipelineState, MTLTexture;

@interface TweetBackgroundCameraFrameProcessor : NSObject
{
    UIImage *_overlayImage;
    id <MTLTexture> _overlayTexture;
    id <MTLBuffer> _overlayTextureVertices;
    id <MTLTexture> _sampleBufferTexture;
    MISSING_TYPE *_sampleBufferViewportSize;
    id <MTLBuffer> _sampleBufferTextureVertices;
    id <MTLTexture> _maskingTexture;
    struct CGRect _videoFrame;
    double _videoFrameCornerRadius;
    unsigned long long _cornerMask;
    id <MTLTexture> _overlayVideoTexture;
    id <MTLBuffer> _overlayVideoTextureVertices;
    id <MTLTexture> _renderTargetTexture;
    id <MTLDevice> _mDevice;
    id <MTLCommandQueue> _mCommandQueue;
    id <MTLRenderPipelineState> _pipelineState;
    UIColor *_backgroundColor;
    _Bool _fullscreenModeEnabled;
    double _scale;
    double _rotation;
    struct CGPoint _translation;
    struct CGRect _overlayRect;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool fullscreenModeEnabled; // @synthesize fullscreenModeEnabled=_fullscreenModeEnabled;
@property(nonatomic) double rotation; // @synthesize rotation=_rotation;
@property(nonatomic) struct CGPoint translation; // @synthesize translation=_translation;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(readonly, nonatomic) struct CGRect overlayRect; // @synthesize overlayRect=_overlayRect;
- (void)_setupOverlayScaleIfNeededWithCaptureOrientation:(long long)arg1;
- (void)_setupPipelineIfNeeded;
- (void)_setupTargetTextureIfNeeded;
- (void)_setupOverlayVideoTextureIfNeeded:(struct __CVBuffer *)arg1;
- (void)_setupOverlayTextureIfNeeded:(id)arg1;
- (void)_setupMaskingTextureIfNeeded:(struct __CVBuffer *)arg1;
- (void)_setupSampleBufferTextureIfNeeded:(struct __CVBuffer *)arg1;
- (struct opaqueCMSampleBuffer *)processSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 separationPixelBuffer:(struct __CVBuffer *)arg2 videoPixelBuffer:(struct __CVBuffer *)arg3 captureOrientation:(long long)arg4;
@property(readonly, nonatomic) struct CGRect viewPort;
- (struct CGRect)overlayRectInCaptureRect:(struct CGRect)arg1;
- (id)initWithOverlayImage:(id)arg1 videoFrame:(struct CGRect)arg2 videoFrameCornerRadius:(double)arg3 cornerMask:(unsigned long long)arg4 backgroundColor:(id)arg5;

@end

