//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSString, UIButton, UIImageView, UILabel;

@interface PTVModerationEmptyTableView : UIView
{
    UIImageView *_emptyImage;
    UILabel *_emptyTitleLabel;
    UILabel *_emptyLabel;
    UIButton *_button;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIButton *button; // @synthesize button=_button;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 buttonText:(id)arg3 buttonRounded:(_Bool)arg4;
- (struct CGRect)frameForFullViewScreenInTableView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

