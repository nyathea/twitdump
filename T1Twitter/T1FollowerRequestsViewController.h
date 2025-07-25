//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TwitterSPMMigration/TFNItemsDataViewController.h>

@class T1FollowerRequests, T1TwitterUsersStream, T1ViewControllerDidPresentQueue, TFNTwitterAccount;

@interface T1FollowerRequestsViewController : TFNItemsDataViewController
{
    _Bool _needsFollowerRequestUpdate;
    TFNTwitterAccount *_account;
    T1TwitterUsersStream *_stream;
    T1FollowerRequests *_followerRequests;
    T1ViewControllerDidPresentQueue *_didPresentQueue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) T1ViewControllerDidPresentQueue *didPresentQueue; // @synthesize didPresentQueue=_didPresentQueue;
@property(retain, nonatomic) T1FollowerRequests *followerRequests; // @synthesize followerRequests=_followerRequests;
@property(nonatomic) _Bool needsFollowerRequestUpdate; // @synthesize needsFollowerRequestUpdate=_needsFollowerRequestUpdate;
@property(retain, nonatomic) T1TwitterUsersStream *stream; // @synthesize stream=_stream;
@property(readonly, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (id)scribeImpressionParameters;
- (id)scribeSection;
- (id)scribePage;
- (id)scribe;
- (void)errorItemTapped:(id)arg1;
- (long long)dashContentItemType;
- (void)willDisplayCell:(id)arg1 forItem:(id)arg2 atIndexPath:(id)arg3;
- (id)_t1_errorItemForStreamError:(id)arg1;
- (void)_t1_streamDidUpdate:(id)arg1;
- (void)_t1_updateUsers;
- (void)_t1_updateFollowerRequests;
- (void)update:(_Bool)arg1;
- (id)title;
- (void)viewDidAppear:(_Bool)arg1;
- (void)dealloc;
- (id)initWithCollectionViewLayout:(id)arg1;
- (id)init;
- (id)initWithAccount:(id)arg1;

@end

