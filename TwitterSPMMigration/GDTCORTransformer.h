//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol GDTCORApplicationProtocol, OS_dispatch_queue;

@interface GDTCORTransformer : NSObject
{
    NSObject<OS_dispatch_queue> *_eventWritingQueue;
    id <GDTCORApplicationProtocol> _application;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <GDTCORApplicationProtocol> application; // @synthesize application=_application;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *eventWritingQueue; // @synthesize eventWritingQueue=_eventWritingQueue;
- (void)transformEvent:(id)arg1 withTransformers:(id)arg2 onComplete:(CDUnknownBlockType)arg3;
- (id)initWithApplication:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

