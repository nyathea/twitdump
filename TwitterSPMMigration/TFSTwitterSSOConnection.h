//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface TFSTwitterSSOConnection : NSObject
{
    unsigned long long _ssoProvider;
    NSString *_ssoIDHash;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *ssoIDHash; // @synthesize ssoIDHash=_ssoIDHash;
@property(readonly, nonatomic) unsigned long long ssoProvider; // @synthesize ssoProvider=_ssoProvider;
- (unsigned long long)tfs_ssoProviderFromString:(id)arg1;
- (id)plistDictionaryValue;
- (id)initWithPlistDictionary:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithSSOProvider:(unsigned long long)arg1 ssoIDHash:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

