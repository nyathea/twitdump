//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TwitterAppSPMMigration/NSObject-Protocol.h>

@class NSArray, PTVGiftContributorWatcher, PTVVirtualGift, PTVVirtualGiftContributor;

@protocol PTVGiftContributorObserver <NSObject>
- (void)giftContributorWatcher:(PTVGiftContributorWatcher *)arg1 didUpdateStarTotal:(long long)arg2 previousTotal:(long long)arg3;
- (void)giftContributorWatcher:(PTVGiftContributorWatcher *)arg1 didGetContribution:(PTVVirtualGift *)arg2 fromContributor:(PTVVirtualGiftContributor *)arg3;
- (void)giftContributorWatcher:(PTVGiftContributorWatcher *)arg1 didUpdateContributorList:(NSArray *)arg2;
@end

