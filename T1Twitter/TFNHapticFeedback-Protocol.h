//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <T1Twitter/NSObject-Protocol.h>

@class UIImpactFeedbackGenerator, UINotificationFeedbackGenerator, UISelectionFeedbackGenerator;

@protocol TFNHapticFeedback <NSObject>
- (void)performHapticFeedback:(unsigned long long)arg1;
- (void)prepareHapticFeedback:(unsigned long long)arg1;

@optional
@property(readonly, nonatomic) UINotificationFeedbackGenerator *notificationFeedbackGenerator;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UINotificationFeedbackGenerator",?,R,N

@property(readonly, nonatomic) UISelectionFeedbackGenerator *selectionFeedbackGenerator;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UISelectionFeedbackGenerator",?,R,N

@property(readonly, nonatomic) UIImpactFeedbackGenerator *impactFeedbackGenerator;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UIImpactFeedbackGenerator",?,R,N

@end

