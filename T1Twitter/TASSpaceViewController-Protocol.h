//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <T1Twitter/TUIVoiceDockableViewController-Protocol.h>

@class NSString, TASSharing;
@protocol TASSpaceModel;

@protocol TASSpaceViewController <TUIVoiceDockableViewController>
@property(readonly, nonatomic) TASSharing *sharing;
@property(readonly, nonatomic) id <TASSpaceModel> spaceModel;
- (void)refreshSpaceView;
- (void)updateSpaceModel:(id <TASSpaceModel>)arg1 isPreview:(_Bool)arg2 isReplay:(_Bool)arg3;
- (void)leave;
- (void)leaveWithReason:(long long)arg1 scribeSection:(NSString *)arg2 scribeComponent:(NSString *)arg3;
@end

