//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UILabel;

@interface PTVAmplifyProgramTableViewCell
{
    UILabel *_titleLabel;
}

+ (struct CGSize)ProfileImageSize;
+ (id)TitleLabelColor;
+ (id)TitleLabelFont;
+ (double)HeightForAmplifyProgramTableViewCellWithTitle:(id)arg1 ContainerSize:(struct CGSize)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSString *title;
- (void)loadTitleLabel;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

