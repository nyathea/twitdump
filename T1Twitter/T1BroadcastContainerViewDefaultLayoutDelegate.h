//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface T1BroadcastContainerViewDefaultLayoutDelegate : NSObject
{
}

+ (id)sharedInstance;
- (struct CGRect)_t1_contentFrameForPlaybackState:(id)arg1 model:(id)arg2 bounds:(struct CGRect)arg3;
- (double)videoAspectRatioForVideoSize:(struct CGSize)arg1 rotation:(double)arg2;
- (_Bool)shouldLayoutPlayerViewForDisplayMode:(unsigned long long)arg1;
- (id)layoutStateForModel:(id)arg1 displayMode:(unsigned long long)arg2 playbackState:(id)arg3 bounds:(struct CGRect)arg4 systemSafeAreaInsets:(struct UIEdgeInsets)arg5;
- (id)initPrivate;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

