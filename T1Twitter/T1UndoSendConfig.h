//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface T1UndoSendConfig : NSObject
{
    MISSING_TYPE *migrationHelper;
    MISSING_TYPE *hasAccessToUndoSendProvider;
    MISSING_TYPE *settings;
    MISSING_TYPE *canUseRemoteSettings;
    MISSING_TYPE *undoRemoteSettings;
}

+ (void)migrateSettingsIfNecessaryFor:(id)arg1;
- (void).cxx_destruct;
- (id)init;
- (_Bool)canSkipToCompositionDetails;
- (double)undoTimeInterval;
- (_Bool)isUndoSendTurnedOnForPollTweets;
- (_Bool)isUndoSendTurnedOnForQuoteTweets;
- (_Bool)isUndoSendTurnedOnForTweetstormTweets;
- (_Bool)isUndoSendTurnedOnForOriginalTweets;
- (_Bool)isUndoSendTurnedOnForReplyTweets;
- (_Bool)hasAccessToUndoSend;
- (id)initWithAccount:(id)arg1;

@end

