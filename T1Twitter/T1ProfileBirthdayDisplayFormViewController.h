//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TwitterSPMMigration/TFNLegacyFormViewController.h>

@protocol T1ProfileBirthdayDisplayFormViewControllerDelegate;

@interface T1ProfileBirthdayDisplayFormViewController : TFNLegacyFormViewController
{
    id <T1ProfileBirthdayDisplayFormViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <T1ProfileBirthdayDisplayFormViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)formFieldDidBeginEditingUserInput:(id)arg1 withStopEditingAction:(CDUnknownBlockType)arg2;
- (_Bool)private_updateViewSize;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithDisplayText:(id)arg1 delegate:(id)arg2;

@end

