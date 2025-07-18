//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TwitterAppSPMMigration/NSObject-Protocol.h>

@class NSArray, NSString, PTVGuestRoomUser;
@protocol PTVLoggedInUserProtocol;

@protocol PTVGuestRoomParticipantsProviderContext <NSObject>
@property(readonly, nonatomic) NSArray *currentGuestCallers;
@property(readonly, nonatomic) NSArray *currentSpeakerIDs;
@property(readonly, nonatomic) _Bool isIncognito;
@property(readonly, nonatomic) _Bool isReplaying;
@property(readonly, nonatomic) NSString *broadcastID;
@property(readonly, nonatomic) id <PTVLoggedInUserProtocol> loggedInUser;
- (PTVGuestRoomUser *)guestRoomUserByID:(NSString *)arg1;
@end

