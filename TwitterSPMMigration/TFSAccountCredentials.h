//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface TFSAccountCredentials : NSObject
{
    MISSING_TYPE *credentialsImpl;
}

- (void).cxx_destruct;
- (id)init;
- (_Bool)removeSecretWithStore:(id)arg1 error:(id *)arg2;
- (void)deferSecretIfNeededWithStore:(id)arg1;
- (_Bool)saveSecretIfNeededWithStore:(id)arg1 error:(id *)arg2;
- (id)initWithToken:(id)arg1 secret:(id)arg2;
@property(nonatomic, readonly) _Bool needsSave;
@property(nonatomic, readonly) NSString *secret;
@property(nonatomic, readonly) NSString *token;

@end

