//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface TFSTwitterProfessionalCategory : NSObject
{
    MISSING_TYPE *categoryId;
    MISSING_TYPE *name;
    MISSING_TYPE *display;
}

+ (id)categoriesFromJsonDictionaryArray:(id)arg1;
- (void).cxx_destruct;
- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(nonatomic, readonly) _Bool display; // @synthesize display;
@property(nonatomic, readonly) NSString *name;
@property(nonatomic, readonly) long long categoryId; // @synthesize categoryId;
- (id)copyWithZone:(void *)arg1;

@end

