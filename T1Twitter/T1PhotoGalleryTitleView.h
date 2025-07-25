//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TwitterSPMMigration/TFNTitleView.h>

@class UITapGestureRecognizer;
@protocol T1PhotoGalleryTitleViewDelegate;

@interface T1PhotoGalleryTitleView : TFNTitleView
{
    id <T1PhotoGalleryTitleViewDelegate> _delegate;
    UITapGestureRecognizer *_tapGestureRecognizer;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(nonatomic) __weak id <T1PhotoGalleryTitleViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_didTap:(id)arg1;
- (void)_updateAccessoryImage;
@property(nonatomic, getter=isTapEnabled) _Bool tapEnabled;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

