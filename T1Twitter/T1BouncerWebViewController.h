//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

@interface T1BouncerWebViewController
{
    _Bool _skippable;
    NSArray *_currentActionItems;
    NSString *_initialBouncerFeatureName;
}

+ (id)_titleForBouncerFeature:(id)arg1 account:(id)arg2;
+ (void)_switchAccountToContributor:(id)arg1;
+ (_Bool)_t1_didHandleFlowForDeepLink:(id)arg1;
+ (_Bool)_t1_isDeepLinkFlowShowing;
+ (_Bool)_t1_paths:(id)arg1 containsSupportedPath:(id)arg2;
+ (_Bool)_isURL:(id)arg1 inPathSet:(id)arg2;
+ (_Bool)_isBouncerRefreshableURL:(id)arg1;
+ (_Bool)_isBouncerLoadableURL:(id)arg1;
+ (_Bool)_isBouncerEntranceURL:(id)arg1;
+ (_Bool)isShowing;
+ (id)_findTopMostModallyPresentedViewController:(id)arg1;
+ (void)presentFromViewController:(id)arg1 account:(id)arg2 location:(id)arg3 deepLink:(id)arg4 universalLink:(id)arg5 skippable:(_Bool)arg6 completion:(CDUnknownBlockType)arg7;
+ (void)presentFromViewController:(id)arg1 account:(id)arg2 info:(id)arg3;
+ (void)initialize;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *initialBouncerFeatureName; // @synthesize initialBouncerFeatureName=_initialBouncerFeatureName;
@property(retain, nonatomic) NSArray *currentActionItems; // @synthesize currentActionItems=_currentActionItems;
@property(nonatomic) _Bool skippable; // @synthesize skippable=_skippable;
- (id)_actionItemForDict:(id)arg1;
- (void)_clearActionItems;
- (void)_refreshWithJSONData:(id)arg1;
- (void)_retrieveMetaInformation;
- (id)scribePage;
- (void)_presentWebViewWithURLString:(id)arg1;
- (_Bool)shouldSwitchToContributorAccount;
- (void)didFinishLoadingWithError:(id)arg1;
- (_Bool)shouldStartLoadWithRequest:(id)arg1 navigationType:(long long)arg2;
- (_Bool)shouldWebviewBeFullSized;
- (_Bool)hasCustomNavigationBar;
- (_Bool)shouldHideSecuredIcon;
- (_Bool)shouldHideNavigationIcons;
- (_Bool)shouldHideShareSheetIcon;
- (void)close:(id)arg1;
- (void)applicationWillEnterForegroundFromBackground:(id)arg1;
- (void)_didRemoveAccount:(id)arg1;
- (void)_signOut;
- (void)_openOptions:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithAccount:(id)arg1 accountAccessPath:(id)arg2 skippable:(_Bool)arg3;
- (id)initWithRootURL:(id)arg1 account:(id)arg2 shouldAuthenticate:(_Bool)arg3 shouldPresentAsNativePage:(_Bool)arg4 sourceStatus:(id)arg5 scribeComponent:(id)arg6 scribeParameters:(id)arg7;
- (id)initWithRootURL:(id)arg1 account:(id)arg2 sourceStatus:(id)arg3 scribeComponent:(id)arg4 scribeParameters:(id)arg5;

@end

