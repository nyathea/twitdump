//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC14T1TwitterSwift35LaunchMetricsReporterNetworkMonitor : NSObject
{
    MISSING_TYPE *communicationAgent;
    MISSING_TYPE *hasNetworkRemainedReachable;
}

- (void).cxx_destruct;
- (id)init;
- (void)tnl_communicationAgent:(id)arg1 didRegisterObserverWithInitialReachabilityFlags:(unsigned int)arg2 status:(long long)arg3 carrierInfo:(id)arg4 WWANRadioAccessTechnology:(id)arg5 captivePortalStatus:(long long)arg6;
- (void)tnl_communicationAgent:(id)arg1 didUpdateReachabilityFromPreviousFlags:(unsigned int)arg2 previousStatus:(long long)arg3 toCurrentFlags:(unsigned int)arg4 currentStatus:(long long)arg5;

@end

