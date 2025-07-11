//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIImageView.h>

@class TFNPromptImageSpec, TFNTappableHighlightView;

@interface TFNPromptImageView : UIImageView
{
    TFNPromptImageSpec *_imageSpec;
    TFNTappableHighlightView *_highlightView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TFNTappableHighlightView *highlightView; // @synthesize highlightView=_highlightView;
@property(readonly, nonatomic) TFNPromptImageSpec *imageSpec; // @synthesize imageSpec=_imageSpec;
- (void)_tfn_didTap:(id)arg1;
- (void)didMoveToSuperview;
- (id)initWithImageSpec:(id)arg1;

@end

