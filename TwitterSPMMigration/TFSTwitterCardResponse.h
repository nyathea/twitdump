//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString, TFSCS2TwitterCardDataBuilderResult;

@interface TFSTwitterCardResponse : NSObject
{
    MISSING_TYPE *card;
    MISSING_TYPE *capsError;
    MISSING_TYPE *result;
    MISSING_TYPE *reqId;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithCard:(id)arg1 capsError:(id)arg2 result:(id)arg3 reqId:(id)arg4;
@property(nonatomic, readonly) NSString *reqId;
@property(nonatomic, readonly) NSString *result;
@property(nonatomic, readonly) NSString *capsError;
@property(nonatomic, readonly) TFSCS2TwitterCardDataBuilderResult *card;

@end

