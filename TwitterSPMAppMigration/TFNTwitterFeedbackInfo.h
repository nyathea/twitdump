//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, TFNTwitterFeedbackDisplayContext;

@interface TFNTwitterFeedbackInfo : NSObject
{
    NSArray *_actions;
    TFNTwitterFeedbackDisplayContext *_displayContext;
    NSString *_metadata;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *metadata; // @synthesize metadata=_metadata;
@property(readonly, nonatomic) TFNTwitterFeedbackDisplayContext *displayContext; // @synthesize displayContext=_displayContext;
@property(readonly, nonatomic) NSArray *actions; // @synthesize actions=_actions;
- (id)description;
- (id)initWithActions:(id)arg1 displayContext:(id)arg2 metadata:(id)arg3;
- (id)initWithActions:(id)arg1;
- (id)init;

@end

