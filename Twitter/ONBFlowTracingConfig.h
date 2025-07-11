//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface ONBFlowTracingConfig : NSObject
{
    NSString *_freedEventName;
    NSString *_startEventName;
    NSString *_startedEventName;
    NSString *_loadingEventName;
    NSString *_loadingSuccessEventName;
    NSString *_loadingFailureEventName;
}

+ (id)tracingConfigForSignupFlowFromAccountSwitcher;
+ (id)tracingConfigForSignupFlowFromSplashScreen;
+ (id)tracingConfigForWelcomeFlow;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *loadingFailureEventName; // @synthesize loadingFailureEventName=_loadingFailureEventName;
@property(retain, nonatomic) NSString *loadingSuccessEventName; // @synthesize loadingSuccessEventName=_loadingSuccessEventName;
@property(retain, nonatomic) NSString *loadingEventName; // @synthesize loadingEventName=_loadingEventName;
@property(retain, nonatomic) NSString *startedEventName; // @synthesize startedEventName=_startedEventName;
@property(retain, nonatomic) NSString *startEventName; // @synthesize startEventName=_startEventName;
@property(retain, nonatomic) NSString *freedEventName; // @synthesize freedEventName=_freedEventName;

@end

