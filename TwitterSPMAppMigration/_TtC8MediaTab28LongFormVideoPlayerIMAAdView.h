//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC8MediaTab28LongFormVideoPlayerIMAAdView : UIView
{
    MISSING_TYPE *delegate;
    MISSING_TYPE *isPlaying;
    MISSING_TYPE *adDisplayContainerView;
    MISSING_TYPE *adTagURL;
    MISSING_TYPE *adsLoader;
    MISSING_TYPE *entryID;
    MISSING_TYPE *muteButton;
    MISSING_TYPE *scribeSink;
    MISSING_TYPE *adDisplayContainer;
    MISSING_TYPE *adsManager;
    MISSING_TYPE *isMuted;
    MISSING_TYPE *isSetup;
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)adsLoader:(id)arg1 failedWithErrorData:(id)arg2;
- (void)adsLoader:(id)arg1 adsLoadedWithData:(id)arg2;
- (void)adsManagerDidRequestContentResume:(id)arg1;
- (void)adsManagerDidRequestContentPause:(id)arg1;
- (void)adsManager:(id)arg1 didReceiveAdError:(id)arg2;
- (void)adsManager:(id)arg1 didReceiveAdEvent:(id)arg2;

@end

