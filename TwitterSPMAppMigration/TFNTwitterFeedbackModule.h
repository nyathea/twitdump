//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, TFNTwitterDismiss;

@interface TFNTwitterFeedbackModule : NSObject
{
    NSArray *_feedbackInfos;
    TFNTwitterDismiss *_dismissInfo;
    TFNTwitterDismiss *_currentDismiss;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TFNTwitterDismiss *currentDismiss; // @synthesize currentDismiss=_currentDismiss;
@property(readonly, nonatomic) TFNTwitterDismiss *dismissInfo; // @synthesize dismissInfo=_dismissInfo;
@property(readonly, nonatomic) NSArray *feedbackInfos; // @synthesize feedbackInfos=_feedbackInfos;
- (id)initWithDismiss:(id)arg1 confirmationFeedbacks:(id)arg2;
- (id)init;

@end

