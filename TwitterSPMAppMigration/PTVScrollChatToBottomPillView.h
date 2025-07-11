//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PTVScrollChatToBottomPillView
{
    unsigned long long _numberOfUnreadMessages;
}

+ (id)BackgroundColor;
+ (id)TitleColor;
+ (id)TitleFont;
+ (id)CaretImage;
@property(nonatomic) unsigned long long numberOfUnreadMessages; // @synthesize numberOfUnreadMessages=_numberOfUnreadMessages;
- (void)updateButtonTitle;
- (void)animateNewMessageReceived;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;

@end

