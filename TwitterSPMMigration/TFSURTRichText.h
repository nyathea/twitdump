//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray, NSString;

@interface TFSURTRichText : NSObject
{
    MISSING_TYPE *text;
    MISSING_TYPE *rtl;
    MISSING_TYPE *entities;
    MISSING_TYPE *alignment;
}

- (void).cxx_destruct;
- (id)init;
- (_Bool)isEqual:(id)arg1;
@property(nonatomic, readonly) long long hash;
- (id)initWithText:(id)arg1 rtl:(_Bool)arg2 entities:(id)arg3 alignment:(long long)arg4;
@property(nonatomic, readonly) long long alignment; // @synthesize alignment;
@property(nonatomic, readonly) NSArray *entities;
@property(nonatomic, readonly) NSString *text;
- (id)toActiveTextRanges;
- (id)toAttributedStringWithFontGroup:(id)arg1 baseTextColor:(id)arg2 boldTextColor:(id)arg3;

@end

