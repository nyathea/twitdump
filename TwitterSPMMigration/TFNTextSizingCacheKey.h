//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber, NSString, UIFont;

@interface TFNTextSizingCacheKey : NSObject
{
    NSString *_text;
    UIFont *_font;
    NSNumber *_width;
    NSNumber *_lineBreakMode;
    NSNumber *_multiline;
    NSNumber *_truncatedText;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;

@end

