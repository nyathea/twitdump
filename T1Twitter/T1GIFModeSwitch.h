//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIControl.h>

@class MISSING_TYPE;

@interface T1GIFModeSwitch : UIControl
{
    MISSING_TYPE *modeChangedHandler;
    MISSING_TYPE *trackBackgroundColor;
    MISSING_TYPE *trackBackgroundBoarderColor;
    MISSING_TYPE *thumbColor;
    MISSING_TYPE *controlSize;
    MISSING_TYPE *thumbSize;
    MISSING_TYPE *borderWidth;
    MISSING_TYPE *thumbInset;
    MISSING_TYPE *leftImageSelected;
    MISSING_TYPE *leftImageUnselected;
    MISSING_TYPE *rightImageSelected;
    MISSING_TYPE *rightImageUnselected;
    MISSING_TYPE *mode;
    MISSING_TYPE *trackLayer;
    MISSING_TYPE *thumbLayer;
    MISSING_TYPE *leftImageLayer;
    MISSING_TYPE *rightImageLayer;
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)touchUp;
- (void)touchDown;
- (void)swipeLeftRight:(id)arg1;
- (void)setMode:(long long)arg1 animated:(_Bool)arg2;
- (void)layoutSublayersOfLayer:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
@property(nonatomic, readonly) struct CGSize intrinsicContentSize;
@property(nonatomic, copy) CDUnknownBlockType modeChangedHandler;

@end

