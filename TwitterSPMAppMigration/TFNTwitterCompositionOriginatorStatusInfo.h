//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface TFNTwitterCompositionOriginatorStatusInfo : NSObject
{
    _Bool _earned;
    NSString *_promotedContentImpressionID;
}

+ (id)originatorStatusInfoWithStatus:(id)arg1;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *promotedContentImpressionID; // @synthesize promotedContentImpressionID=_promotedContentImpressionID;
@property(readonly, nonatomic) _Bool earned; // @synthesize earned=_earned;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEarned:(_Bool)arg1 promotedContentImpressionID:(id)arg2;
- (id)init;

@end

