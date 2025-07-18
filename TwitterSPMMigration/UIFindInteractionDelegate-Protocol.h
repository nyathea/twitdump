//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TwitterSPMMigration/NSObject-Protocol.h>

@class UIFindInteraction, UIFindSession, UIView;

@protocol UIFindInteractionDelegate <NSObject>
- (UIFindSession *)findInteraction:(UIFindInteraction *)arg1 sessionForView:(UIView *)arg2;

@optional
- (void)findInteraction:(UIFindInteraction *)arg1 didEndFindSession:(UIFindSession *)arg2;
- (void)findInteraction:(UIFindInteraction *)arg1 didBeginFindSession:(UIFindSession *)arg2;
@end

