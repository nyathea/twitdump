//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, TFSScribeThriftCommonHeader, TFSScribeThriftLogBase;

@interface TFSScribeThriftVersionedCommonHeader : NSObject
{
    _Bool _logBaseIsSet;
    _Bool _commonHeaderIsSet;
    TFSScribeThriftLogBase *_logBase;
    TFSScribeThriftCommonHeader *_commonHeader;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool commonHeaderIsSet; // @synthesize commonHeaderIsSet=_commonHeaderIsSet;
@property(retain, nonatomic) TFSScribeThriftCommonHeader *commonHeader; // @synthesize commonHeader=_commonHeader;
@property(readonly, nonatomic) _Bool logBaseIsSet; // @synthesize logBaseIsSet=_logBaseIsSet;
@property(retain, nonatomic) TFSScribeThriftLogBase *logBase; // @synthesize logBase=_logBase;
- (void)validate;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLogBase:(id)arg1 commonHeader:(id)arg2;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

