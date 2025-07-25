//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIImageView, UIView;

@interface PTVSelectionTableViewCell
{
    UIView *_circleView;
    _Bool _showsEmptyCircleWhenAccessoryInvisible;
    UIImageView *_accessoryImage;
    struct UIEdgeInsets _contentInsets;
}

+ (id)SelectionAccessoryImage;
- (void).cxx_destruct;
@property(nonatomic) _Bool showsEmptyCircleWhenAccessoryInvisible; // @synthesize showsEmptyCircleWhenAccessoryInvisible=_showsEmptyCircleWhenAccessoryInvisible;
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(readonly, nonatomic) UIImageView *accessoryImage; // @synthesize accessoryImage=_accessoryImage;
@property(nonatomic) _Bool accessoryVisible;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;

@end

