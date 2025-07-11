//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCell.h>

@class NSString, UIColor, UIFont, UILabel;

@interface T1CameraModeSelectorCollectionViewCell : UICollectionViewCell
{
    UIColor *_textColor;
    UIColor *_selectedTextColor;
    UILabel *_label;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIColor *selectedTextColor; // @synthesize selectedTextColor=_selectedTextColor;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
- (void)_t1_main_updateLabel;
- (void)setSelected:(_Bool)arg1;
- (void)applyLayoutAttributes:(id)arg1;
- (void)prepareForReuse;
@property(copy, nonatomic) NSString *text;
@property(retain, nonatomic) UIFont *textFont;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

