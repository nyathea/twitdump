//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TwitterSPMMigration/TFNViewController.h>

@class NSArray, NSString, T1CardConsistencyChecker, T1ComposeCardPreviewView, TFCCardData, TFNButton, TFNTwitterAccount, TFSTimer;
@protocol T1ComposeCardPreviewControllerDelegate, TFSTwitterAPICommandCancellable;

@interface T1ComposeCardPreviewController : TFNViewController
{
    _Bool _shouldFetchCard;
    id <T1ComposeCardPreviewControllerDelegate> _delegate;
    TFNTwitterAccount *_account;
    TFCCardData *_cardData;
    NSString *_clientAttachedCardURL;
    NSArray *_lastDetectedURLsForFetch;
    TFNButton *_removeButton;
    double _detectionDelayInterval;
    TFSTimer *_textChangeDetectionTimer;
    id <TFSTwitterAPICommandCancellable> _pendingRequest;
    T1CardConsistencyChecker *_cardConsistencyChecker;
}

- (void).cxx_destruct;
@property(retain, nonatomic) T1CardConsistencyChecker *cardConsistencyChecker; // @synthesize cardConsistencyChecker=_cardConsistencyChecker;
@property(retain) id <TFSTwitterAPICommandCancellable> pendingRequest; // @synthesize pendingRequest=_pendingRequest;
@property(retain, nonatomic) TFSTimer *textChangeDetectionTimer; // @synthesize textChangeDetectionTimer=_textChangeDetectionTimer;
@property(nonatomic) double detectionDelayInterval; // @synthesize detectionDelayInterval=_detectionDelayInterval;
@property(nonatomic) __weak TFNButton *removeButton; // @synthesize removeButton=_removeButton;
@property(retain, nonatomic) NSArray *lastDetectedURLsForFetch; // @synthesize lastDetectedURLsForFetch=_lastDetectedURLsForFetch;
@property(nonatomic) _Bool shouldFetchCard; // @synthesize shouldFetchCard=_shouldFetchCard;
@property(copy, nonatomic) NSString *clientAttachedCardURL; // @synthesize clientAttachedCardURL=_clientAttachedCardURL;
@property(retain, nonatomic) TFCCardData *cardData; // @synthesize cardData=_cardData;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(nonatomic) __weak id <T1ComposeCardPreviewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)layoutMetricsForComposeCardPreviewView:(id)arg1;
- (id)_stringsFromText:(id)arg1 textEntities:(id)arg2;
- (id)_URLsInText:(id)arg1;
- (double)_msecToInterval:(long long)arg1;
- (void)_processFetchResponse:(id)arg1 error:(id)arg2;
- (void)_makeCardPreviewRequestWithComposerText:(id)arg1;
- (void)_animatedHideCardPreviewWithCompletion:(CDUnknownBlockType)arg1;
- (void)_didTapRemoveButton:(id)arg1;
- (void)_removeCardPreviewForReason:(unsigned long long)arg1 withCardData:(id)arg2;
- (void)_showCardPreviewWithCardData:(id)arg1;
- (_Bool)_isPreviewDisplayed;
- (_Bool)_isCardConsistent:(id)arg1;
- (_Bool)_isCardEnabledForComposePreview:(id)arg1;
- (void)_textChangeDetectionTimerDidFire:(id)arg1;
- (void)_fetchIfNeededForComposerText:(id)arg1 afterDelay:(double)arg2;
- (void)_fetchIfNeededForComposerText:(id)arg1;
- (void)_updateIfNeededForComposerText:(id)arg1;
- (void)_t1_updateCardPreview;
- (void)primeCardURLCacheWithComposerText:(id)arg1;
- (void)cancelPendingCardPreviewRequest;
- (void)changeCardPreviewIfNeededForComposerText:(id)arg1;
- (void)_t1_updateWithCardData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateWithCardData:(id)arg1;
@property(readonly, nonatomic) long long cardDisplayMode;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)initWithAccount:(id)arg1;

// Remaining properties
@property(retain, nonatomic) T1ComposeCardPreviewView *view; // @dynamic view;

@end

