//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface T1SubscriptionJourneyManager : NSObject
{
    MISSING_TYPE *account;
    MISSING_TYPE *upsellFatigueManager;
    MISSING_TYPE *configRepository;
    MISSING_TYPE *introOfferAvailabilityCache;
}

+ (void)setShared:(id)arg1;
+ (id)shared;
- (void).cxx_destruct;
- (id)init;
- (void)setupWithAccount:(id)arg1;
- (void)dismissReplyBoostUpsellWithAccount:(id)arg1;
- (_Bool)shouldShowReplyBoostUpsellWithAccount:(id)arg1;
- (_Bool)shouldShowProfileUpgradeUpsellWithAccount:(id)arg1;
- (_Bool)shouldShowProfileAnalyticUpsellWithAccount:(id)arg1;

@end

