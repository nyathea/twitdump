//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface T1ShareActionPromptsManager : NSObject
{
    MISSING_TYPE *account;
    MISSING_TYPE *features;
    MISSING_TYPE *statusID;
    MISSING_TYPE *shareTooltipImpressionFatigueCountThreshold;
}

+ (void)t1_resetSharePromptThreshold:(id)arg1;
+ (void)t1_resetShareTooltipPrompt:(id)arg1;
+ (id)shared;
- (void).cxx_destruct;
- (void)t1_updateSharePromptImpressionCount:(id)arg1;
- (void)configurePromptsManagerFor:(id)arg1 statusID:(long long)arg2;
- (id)init;

@end

