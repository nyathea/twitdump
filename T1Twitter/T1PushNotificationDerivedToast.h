//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, T1HydratedPushNotificationPayload, T1PushNotificationRouteAppContext, TFNToastAction, TFNToastScribeContext, UIColor, UIImage;
@protocol T1PushNotificationRoute, TFSTwitterCanonicalUser;

@interface T1PushNotificationDerivedToast : NSObject
{
    _Bool _isDetailTextDuplicateOfMessageText;
    T1HydratedPushNotificationPayload *_hydratedPayload;
    T1PushNotificationRouteAppContext *_routeContext;
    id <T1PushNotificationRoute> _route;
    NSString *_messageText;
    NSArray *_messageTextBoldRanges;
    NSString *_detailText;
    NSString *_iconName;
    id <TFSTwitterCanonicalUser> _user;
    CDUnknownBlockType _iconAccessoryViewProvider;
    TFNToastAction *_primaryAction;
    TFNToastScribeContext *_scribeContext;
}

+ (id)_t1_toastMessageAndBoldRangesForSupportedHydratedPayload:(id)arg1;
+ (void)toastForPayload:(id)arg1 routeContext:(id)arg2 route:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) TFNToastScribeContext *scribeContext; // @synthesize scribeContext=_scribeContext;
@property(retain, nonatomic) TFNToastAction *primaryAction; // @synthesize primaryAction=_primaryAction;
@property(copy, nonatomic) CDUnknownBlockType iconAccessoryViewProvider; // @synthesize iconAccessoryViewProvider=_iconAccessoryViewProvider;
@property(retain, nonatomic) id <TFSTwitterCanonicalUser> user; // @synthesize user=_user;
@property(copy, nonatomic) NSString *iconName; // @synthesize iconName=_iconName;
@property(nonatomic) _Bool isDetailTextDuplicateOfMessageText; // @synthesize isDetailTextDuplicateOfMessageText=_isDetailTextDuplicateOfMessageText;
@property(copy, nonatomic) NSString *detailText; // @synthesize detailText=_detailText;
@property(retain, nonatomic) NSArray *messageTextBoldRanges; // @synthesize messageTextBoldRanges=_messageTextBoldRanges;
@property(copy, nonatomic) NSString *messageText; // @synthesize messageText=_messageText;
@property(readonly, nonatomic) id <T1PushNotificationRoute> route; // @synthesize route=_route;
@property(readonly, nonatomic) T1PushNotificationRouteAppContext *routeContext; // @synthesize routeContext=_routeContext;
@property(readonly, nonatomic) T1HydratedPushNotificationPayload *hydratedPayload; // @synthesize hydratedPayload=_hydratedPayload;
@property(readonly, nonatomic) NSString *directMessageConversationID;
@property(readonly, copy, nonatomic) NSString *identifier;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C,N

@property(readonly, nonatomic) long long hapticFeedbackType;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,R,N

@property(readonly, nonatomic) UIColor *iconColor;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UIColor",?,R,N

- (id)initWithHydratedPayload:(id)arg1 routeContext:(id)arg2 route:(id)arg3;

// Remaining properties
@property(readonly, nonatomic) TFNToastAction *alternateAction;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"TFNToastAction",?,R,N

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

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) UIImage *thumbnailImage;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UIImage",?,R,N


@end

