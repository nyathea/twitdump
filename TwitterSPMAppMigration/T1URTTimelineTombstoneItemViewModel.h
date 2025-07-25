//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString, T1URTTimelineStatusItemViewModel, TFSURTRichText, TTACoreAnatomyFeatures;
@protocol TFNTwitterStatusConversationTreeContext;

@interface T1URTTimelineTombstoneItemViewModel : NSObject
{
    MISSING_TYPE *interstitialedTweet;
    MISSING_TYPE *entryID;
    MISSING_TYPE *tombstone;
    MISSING_TYPE *clientEventInfo;
    MISSING_TYPE *feedbackContext;
    MISSING_TYPE *nonTweetBackedConversationTreeContext;
    MISSING_TYPE *tombstoneKind;
    MISSING_TYPE *anatomyFeatures;
    MISSING_TYPE *isConversationAncestor;
    MISSING_TYPE *isConversationPrecededByAncestor;
}

+ (id)tombstoneWithRichText:(id)arg1;
+ (id)tombstoneWith:(id)arg1 anatomyFeatures:(id)arg2;
- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) TFSURTRichText *messageRichText;
@property(nonatomic, readonly) TFSURTRichText *viewButtonRichText;
@property(nonatomic, readonly) long long hash;
- (_Bool)isEqual:(id)arg1;
@property(nonatomic, readonly) TTACoreAnatomyFeatures *anatomyFeatures; // @synthesize anatomyFeatures;
@property(nonatomic, readonly) _Bool isHydrationTombstone;
@property(nonatomic, readonly) NSString *entryID;
@property(nonatomic, retain) T1URTTimelineStatusItemViewModel *interstitialedTweet; // @synthesize interstitialedTweet;
@property(nonatomic, readonly) id <TFNTwitterStatusConversationTreeContext> conversationTreeContext;

@end

