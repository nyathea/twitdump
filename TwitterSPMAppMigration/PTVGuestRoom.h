//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSString;

@interface PTVGuestRoom : NSObject
{
    _Bool _availableForReplay;
    NSString *_remoteID;
    NSString *_mediaKey;
    unsigned long long _state;
    NSDate *_start;
    NSString *_title;
    NSArray *_users;
    unsigned long long _totalUsersCount;
}

- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isAvailableForReplay) _Bool availableForReplay; // @synthesize availableForReplay=_availableForReplay;
@property(readonly, nonatomic) unsigned long long totalUsersCount; // @synthesize totalUsersCount=_totalUsersCount;
@property(readonly, copy, nonatomic) NSArray *users; // @synthesize users=_users;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSDate *start; // @synthesize start=_start;
@property(readonly, nonatomic) unsigned long long state; // @synthesize state=_state;
@property(readonly, copy, nonatomic) NSString *mediaKey; // @synthesize mediaKey=_mediaKey;
@property(readonly, copy, nonatomic) NSString *remoteID; // @synthesize remoteID=_remoteID;
@property(readonly, nonatomic, getter=isLiveOrNotStarted) _Bool liveOrNotStarted;
- (id)initWithRemoteID:(id)arg1 mediaKey:(id)arg2 state:(unsigned long long)arg3 start:(id)arg4 title:(id)arg5 users:(id)arg6 totalUsersCount:(unsigned long long)arg7 availableForReplay:(_Bool)arg8;

@end

