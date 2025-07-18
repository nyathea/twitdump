//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSString, NSURL;

@interface TFSTwitterStickerCategory : NSObject
{
    NSString *_categoryID;
    NSString *_type;
    NSString *_displayName;
    NSString *_promotedBy;
    NSURL *_iconURL;
    NSArray *_stickersWithVariants;
    NSDate *_startTime;
    NSDate *_endTime;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDate *endTime; // @synthesize endTime=_endTime;
@property(readonly, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
@property(readonly, nonatomic) NSArray *stickersWithVariants; // @synthesize stickersWithVariants=_stickersWithVariants;
@property(readonly, nonatomic) NSURL *iconURL; // @synthesize iconURL=_iconURL;
@property(readonly, copy, nonatomic) NSString *promotedBy; // @synthesize promotedBy=_promotedBy;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, nonatomic) NSString *type; // @synthesize type=_type;
@property(readonly, nonatomic) NSString *categoryID; // @synthesize categoryID=_categoryID;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithCategoryID:(id)arg1 displayName:(id)arg2 promotedBy:(id)arg3 type:(id)arg4 iconURL:(id)arg5 stickersWithVariants:(id)arg6 startTime:(id)arg7 endTime:(id)arg8;
- (id)init;

@end

