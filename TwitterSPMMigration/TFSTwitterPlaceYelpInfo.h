//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSNumber, NSString;

@interface TFSTwitterPlaceYelpInfo : NSObject
{
    MISSING_TYPE *businessId;
    MISSING_TYPE *url;
    MISSING_TYPE *mobileUrl;
    MISSING_TYPE *rating;
    MISSING_TYPE *reviewCount;
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) NSString *description;
- (_Bool)isEqual:(id)arg1;
@property(nonatomic, readonly) long long hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithBusinessId:(id)arg1 url:(id)arg2 mobileUrl:(id)arg3 rating:(id)arg4 reviewCount:(id)arg5;
@property(nonatomic, readonly) NSNumber *reviewCount;
@property(nonatomic, readonly) NSNumber *rating;
@property(nonatomic, readonly) NSString *mobileUrl;
@property(nonatomic, readonly) NSString *url;
@property(nonatomic, readonly) NSString *businessId;

@end

