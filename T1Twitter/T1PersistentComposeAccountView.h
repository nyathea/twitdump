//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIImageView;

@interface T1PersistentComposeAccountView
{
    _Bool _accountSwitchingDisabled;
    UIImageView *_caretImageView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool accountSwitchingDisabled; // @synthesize accountSwitchingDisabled=_accountSwitchingDisabled;
@property(readonly, nonatomic) UIImageView *caretImageView; // @synthesize caretImageView=_caretImageView;
- (void)_t1_updateCaretImageView;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)calculatedLayoutMetrics;
- (id)initWithFrame:(struct CGRect)arg1;

@end

