//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class MISSING_TYPE;
@protocol T1UndoSendInfoViewDelegate;

@interface T1UndoSendInfoView : UIView
{
    MISSING_TYPE *delegate;
    MISSING_TYPE *progressLayer;
    MISSING_TYPE *progressBackgroundLayer;
    MISSING_TYPE *sendNowButton;
    MISSING_TYPE *sendTweetLabel;
    MISSING_TYPE *undoButton;
    MISSING_TYPE *tweetQueuedDate;
    MISSING_TYPE *tweetSendDate;
    MISSING_TYPE *labelProgressText;
    MISSING_TYPE *hasAttachments;
}

+ (double)desiredHeightForWidth:(double)arg1 andSendNowButtonHidden:(_Bool)arg2;
- (void).cxx_destruct;
- (void)didTapUndoButton;
- (void)didTapSendNowButton;
- (void)cancelProgress;
- (void)updateViewContextForSending;
- (void)updateWithTweetQueuedDate:(id)arg1 tweetSendDate:(id)arg2;
- (void)layoutSubviews;
- (void)didMoveToWindow;
@property(nonatomic) _Bool hasAttachments; // @synthesize hasAttachments;
@property(nonatomic) _Bool isSendNowButtonHidden;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) __weak id <T1UndoSendInfoViewDelegate> delegate; // @synthesize delegate;

@end

