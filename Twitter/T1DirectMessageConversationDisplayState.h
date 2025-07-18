//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet, TFNTwitterAccount;
@protocol TFNDirectMessageConversation;

@interface T1DirectMessageConversationDisplayState : NSObject
{
    _Bool _isPresentedModally;
    id <TFNDirectMessageConversation> _conversation;
    TFNTwitterAccount *_account;
    NSMutableDictionary *_textModelsByEntryID;
    NSMutableDictionary *_displayRangesByEntryID;
    NSMutableSet *_impressionScribedEntryIDs;
    NSMutableSet *_detailsShownEntryIDs;
    NSMutableSet *_messageRevealedEntryIDs;
    NSMutableDictionary *_readReceiptDisplayModeByEntryIDs;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableDictionary *readReceiptDisplayModeByEntryIDs; // @synthesize readReceiptDisplayModeByEntryIDs=_readReceiptDisplayModeByEntryIDs;
@property(readonly, nonatomic) NSMutableSet *messageRevealedEntryIDs; // @synthesize messageRevealedEntryIDs=_messageRevealedEntryIDs;
@property(readonly, nonatomic) NSMutableSet *detailsShownEntryIDs; // @synthesize detailsShownEntryIDs=_detailsShownEntryIDs;
@property(readonly, nonatomic) NSMutableSet *impressionScribedEntryIDs; // @synthesize impressionScribedEntryIDs=_impressionScribedEntryIDs;
@property(readonly, nonatomic) NSMutableDictionary *displayRangesByEntryID; // @synthesize displayRangesByEntryID=_displayRangesByEntryID;
@property(readonly, nonatomic) NSMutableDictionary *textModelsByEntryID; // @synthesize textModelsByEntryID=_textModelsByEntryID;
@property(readonly, nonatomic) _Bool isPresentedModally; // @synthesize isPresentedModally=_isPresentedModally;
@property(readonly, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(readonly, nonatomic) id <TFNDirectMessageConversation> conversation; // @synthesize conversation=_conversation;
- (id)_cacheKeyForEntry:(id)arg1;
- (void)setReadReceiptDisplayMode:(unsigned long long)arg1 forEntry:(id)arg2;
- (unsigned long long)readReceiptDisplayModeForEntry:(id)arg1;
- (void)setMessageRevealed:(_Bool)arg1 forFilteredEntry:(id)arg2;
- (_Bool)messageRevealedForFilteredEntry:(id)arg1;
- (void)setDetailsShown:(_Bool)arg1 forEntry:(id)arg2;
- (_Bool)detailsShownForEntry:(id)arg1;
- (void)setImpressionScribed:(_Bool)arg1 forEntry:(id)arg2;
- (_Bool)impressionScribedForEntry:(id)arg1;
- (void)setDisplayRanges:(id)arg1 forEntry:(id)arg2;
- (id)displayRangesForEntry:(id)arg1;
- (void)setTextModel:(id)arg1 forEntry:(id)arg2;
- (id)textModelForEntry:(id)arg1;
- (id)initWithConversation:(id)arg1 account:(id)arg2 isPresentedModally:(_Bool)arg3;

@end

