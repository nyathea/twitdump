//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TFSScribe;

@interface TFNTwitterScribeLifecycleObserver : NSObject
{
    TFSScribe *_scribeService;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TFSScribe *scribeService; // @synthesize scribeService=_scribeService;
- (void)_didRemoveAccountNotification:(id)arg1;
- (id)init;
- (id)initWithScribeService:(id)arg1;

@end

