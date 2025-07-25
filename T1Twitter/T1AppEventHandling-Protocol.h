//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <T1Twitter/NSObject-Protocol.h>

@class NSArray, NSData, NSDictionary, NSError, NSURL, NSUserActivity, UIApplicationShortcutItem;

@protocol T1AppEventHandling <NSObject>
- (void)saveCurrentComposeState;
- (void)onApplicationDidReceiveMemoryWarning;
- (void)onApplicationPerformActionForShortcutItem:(UIApplicationShortcutItem *)arg1 completionHandler:(void (^)(_Bool))arg2;
- (_Bool)onApplicationOpenURL:(NSURL *)arg1 options:(NSDictionary *)arg2;
- (void)onApplicationDidFailToRegisterForRemoteNotificationsWithError:(NSError *)arg1;
- (void)onApplicationDidRegisterForRemoteNotificationsWithDeviceToken:(NSData *)arg1;
- (void)onApplicationDidReceiveRemoteNotification:(NSDictionary *)arg1 fetchCompletionHandler:(void (^)(unsigned long long))arg2;
- (_Bool)onApplicationContinueUserActivity:(NSUserActivity *)arg1;
- (void)onApplicationWillTerminate;
- (NSArray *)onApplicationDidEnterBackground;
- (void)onApplicationWillEnterForegroundFromBackground;
- (void)onApplicationWillResignActive;
- (void)onApplicationDidBecomeActive;
- (void)onApplicationDidTransitionFromSignedOut;
- (void)onApplicationReconnectWithOptions:(NSDictionary *)arg1;
- (void)onApplicationDidFinishStartingWithOptions:(NSDictionary *)arg1 didLaunchInBackground:(_Bool)arg2;
- (_Bool)onApplicationStartWithOptions:(NSDictionary *)arg1;
- (void)onApplicationDidFinishLaunching;
- (void)onApplicationDelegateInit;
- (void)onApplicationDelegateLoad;
@end

