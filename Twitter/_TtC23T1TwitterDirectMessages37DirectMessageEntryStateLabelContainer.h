//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC23T1TwitterDirectMessages37DirectMessageEntryStateLabelContainer : UIView
{
    MISSING_TYPE *senderLabel;
    MISSING_TYPE *senderTimestampSeparatorLabel;
    MISSING_TYPE *timestampLabel;
    MISSING_TYPE *timestampEntryStateSeparatorLabel;
    MISSING_TYPE *entryStateLabel;
    MISSING_TYPE *editedLabel;
    MISSING_TYPE *sendingEllipsisEditedSeparatorLabel;
    MISSING_TYPE *bottomAlignmentConstraints;
    MISSING_TYPE *sendingEllipsisLabel;
    MISSING_TYPE *timerTickCount;
    MISSING_TYPE *ellipsisTimer;
    MISSING_TYPE *viewModel;
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)timerUpdateEllipsis:(id)arg1;
@property(nonatomic, readonly) struct CGSize intrinsicContentSize;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

