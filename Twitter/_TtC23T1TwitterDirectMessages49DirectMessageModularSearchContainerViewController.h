//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TwitterSPMMigration/TFNViewController.h>

@class MISSING_TYPE, UIView;

__attribute__((visibility("hidden")))
@interface _TtC23T1TwitterDirectMessages49DirectMessageModularSearchContainerViewController : TFNViewController
{
    MISSING_TYPE *account;
    MISSING_TYPE *viewModel;
    MISSING_TYPE *dmFeatureSwitches;
    MISSING_TYPE *searchView;
    MISSING_TYPE *cancellables;
    MISSING_TYPE *navigationBarAccessoryProvider;
    MISSING_TYPE *$__lazy_storage_$_recentSearchViewController;
    MISSING_TYPE *visibleViewController;
    MISSING_TYPE *activeConversation;
    MISSING_TYPE *$__lazy_storage_$_searchResultsContainer;
    MISSING_TYPE *$__lazy_storage_$_emptyStateViewController;
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
@property(nonatomic, readonly) _Bool tfn_supportsNavigationBarCollapsing;
@property(nonatomic, readonly) UIView *tfn_navigationBarAccessoryView;
- (void)textDidChange:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textFieldShouldClear:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (id)navigationControllerTransitionForOperation:(long long)arg1 fromViewController:(id)arg2 toViewController:(id)arg3;
- (void)showContextMenuForConversation:(id)arg1 sender:(id)arg2;
- (void)loadMoreSearchResultsWithCursor:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)loadMoreConversationsWithCursor:(id)arg1;
- (void)didTapActionButtonForConversation:(id)arg1 sender:(id)arg2;
- (void)didTapAvatarForConversation:(id)arg1 sender:(id)arg2;
- (void)markConversationAsSeen:(id)arg1;
- (void)disableNotificationsForConversation:(id)arg1 sender:(id)arg2;
- (void)enableNotificationsForConversation:(id)arg1;
- (void)reportConversation:(id)arg1 reportType:(long long)arg2;
- (void)unblockConversation:(id)arg1;
- (void)blockConversation:(id)arg1;
- (void)deleteConversation:(id)arg1 scribeEntryPoint:(id)arg2 scribePosition:(long long)arg3;
- (id)previewConversation:(id)arg1 atScribePosition:(long long)arg2;
- (void)viewSearchResultForEntryID:(id)arg1 inConversation:(id)arg2 atScribePosition:(long long)arg3;
- (void)viewConversation:(id)arg1 atScribePosition:(long long)arg2;
- (void)replyLaterDisableForConversation:(id)arg1;
- (void)replyLaterEnableForConversation:(id)arg1;
- (void)pinDisableForConversation:(id)arg1;
- (void)pinEnableForConversation:(id)arg1;
- (void)directMessageConversationParticipantsListViewController:(id)arg1 didSelect:(id)arg2;

@end

