//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TwitterSPMMigration/NSObject-Protocol.h>

@class UIScribbleInteraction;

@protocol UIScribbleInteractionDelegate <NSObject>

@optional
- (void)scribbleInteractionDidFinishWriting:(UIScribbleInteraction *)arg1;
- (void)scribbleInteractionWillBeginWriting:(UIScribbleInteraction *)arg1;
- (_Bool)scribbleInteractionShouldDelayFocus:(UIScribbleInteraction *)arg1;
- (_Bool)scribbleInteraction:(UIScribbleInteraction *)arg1 shouldBeginAtLocation:(struct CGPoint)arg2;
@end

