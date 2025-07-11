//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TwitterSPMMigration/TFNDataViewController.h>

@class NSString;

@interface TFNDataViewController (T1AutoplayManager)
- (void)setPolicyBasedAutoplayManager:(id)arg1;
- (id)policyBasedAutoplayManager;
- (id)_scribeImpressionParametersForIndexPath:(id)arg1;
- (id)_scribeComponentForIndexPath:(id)arg1;
- (id)_scribeSectionForIndexPath:(id)arg1;
- (id)_scribePage;
- (id)scribeContextForCardAtIndexPath:(id)arg1;
- (void)muteKeywordViewController:(id)arg1 handleErrorForKeywordString:(id)arg2 action:(unsigned long long)arg3 isUserInputFormError:(_Bool)arg4;
- (void)muteKeywordViewController:(id)arg1 didRefreshKeywordList:(id)arg2 forKeywordString:(id)arg3 action:(unsigned long long)arg4;
@property(nonatomic, readonly) NSString *adDisplayLocation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

