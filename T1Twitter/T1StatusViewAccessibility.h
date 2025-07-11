//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, UIView;
@protocol TTACoreBasicStatusView;

@interface T1StatusViewAccessibility : NSObject
{
    UIView<TTACoreBasicStatusView> *_statusView;
    NSArray *_customActions;
}

+ (id)_t1_video_AccessibilityLabelWithViewModel:(id)arg1;
+ (id)_t1_engagementStringWithDisplayCount:(long long)arg1 singularStringFormat:(id)arg2 pluralStringFormat:(id)arg3;
+ (id)attachmentAccessibilityLabelWithViewModel:(id)arg1 options:(unsigned long long)arg2 attachmentType:(unsigned long long)arg3 visibleCardForwardView:(id)arg4;
+ (id)_t1_refactored_accessibilityLabelWithStatusViewModel:(id)arg1 displayTextOptions:(unsigned long long)arg2 includeAuthor:(_Bool)arg3 includePendingTweetInformation:(_Bool)arg4 includeEngagements:(_Bool)arg5 includeConversationTextForViewModel:(CDUnknownBlockType)arg6 attachmentType:(unsigned long long)arg7 secondaryAttachmentType:(unsigned long long)arg8 visibleInlineMediaCount:(long long)arg9 visibleCardForwardView:(id)arg10 communityName:(id)arg11 userPresenceString:(id)arg12;
+ (id)_t1_accessibilityLabelWithStatusViewModel:(id)arg1 displayTextOptions:(unsigned long long)arg2 includeAuthor:(_Bool)arg3 includePendingTweetInformation:(_Bool)arg4 includeEngagements:(_Bool)arg5 includeConversationTextForViewModel:(CDUnknownBlockType)arg6 attachmentType:(unsigned long long)arg7 secondaryAttachmentType:(unsigned long long)arg8 visibleInlineMediaCount:(long long)arg9 visibleCardForwardView:(id)arg10 communityName:(id)arg11 userPresenceString:(id)arg12;
+ (id)accessibilityLabelWithStatusViewModel:(id)arg1 displayTextOptions:(unsigned long long)arg2 includeAuthor:(_Bool)arg3 includePendingTweetInformation:(_Bool)arg4 includeEngagements:(_Bool)arg5 includeConversationTextForViewModel:(CDUnknownBlockType)arg6 attachmentType:(unsigned long long)arg7 secondaryAttachmentType:(unsigned long long)arg8 visibleInlineMediaCount:(long long)arg9 visibleCardForwardView:(id)arg10 communityName:(id)arg11 userPresenceString:(id)arg12;
+ (id)_t1_axMediaStringForCombinedViewModel:(id)arg1 visibleInlineMediaCount:(long long)arg2 account:(id)arg3;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *customActions; // @synthesize customActions=_customActions;
@property(readonly, nonatomic) __weak UIView<TTACoreBasicStatusView> *statusView; // @synthesize statusView=_statusView;
- (id)accessibilityCustomActions;
- (void)updateAccessibilityCustomActions:(id)arg1 entityAction:(CDUnknownBlockType)arg2 attachmentType:(unsigned long long)arg3 visibleCardForwardView:(id)arg4;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2 hitView:(id)arg3;
- (id)init;
- (id)initWithStatusView:(id)arg1;

@end

