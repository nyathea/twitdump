//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TFNTwitterAccount, TFNTwitterStatus, TFSTwitterScribeContext;

@interface T1ConversationControlChangeSelectionControllerDelegate : NSObject
{
    _Bool _tweetHasMention;
    TFSTwitterScribeContext *_scribeContext;
    TFNTwitterAccount *_account;
    TFNTwitterStatus *_status;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool tweetHasMention; // @synthesize tweetHasMention=_tweetHasMention;
@property(readonly, nonatomic) TFNTwitterStatus *status; // @synthesize status=_status;
@property(readonly, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(readonly, nonatomic) TFSTwitterScribeContext *scribeContext; // @synthesize scribeContext=_scribeContext;
- (void)_t1_changeTweetConversationControlTo:(unsigned long long)arg1;
- (id)conversationControlIconNameForType:(unsigned long long)arg1;
- (id)conversationControlAccessibilityTextForType:(unsigned long long)arg1;
- (id)conversationControlDisplayTextForType:(unsigned long long)arg1;
@property(readonly, nonatomic) _Bool shouldDelaySelectionAction;
- (void)conversationControlOptionWasSelectedWithType:(unsigned long long)arg1;
- (id)initWithScribeContext:(id)arg1 account:(id)arg2 status:(id)arg3;

@end

