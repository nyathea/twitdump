//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <T1Twitter/NSObject-Protocol.h>

@class UIImage, UIView;
@protocol TVPPlayerSessionSource;

@protocol TAVAutoplayViewContainer <NSObject>
@property(nonatomic, readonly) UIImage *playerPreviewImage;
@property(nonatomic, readonly) UIView *playerContainerView;
@property(nonatomic, readonly) id <TVPPlayerSessionSource> playerSessionSource;
@end

