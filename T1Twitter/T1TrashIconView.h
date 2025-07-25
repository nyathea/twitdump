//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIImageView;

@interface T1TrashIconView : UIView
{
    _Bool _open;
    UIImageView *_binImageView;
    UIImageView *_lidImageView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIImageView *lidImageView; // @synthesize lidImageView=_lidImageView;
@property(readonly, nonatomic) UIImageView *binImageView; // @synthesize binImageView=_binImageView;
@property(nonatomic, getter=isOpen) _Bool open; // @synthesize open=_open;
- (void)setOpen:(_Bool)arg1 animated:(_Bool)arg2;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

