//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TwitterSPMMigration/TFNItemsDataViewController.h>

@class MISSING_TYPE;
@protocol T1MuteKeywordDurationViewControllerDelegate;

@interface T1MuteKeywordDurationViewController : TFNItemsDataViewController
{
    MISSING_TYPE *foreverItem;
    MISSING_TYPE *dayItem;
    MISSING_TYPE *weekItem;
    MISSING_TYPE *monthItem;
    MISSING_TYPE *forEditing;
    MISSING_TYPE *duration;
    MISSING_TYPE *delegate;
}

- (void).cxx_destruct;
- (id)initWithCollectionViewLayout:(id)arg1;
- (void)update:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (id)initWithInitiallySelectedDuration:(double)arg1 title:(id)arg2 forEditing:(_Bool)arg3;
@property(nonatomic) __weak id <T1MuteKeywordDurationViewControllerDelegate> delegate; // @synthesize delegate;
@property(nonatomic) double duration; // @synthesize duration;

@end

