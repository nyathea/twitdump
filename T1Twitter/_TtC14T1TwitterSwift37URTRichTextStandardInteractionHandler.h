//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, TFSTwitterScribeContext;
@protocol TFSTwitterLegacyScribeLogMethods;

__attribute__((visibility("hidden")))
@interface _TtC14T1TwitterSwift37URTRichTextStandardInteractionHandler : NSObject
{
    MISSING_TYPE *viewController;
    MISSING_TYPE *account;
    MISSING_TYPE *scribe;
    MISSING_TYPE *scribeContext;
}

- (void).cxx_destruct;
- (id)init;
- (void)userDidLongPressInView:(id)arg1 range:(id)arg2 rect:(struct CGRect)arg3;
- (void)userDidTapWithRange:(id)arg1 rect:(struct CGRect)arg2;
@property(nonatomic, retain) TFSTwitterScribeContext *scribeContext; // @synthesize scribeContext;
@property(nonatomic, retain) id <TFSTwitterLegacyScribeLogMethods> scribe; // @synthesize scribe;

@end

