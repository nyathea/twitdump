//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class TFSTwitterEntityMedia, TUCAppStoreDataEntry, TUCEventHandlerContext;

@protocol TUCAppStoreDestinationHandlerHelper
- (void)openAppStoreWithDockedMediaWithAppStoreDataEntry:(TUCAppStoreDataEntry *)arg1 mediaEntity:(TFSTwitterEntityMedia *)arg2 context:(TUCEventHandlerContext *)arg3 completion:(void (^)(TUCDestinationPresenterResult *))arg4;
- (void)openAppStoreWithAppStoreDataEntry:(TUCAppStoreDataEntry *)arg1 context:(TUCEventHandlerContext *)arg2 completion:(void (^)(TUCDestinationPresenterResult *))arg3;
@end

