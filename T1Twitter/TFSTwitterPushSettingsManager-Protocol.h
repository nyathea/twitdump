//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol TFSTwitterPushSettingsManager
- (void)unregisterForPushWithCompletion:(void (^)(_Bool))arg1;
- (_Bool)isRemovingPush;
- (void)checkinWithForce:(_Bool)arg1 completion:(void (^)(void))arg2;
@end

