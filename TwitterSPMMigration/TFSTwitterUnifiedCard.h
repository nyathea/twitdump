//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface TFSTwitterUnifiedCard : NSObject
{
    MISSING_TYPE *unifiedCardID;
    MISSING_TYPE *cardUri;
    MISSING_TYPE *layout;
    MISSING_TYPE *cardType;
    MISSING_TYPE *displayOptions;
    MISSING_TYPE *experimentSignals;
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) NSString *cardTypeString;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(nonatomic, readonly) NSString *unifiedCardID;
- (_Bool)isEqual:(id)arg1;

@end

