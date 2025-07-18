//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface GADOMIDAdSessionConfiguration : NSObject
{
    _Bool _isolateVerificationScripts;
    unsigned long long _creativeType;
    unsigned long long _impressionType;
    unsigned long long _impressionOwner;
    unsigned long long _mediaEventsOwner;
}

@property _Bool isolateVerificationScripts; // @synthesize isolateVerificationScripts=_isolateVerificationScripts;
@property unsigned long long mediaEventsOwner; // @synthesize mediaEventsOwner=_mediaEventsOwner;
@property unsigned long long impressionOwner; // @synthesize impressionOwner=_impressionOwner;
@property unsigned long long impressionType; // @synthesize impressionType=_impressionType;
@property unsigned long long creativeType; // @synthesize creativeType=_creativeType;
- (id)initWithCreativeType:(unsigned long long)arg1 impressionType:(unsigned long long)arg2 impressionOwner:(unsigned long long)arg3 mediaEventsOwner:(unsigned long long)arg4 isolateVerificationScripts:(_Bool)arg5 error:(id *)arg6;

@end

