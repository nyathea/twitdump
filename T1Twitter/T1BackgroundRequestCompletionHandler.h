//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface T1BackgroundRequestCompletionHandler : NSObject
{
    CDStruct_977e3b8b _onceToken;
}

+ (id)sharedInstance;
- (void)handleBackgroundRequestFinished:(id)arg1 response:(id)arg2 sessionConfigurationIdentifier:(id)arg3 sharedContainerIdentifier:(id)arg4 taskIdentifier:(id)arg5 pairedOperation:(id)arg6;
- (void)_t1_handleBackgroundRequestFinished:(id)arg1;
- (void)dealloc;
- (id)init;

@end

