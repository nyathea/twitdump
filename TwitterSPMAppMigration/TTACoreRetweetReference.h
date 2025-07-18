//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface TTACoreRetweetReference : NSObject
{
    long long _statusID;
    long long _retweetID;
    long long _userID;
}

@property(readonly, nonatomic) long long userID; // @synthesize userID=_userID;
@property(readonly, nonatomic) long long retweetID; // @synthesize retweetID=_retweetID;
@property(readonly, nonatomic) long long statusID; // @synthesize statusID=_statusID;
- (id)initWithStatus:(id)arg1;
- (id)initWithCoreStatus:(id)arg1;
- (id)initWithStatusID:(long long)arg1 retweetID:(long long)arg2 userID:(long long)arg3;

@end

