//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class T1OpenExternalURLSessionManager;

@interface T1ExternalURLBehavior : NSObject
{
    _Bool _opensExternalURLs;
    _Bool _externalURLsAreTrusted;
    T1OpenExternalURLSessionManager *_sessionManager;
}

+ (id)untrustedExternalURLBehaviorWithManager:(id)arg1;
+ (id)trustedExternalURLBehaviorWithManager:(id)arg1;
+ (id)behaviorIgnoringExternalURL;
- (void).cxx_destruct;
@property(readonly, nonatomic) T1OpenExternalURLSessionManager *sessionManager; // @synthesize sessionManager=_sessionManager;
@property(readonly, nonatomic) _Bool externalURLsAreTrusted; // @synthesize externalURLsAreTrusted=_externalURLsAreTrusted;
@property(readonly, nonatomic) _Bool opensExternalURLs; // @synthesize opensExternalURLs=_opensExternalURLs;
- (void)convertToTrusted;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initAllowingExternalURLs:(_Bool)arg1 externalURLsAreTrusted:(_Bool)arg2 sessionManager:(id)arg3;

@end

