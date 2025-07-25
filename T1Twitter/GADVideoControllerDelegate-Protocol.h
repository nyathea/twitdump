//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <T1Twitter/NSObject-Protocol.h>

@class GADVideoController;

@protocol GADVideoControllerDelegate <NSObject>

@optional
- (void)videoControllerDidUnmuteVideo:(GADVideoController *)arg1;
- (void)videoControllerDidMuteVideo:(GADVideoController *)arg1;
- (void)videoControllerDidEndVideoPlayback:(GADVideoController *)arg1;
- (void)videoControllerDidPauseVideo:(GADVideoController *)arg1;
- (void)videoControllerDidPlayVideo:(GADVideoController *)arg1;
@end

