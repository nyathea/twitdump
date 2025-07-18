//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TFNTwitterAccount;

@interface TFNGeoDataAccountAccessController : NSObject
{
    _Bool _authorized;
    _Bool _backgrounded;
    TFNTwitterAccount *_account;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isBackgrounded) _Bool backgrounded; // @synthesize backgrounded=_backgrounded;
@property(nonatomic, getter=isAuthorized) _Bool authorized; // @synthesize authorized=_authorized;
@property(readonly, nonatomic) __weak TFNTwitterAccount *account; // @synthesize account=_account;
- (void)_tfn_background_updateAuthorized;
- (void)_tfn_notification_authorizationManagerDidUpdateServiceStatus:(id)arg1;
- (void)_tfn_notification_applicationDidEnterBackground:(id)arg1;
- (void)_tfn_notification_applicationWillEnterForeground:(id)arg1;
@property(readonly, nonatomic, getter=isUsingRetainedGeoDataAllowed) _Bool usingRetainedGeoDataAllowed;
@property(readonly, nonatomic, getter=isAccessAllowed) _Bool accessAllowed;
- (id)initWithAccount:(id)arg1;
- (id)init;

@end

