//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface PTVColor : NSObject
{
    NSArray *_chatColorsArray;
    NSArray *_audioScopeColorsArray;
}

+ (id)BackgroundShadeColor;
+ (id)ProfileLimitedBannerBackgroundColor;
+ (id)ProfileLimitedBannerLabelColor;
+ (id)UnreadActivityBackgroundColor;
+ (id)UserCollectionSocialContextLabelColor;
+ (id)WhiteCardBorderColor;
+ (id)SegmentedButtonColor;
+ (id)LoginViewPhoneButtonHighlighted;
+ (id)LoginViewPhoneButton;
+ (id)NotificationsPermissionsNotificationLabel;
+ (id)NotificationsPermissionsPeriscopeLabel;
+ (id)Gray80;
+ (id)Gray75;
+ (id)Gray60;
+ (id)Gray50;
+ (id)TranslucentBlack_60;
+ (id)TranslucentBlack_50;
+ (id)TranslucentBlack_30;
+ (id)TranslucentBlack_15;
+ (id)TranslucentWhite_70;
+ (id)TranslucentWhite_60;
+ (id)TranslucentWhite_50;
+ (id)TranslucentWhite_15;
+ (id)ChatCommentBlockedContentBackground;
+ (id)CameraGridExactLineColor;
+ (id)BroadcastStatsGradientEnd;
+ (id)BroadcastStatsGradientStart;
+ (id)GoogleGrayHighlighted;
+ (id)GoogleGray;
+ (id)FacebookBlueHighlighted;
+ (id)FacebookBlue;
+ (id)TwitterBlueHighlighted;
+ (id)TwitterBlue;
+ (id)LightBlueBackground;
+ (id)BlueyGrey;
+ (id)TransparentDivider;
+ (id)DarkDividerColor;
+ (id)LightDividerColor;
+ (id)Gold;
+ (id)Silver;
+ (id)Bronze;
+ (id)CarnationChat;
+ (id)FernChat;
+ (id)SkyBlueChat;
+ (id)VividTangerineChat;
+ (id)BrownChat;
+ (id)PinkChat;
+ (id)TealChat;
+ (id)YellowChat;
+ (id)RedChat;
+ (id)PeriwinkleChat;
+ (id)GreenChat;
+ (id)PurpleChat;
+ (id)OrangeChat;
+ (id)GlobalListBackground;
+ (id)PreBroadcastBlack;
+ (id)BlueReplay;
+ (id)VideoBackgroundColor;
+ (id)BroadcastSubtitleBackground;
+ (id)BroadcastControlsBackground;
+ (id)White;
+ (id)WhiteBoxBorder;
+ (id)Background;
+ (id)YellowWarning;
+ (id)Yellow;
+ (id)LightRed;
+ (id)NegativeRed;
+ (id)Red;
+ (id)AcceptAsGuestGreen;
+ (id)PositiveGreen;
+ (id)Green;
+ (id)LightBlue;
+ (id)BlueHighlighted;
+ (id)DarkBlue;
+ (id)Blue;
+ (id)LightText;
+ (id)TranslucentWhiteTextHighlighted;
+ (id)TranslucentWhiteText;
+ (id)TranslucentBlack;
+ (id)Dark;
+ (id)Clear;
+ (id)ptv_ColorNamed:(id)arg1;
+ (id)colorBundle;
+ (id)ImageFromColor:(id)arg1;
+ (id)SharedInstance;
- (void).cxx_destruct;
- (id)audioScopeColorAtIndex:(unsigned long long)arg1;
- (id)chatColorAtIndex:(long long)arg1;
@property(readonly, nonatomic) long long numberOfChatColors;
- (id)init;

@end

