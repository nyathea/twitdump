//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <T1Twitter/NSObject-Protocol.h>

@class NSArray, T1TweetComposeLocator, TFSTwitterLocation, TFSTwitterPlace, UIViewController;

@protocol T1TweetComposeLocatorDelegate <NSObject>
@property(retain, nonatomic) TFSTwitterPlace *selectedLocation;
@property(readonly, nonatomic) NSArray *attachments;
@property(readonly, nonatomic) UIViewController *viewControllerForPresentation;
@property(retain, nonatomic) TFSTwitterPlace *selectedPlace;
@property(retain, nonatomic) NSArray *suggestedPlaces;
@property(retain, nonatomic) TFSTwitterLocation *assetLocation;
- (void)showAdditionalPOISuggestions:(_Bool)arg1;
- (void)updateLocationView;

@optional
- (void)tweetComposeLocatorDidCompleteGeoLookup:(T1TweetComposeLocator *)arg1;
- (void)tweetComposeLocatorWillPerformGeoLookup:(T1TweetComposeLocator *)arg1;
- (void)tweetComposeLocator:(T1TweetComposeLocator *)arg1 didUpdateGeoSupportStatus:(_Bool)arg2;
@end

