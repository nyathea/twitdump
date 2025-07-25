//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TwitterSPMMigration/TFNViewController.h>

@class NSArray, NSString, TCRTypeaheadPrompt, TCRTypeaheadResult, TCRTypeaheadViewController, TFNSearchBar, TFSTwitterScribeContext, UIView;
@protocol TCRTweetComposeAutocompleteViewControllerDelegate;

@interface TCRTweetComposeAutocompleteViewController : TFNViewController
{
    _Bool _fullscreenMode;
    _Bool _transitionInProgress;
    long long _autocompleteType;
    TCRTypeaheadResult *_results;
    double _condensedHeight;
    UIView *_searchBarContainer;
    id <TCRTweetComposeAutocompleteViewControllerDelegate> _delegate;
    NSString *_uuidString;
    TFSTwitterScribeContext *_scribeContext;
    double _fullScreenProgress;
    TFNSearchBar *_searchBar;
    UIView *_separator;
    UIView *_topBackground;
    TCRTypeaheadPrompt *_searchPrompt;
    TCRTypeaheadViewController *_typeaheadViewController;
    struct CGPoint _intialTouchPosition;
    struct CGRect _availableFrame;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) TCRTypeaheadViewController *typeaheadViewController; // @synthesize typeaheadViewController=_typeaheadViewController;
@property(retain, nonatomic) TCRTypeaheadPrompt *searchPrompt; // @synthesize searchPrompt=_searchPrompt;
@property(retain, nonatomic) UIView *topBackground; // @synthesize topBackground=_topBackground;
@property(retain, nonatomic) UIView *separator; // @synthesize separator=_separator;
@property(retain, nonatomic) TFNSearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(nonatomic) _Bool transitionInProgress; // @synthesize transitionInProgress=_transitionInProgress;
@property(nonatomic) double fullScreenProgress; // @synthesize fullScreenProgress=_fullScreenProgress;
@property(nonatomic) struct CGPoint intialTouchPosition; // @synthesize intialTouchPosition=_intialTouchPosition;
@property(readonly, nonatomic) TFSTwitterScribeContext *scribeContext; // @synthesize scribeContext=_scribeContext;
@property(copy, nonatomic) NSString *uuidString; // @synthesize uuidString=_uuidString;
@property(nonatomic) __weak id <TCRTweetComposeAutocompleteViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIView *searchBarContainer; // @synthesize searchBarContainer=_searchBarContainer;
@property(nonatomic) _Bool fullscreenMode; // @synthesize fullscreenMode=_fullscreenMode;
@property(nonatomic) double condensedHeight; // @synthesize condensedHeight=_condensedHeight;
@property(nonatomic) struct CGRect availableFrame; // @synthesize availableFrame=_availableFrame;
@property(retain, nonatomic) TCRTypeaheadResult *results; // @synthesize results=_results;
@property(nonatomic) long long autocompleteType; // @synthesize autocompleteType=_autocompleteType;
- (void)handleSelectKeyCommand;
- (void)handleLineUpKeyCommand;
- (void)handleLineDownKeyCommand;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)_tcr_updateDecoratingViews;
- (void)_tcr_enterFullscreenMode;
- (void)_tcr_animateToProgress:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)composeTypeaheadViewController:(id)arg1 scrollViewDidScroll:(id)arg2;
- (void)composeTypeaheadViewController:(id)arg1 didSelectItem:(id)arg2;
- (void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)arg1;
@property(copy, nonatomic) NSArray *excludedReplyUserIDs;
@property(copy, nonatomic) NSArray *includedMentionUserIDs;
- (void)viewWillLayoutSubviews;
- (void)_tcr_updateViewsWithProgress:(double)arg1;
- (double)tcr_minTableViewHeight;
- (double)tcr_maxTableViewHeight;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithScribeContext:(id)arg1 hashflagEnabled:(_Bool)arg2 searchContext:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

