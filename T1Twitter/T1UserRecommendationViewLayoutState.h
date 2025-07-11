//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TFNTwitterAccount;
@protocol TTACoreStatusViewModel;

@interface T1UserRecommendationViewLayoutState : NSObject
{
    id <TTACoreStatusViewModel> _viewModel;
    TFNTwitterAccount *_account;
    struct CGSize _size;
    struct CGRect _bannerImageFrame;
    struct CGRect _avatarFrame;
    struct CGRect _fullNameFrame;
    struct CGRect _usernameFrame;
    struct CGRect _badgeFrame;
    struct CGRect _followControlFrame;
    struct CGRect _bioFrame;
    struct CGRect _mediaViewFrame;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGRect mediaViewFrame; // @synthesize mediaViewFrame=_mediaViewFrame;
@property(nonatomic) struct CGRect bioFrame; // @synthesize bioFrame=_bioFrame;
@property(nonatomic) struct CGRect followControlFrame; // @synthesize followControlFrame=_followControlFrame;
@property(nonatomic) struct CGRect badgeFrame; // @synthesize badgeFrame=_badgeFrame;
@property(nonatomic) struct CGRect usernameFrame; // @synthesize usernameFrame=_usernameFrame;
@property(nonatomic) struct CGRect fullNameFrame; // @synthesize fullNameFrame=_fullNameFrame;
@property(nonatomic) struct CGRect avatarFrame; // @synthesize avatarFrame=_avatarFrame;
@property(nonatomic) struct CGRect bannerImageFrame; // @synthesize bannerImageFrame=_bannerImageFrame;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(retain, nonatomic) id <TTACoreStatusViewModel> viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;

@end

