//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TwitterAppSPMMigration/NSObject-Protocol.h>

@class NSError, PTVGuestServicesPollingModel, PTVGuestServicesResponse;

@protocol PTVGuestServicesPollingModelDelegate <NSObject>
- (void)didPollGuestServicesWithError:(NSError *)arg1;
- (void)didPollGuestServicesWithResponse:(PTVGuestServicesResponse *)arg1;
- (void)willPollGuestServices:(PTVGuestServicesPollingModel *)arg1;
@end

