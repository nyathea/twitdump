//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, TFNToastAction, TFNToastScribeContext, TFSTwitterScribeContext, UIColor, UIImage;
@protocol TFSTwitterLegacyScribeLogMethods;

@interface T1BookmarkToast : NSObject
{
    _Bool _isSuccessfulBookmark;
    _Bool _isRedundantBookmark;
    _Bool _isSuccessfulBookmarkRemove;
    id <TFSTwitterLegacyScribeLogMethods> _scribe;
    TFSTwitterScribeContext *_context;
    NSString *_detailText;
    NSString *_iconName;
    TFNToastAction *_primaryAction;
    TFNToastAction *_alternateAction;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TFNToastAction *alternateAction; // @synthesize alternateAction=_alternateAction;
@property(retain, nonatomic) TFNToastAction *primaryAction; // @synthesize primaryAction=_primaryAction;
@property(copy, nonatomic) NSString *iconName; // @synthesize iconName=_iconName;
@property(copy, nonatomic) NSString *detailText; // @synthesize detailText=_detailText;
@property(nonatomic) _Bool isSuccessfulBookmarkRemove; // @synthesize isSuccessfulBookmarkRemove=_isSuccessfulBookmarkRemove;
@property(nonatomic) _Bool isRedundantBookmark; // @synthesize isRedundantBookmark=_isRedundantBookmark;
@property(nonatomic) _Bool isSuccessfulBookmark; // @synthesize isSuccessfulBookmark=_isSuccessfulBookmark;
@property(retain, nonatomic) TFSTwitterScribeContext *context; // @synthesize context=_context;
@property(retain, nonatomic) id <TFSTwitterLegacyScribeLogMethods> scribe; // @synthesize scribe=_scribe;
@property(readonly, copy, nonatomic) NSString *messageText;
- (id)initWithBookmarkRemoveSuccess:(_Bool)arg1;
- (id)initWithBookmarkSuccess:(_Bool)arg1 isRedundantBookmark:(_Bool)arg2 scribe:(id)arg3 scribeContext:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSArray *detailTextBoldRanges;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSArray",?,R,N

@property(readonly, nonatomic) CDUnknownBlockType dismissCompletionHandler;
// Preceding property had unknown attributes: ?
// Original attribute string: T@?,?,R,N

@property(readonly, nonatomic) double displayDuration;
// Preceding property had unknown attributes: ?
// Original attribute string: Td,?,R,N

@property(readonly, nonatomic) long long hapticFeedbackType;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,R,N

@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) CDUnknownBlockType iconAccessoryViewProvider;
// Preceding property had unknown attributes: ?
// Original attribute string: T@?,?,R,N

@property(readonly, nonatomic) UIColor *iconColor;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UIColor",?,R,N

@property(readonly, copy, nonatomic) NSString *identifier;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C,N

@property(readonly, nonatomic) NSArray *messageTextBoldRanges;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSArray",?,R,N

@property(readonly, nonatomic) TFNToastScribeContext *scribeContext;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"TFNToastScribeContext",?,R,N

@property(readonly) Class superclass;
@property(readonly, nonatomic) UIImage *thumbnailImage;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UIImage",?,R,N


@end

