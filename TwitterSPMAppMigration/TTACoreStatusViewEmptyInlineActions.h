//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIView;

@interface TTACoreStatusViewEmptyInlineActions : NSObject
{
}

+ (id)sharedInstance;
- (void)enumerateInlineActionsUsingBlock:(CDUnknownBlockType)arg1;
- (long long)isButtonEnabledForDisabledEngagementEducationForType:(unsigned long long)arg1;
- (id)viewForInlineActionWithType:(unsigned long long)arg1;
@property(readonly, nonatomic) UIView *containerView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

