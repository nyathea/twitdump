//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TwitterSPMMigration/TFSDependentConcurrentOperation.h>

@class NSError, NSString, TFNTwitterCompositionPollingCard, TFNTwitterCompositionUploadContext;
@protocol TFNTwitterCompositionUploadPollOperationDelegate, TFSTwitterAPICommandCancellable;

@interface TFNTwitterCompositionUploadPollOperation : TFSDependentConcurrentOperation
{
    unsigned long long _resultState;
    NSError *_error;
    id <TFNTwitterCompositionUploadPollOperationDelegate> _delegate;
    TFNTwitterCompositionPollingCard *_poll;
    TFNTwitterCompositionUploadContext *_context;
    id <TFSTwitterAPICommandCancellable> _commandOperation;
}

- (void).cxx_destruct;
@property(retain) id <TFSTwitterAPICommandCancellable> commandOperation; // @synthesize commandOperation=_commandOperation;
@property(readonly, nonatomic) TFNTwitterCompositionUploadContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) TFNTwitterCompositionPollingCard *poll; // @synthesize poll=_poll;
@property(nonatomic) __weak id <TFNTwitterCompositionUploadPollOperationDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) NSError *resultError; // @synthesize resultError=_error;
@property unsigned long long resultState; // @synthesize resultState=_resultState;
- (void)_tfn_main_cardsCreateCommandDidCreateCard:(id)arg1 error:(id)arg2;
- (void)cancel;
- (void)_tfn_main_run;
- (void)run;
- (id)initWithPoll:(id)arg1 context:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

