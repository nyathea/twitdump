//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UITapGestureRecognizer;
@protocol PTVProfileImageViewDelegate;

@interface PTVProfileImageView
{
    UITapGestureRecognizer *_defaultImageTapRecognizer;
}

+ (id)CircularProfilePlaceholder;
+ (id)ProfilePlaceholder;
- (void).cxx_destruct;
@property(readonly, nonatomic) UITapGestureRecognizer *defaultImageTapRecognizer; // @synthesize defaultImageTapRecognizer=_defaultImageTapRecognizer;
- (void)profileImagePressed;
- (void)updateTapRecognizer;
- (_Bool)shouldEnableTapRecognizer;
- (void)setDelegate:(id)arg1;
@property(readonly, nonatomic) id <PTVProfileImageViewDelegate> profileImageViewDelegate;
- (void)didMoveToWindow;
- (id)initWithDelegate:(id)arg1 placeholderImage:(id)arg2;
- (id)initWithDelegate:(id)arg1 usingPlaceholder:(_Bool)arg2;
- (id)initUsingPlaceholder:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

