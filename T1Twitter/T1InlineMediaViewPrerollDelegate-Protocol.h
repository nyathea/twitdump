//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <T1Twitter/NSObject-Protocol.h>

@class T1InlineMediaView, T1PrerollCTAModel;

@protocol T1InlineMediaViewPrerollDelegate <NSObject>
- (void)inlineMediaViewWillShowCTA;
- (void)inlineMediaViewWillHideCTA;
- (void)inlineMediaViewWillPrepareForReuse;
- (void)inlineMediaViewDidEndPreroll:(T1InlineMediaView *)arg1;
- (void)inlineMediaView:(T1InlineMediaView *)arg1 didStartPrerollWithCTAModel:(T1PrerollCTAModel *)arg2;
@end

