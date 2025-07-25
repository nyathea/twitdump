//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, T1DirectMessageActivityEntryViewModel, TFNAttributedTextView;

@interface T1DirectMessageActivityEntryCell
{
    TFNAttributedTextView *_activityLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TFNAttributedTextView *activityLabel; // @synthesize activityLabel=_activityLabel;
- (_Bool)accessibilityActivate;
- (void)attributedTextView:(id)arg1 didTapRange:(id)arg2 rect:(struct CGRect)arg3;
- (void)layoutSubviews;
@property(retain, nonatomic) T1DirectMessageActivityEntryViewModel *entryViewModel; // @dynamic entryViewModel;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

