//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class PTVDividerView, UIView;

@interface PTVTableViewCell : UITableViewCell
{
    UIView *_highlightedShade;
    _Bool _isHighlighted;
    _Bool _usesCustomHighlightShade;
    PTVDividerView *_topBorder;
    PTVDividerView *_bottomBorder;
    unsigned long long _bottomBorderState;
}

+ (id)emptyCellForRowAtIndexPath:(id)arg1 tableView:(id)arg2 reuseIdentifier:(id)arg3;
+ (id)emptyCell;
- (void).cxx_destruct;
@property(nonatomic) _Bool usesCustomHighlightShade; // @synthesize usesCustomHighlightShade=_usesCustomHighlightShade;
@property(nonatomic) unsigned long long bottomBorderState; // @synthesize bottomBorderState=_bottomBorderState;
@property(readonly, nonatomic) PTVDividerView *bottomBorder; // @synthesize bottomBorder=_bottomBorder;
@property(readonly, nonatomic) PTVDividerView *topBorder; // @synthesize topBorder=_topBorder;
- (void)highlightedState;
- (double)bottomBorderInsetRight;
- (double)bottomBorderInsetLeft;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;

@end

