//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSNumber;

@interface TAVHydraMainBroadcaster : NSObject
{
    _Bool _isLive;
    NSMutableDictionary *_userInfo;
    NSNumber *_audioLevel;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSNumber *audioLevel; // @synthesize audioLevel=_audioLevel;
@property(readonly, nonatomic) _Bool isLive; // @synthesize isLive=_isLive;
@property(readonly, nonatomic) NSMutableDictionary *userInfo; // @synthesize userInfo=_userInfo;
- (id)description;
@property(readonly, nonatomic) _Bool isActive;
- (id)initWithIsLive:(_Bool)arg1;

@end

