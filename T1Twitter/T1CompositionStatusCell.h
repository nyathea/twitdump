//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIView;

@interface T1CompositionStatusCell
{
    _Bool _isUndoable;
    UIView *_tintedOverlay;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *tintedOverlay; // @synthesize tintedOverlay=_tintedOverlay;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (id)t1_highlightedColor:(_Bool)arg1;
@property(nonatomic) _Bool isUndoable; // @synthesize isUndoable=_isUndoable;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

