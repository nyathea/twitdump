//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate;

@interface TFNDirectMessageConversationLabel : NSObject
{
    unsigned long long _labelType;
    NSDate *_timestamp;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) unsigned long long labelType; // @synthesize labelType=_labelType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithTFSLabel:(id)arg1;
- (id)initWithType:(unsigned long long)arg1 timestamp:(id)arg2;

@end

