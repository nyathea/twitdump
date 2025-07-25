//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <T1Twitter/NSObject-Protocol.h>

@class TFSTwitterScribeContext, UIViewController;
@protocol T1ModalViewControllerNonModalPresentationDelegate, T1ProfileViewController;

@protocol T1ModalProfileViewController <NSObject>
@property(readonly, nonatomic) TFSTwitterScribeContext *scribeContext;
@property(nonatomic) __weak id <T1ModalViewControllerNonModalPresentationDelegate> nonModalPresentationDelegate;
@property(readonly, nonatomic) UIViewController *presentedFromViewController;
@property(readonly, nonatomic) UIViewController<T1ProfileViewController> *profileContentViewController;
- (void)dismissAndPresentViewControllerCreatedFromBlock:(void (^)(UIViewController *, void (^)(UIViewController *)))arg1;
@end

