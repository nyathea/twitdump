//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface TFSTwitterConversationControl : NSObject
{
    MISSING_TYPE *conversationControlType;
    MISSING_TYPE *conversationOwner;
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) NSString *description;
- (_Bool)isEqual:(id)arg1;
@property(nonatomic, readonly) long long hash;
- (id)copyWithZone:(void *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithConversationControlType:(long long)arg1 conversationOwner:(id)arg2;
@property(nonatomic, readonly) NSString *conversationOwner;
@property(nonatomic, readonly) long long conversationControlType; // @synthesize conversationControlType;

@end

