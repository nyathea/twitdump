//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TwitterSPMMigration/TFNItemsDataViewController.h>

@class NSString, TFNTwitterAccount;

@interface T1WebViewCacheSettingsViewController : TFNItemsDataViewController
{
    NSString *_webViewCacheUsedString;
    TFNTwitterAccount *_account;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(copy, nonatomic) NSString *webViewCacheUsedString; // @synthesize webViewCacheUsedString=_webViewCacheUsedString;
- (void)_presentClearAlert:(_Bool)arg1;
- (id)_clearCacheDetailsItem:(_Bool)arg1;
- (id)_clearCacheItem:(_Bool)arg1;
- (id)_detailedInfoItem;
- (void)update:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadWebViewCacheSize:(CDUnknownBlockType)arg1;
- (id)initWithCollectionViewLayout:(id)arg1;
- (id)init;
- (id)initWithAccount:(id)arg1;

@end

