//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface _TtC14T1TwitterSwift25TwitterBroadcastShareable : NSObject
{
    MISSING_TYPE *broadcast;
}

- (void).cxx_destruct;
- (id)init;
- (id)urlToTwitterFor:(unsigned long long)arg1;
@property(nonatomic, readonly) _Bool isPrivateOrNonCompliant;
@property(nonatomic, readonly) NSString *scribeElement;
@property(nonatomic, readonly) NSString *scribeComponent;
@property(nonatomic, readonly) NSNumber *scribeParameterID;
@property(nonatomic, readonly) NSString *title;
- (id)bodyTextWith:(id)arg1;
- (void)setShareTokenInURLEnabled:(_Bool)arg1;
- (unsigned long long)limitedActionTypesFor:(id)arg1 scribeContext:(id)arg2;

@end

