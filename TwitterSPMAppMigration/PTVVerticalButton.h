//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIButton.h>

@interface PTVVerticalButton : UIButton
{
    double _spacingBetweenImageAndText;
}

@property(nonatomic) double spacingBetweenImageAndText; // @synthesize spacingBetweenImageAndText=_spacingBetweenImageAndText;
- (struct CGSize)imageAndBackgroundSize;
- (struct CGRect)imageAndBackgroundRectForContentRect:(struct CGRect)arg1;
- (struct CGRect)titleRectForContentRect:(struct CGRect)arg1;
- (struct CGRect)imageRectForContentRect:(struct CGRect)arg1;
- (struct CGRect)backgroundRectForBounds:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;

@end

