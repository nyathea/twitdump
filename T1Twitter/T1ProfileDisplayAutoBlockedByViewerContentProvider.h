//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface T1ProfileDisplayAutoBlockedByViewerContentProvider
{
    CDUnknownBlockType _pushViewControllerBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType pushViewControllerBlock; // @synthesize pushViewControllerBlock=_pushViewControllerBlock;
- (void)_t1_onActionedTweetsUserStateDidUpdateNotification:(id)arg1;
- (void)_t1_addObservers;
- (id)_t1_dateStringFromExpirationDate:(id)arg1;
- (id)_t1_secondaryButtonConfiguration;
- (CDUnknownBlockType)_t1_secondaryButtonTappedBlock;
- (id)_t1_buttonConfiguration;
- (CDUnknownBlockType)_t1_buttonTappedBlock;
- (id)_t1_subtitleConfigurationWithUsername:(id)arg1 expirationDate:(id)arg2;
- (id)_t1_subtitleBoldRangesFromSpannedSubtitle:(id)arg1;
- (id)_t1_spannedSubtitleTextWithUsername:(id)arg1 expirationDate:(id)arg2;
- (id)_t1_titleTextWithUsername:(id)arg1;
- (_Bool)_t1_canAutoBlockedByViewerViewAppear;
- (void)profileViewModelDidInvalidateWithReason:(long long)arg1;
- (id)generateDefaultMainViewController;
- (id)scribeSection;
- (id)scribePage;
- (_Bool)shouldAllowScrollingWhenCurrent;
- (_Bool)canBecomeCurrent;

@end

