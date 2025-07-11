//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableView.h>

@class UIView;
@protocol PTVTableViewFullScreen, PTVTableViewRefresh;

@interface PTVTableView : UITableView
{
    PTVTableView *_weakSelf;
    UIView<PTVTableViewFullScreen> *_fullView;
    id <PTVTableViewRefresh> _tableViewRefreshControl;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <PTVTableViewRefresh> tableViewRefreshControl; // @synthesize tableViewRefreshControl=_tableViewRefreshControl;
@property(retain, nonatomic) UIView<PTVTableViewFullScreen> *fullView; // @synthesize fullView=_fullView;
- (void)layoutFullView;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;
- (void)reloadData;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (void)setContentOffset:(struct CGPoint)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (_Bool)_observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;

@end

