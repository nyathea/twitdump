//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class GADEventContext, NSString;

@interface GADView : UIView
{
    struct CGSize _lastSize;
    GADEventContext *_context;
}

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)awakeFromNib;
@property(readonly, nonatomic) GADEventContext *context;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 context:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

