//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString, TFSTwitterBirdwatchNote, TFSTwitterBirdwatchPivotCallToAction, TFSURTRichText;

@interface TFSTwitterBirdwatchPivot : NSObject
{
    MISSING_TYPE *title;
    MISSING_TYPE *titleDetail;
    MISSING_TYPE *shortTitle;
    MISSING_TYPE *subtitle;
    MISSING_TYPE *footer;
    MISSING_TYPE *destinationURL;
    MISSING_TYPE *callToAction;
    MISSING_TYPE *note;
    MISSING_TYPE *iconType;
    MISSING_TYPE *visualStyle;
}

- (void).cxx_destruct;
- (id)init;
- (void)encodeWith:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(nonatomic, readonly) long long hash;
@property(nonatomic, readonly) long long visualStyle; // @synthesize visualStyle;
@property(nonatomic, readonly) long long iconType; // @synthesize iconType;
@property(nonatomic, readonly) TFSTwitterBirdwatchNote *note; // @synthesize note;
@property(nonatomic, readonly) TFSTwitterBirdwatchPivotCallToAction *callToAction; // @synthesize callToAction;
@property(nonatomic, readonly) NSString *destinationURL;
@property(nonatomic, readonly) TFSURTRichText *footer; // @synthesize footer;
@property(nonatomic, readonly) TFSURTRichText *subtitle; // @synthesize subtitle;
@property(nonatomic, readonly) NSString *shortTitle;
@property(nonatomic, readonly) NSString *titleDetail;
@property(nonatomic, readonly) NSString *title;

@end

