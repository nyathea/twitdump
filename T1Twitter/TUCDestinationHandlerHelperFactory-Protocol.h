//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol TUCAppStoreDestinationHandlerHelper, TUCBrowserDestinationHandlerHelper, TUCPlayableDestinationHandlerHelper;

@protocol TUCDestinationHandlerHelperFactory
@property(readonly, nonatomic) id <TUCPlayableDestinationHandlerHelper> playable;
@property(readonly, nonatomic) id <TUCAppStoreDestinationHandlerHelper> appStore;
@property(readonly, nonatomic) id <TUCBrowserDestinationHandlerHelper> browser;
@end

