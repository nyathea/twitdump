//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIImage;
@protocol T1ProfileViewModel;

@interface T1ProfileHeaderSlideshowDataSource : NSObject
{
    id <T1ProfileViewModel> _viewModel;
    unsigned long long _imageType;
    UIImage *_previewImage;
}

- (void).cxx_destruct;
- (double)slideshow:(id)arg1 defaultZoomScaleForSlideAtIndex:(long long)arg2;
- (id)slideshow:(id)arg1 previewImageForSlideAtIndex:(long long)arg2;
- (long long)slideshow:(id)arg1 typeForSlideAtIndex:(long long)arg2 isMixedMediaConsumptionEnabled:(_Bool)arg3;
- (id)slideshow:(id)arg1 imageTransformerForSlideAtIndex:(long long)arg2;
- (struct CGSize)slideshow:(id)arg1 imageDimensionsForSlideAtIndex:(long long)arg2;
- (id)slideshow:(id)arg1 imageURLStringForSlideAtIndex:(long long)arg2;
- (id)slideshow:(id)arg1 mediaForSlideAtIndex:(long long)arg2;
- (long long)numberOfSlidesInSlideshow:(id)arg1;
- (id)slideshow:(id)arg1 directMessagePlayableForSlideAtIndex:(long long)arg2;
- (id)slideshow:(id)arg1 statusForSlideAtIndex:(long long)arg2;
- (id)initWithProfileViewModel:(id)arg1 imageType:(unsigned long long)arg2 previewImage:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

