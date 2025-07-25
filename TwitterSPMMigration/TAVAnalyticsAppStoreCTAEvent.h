//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface TAVAnalyticsAppStoreCTAEvent
{
    NSString *_appStoreID;
}

+ (id)private_valueKeys;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *appStoreID; // @synthesize appStoreID=_appStoreID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAnalyticsSessionState:(id)arg1 URL:(id)arg2 appStoreID:(id)arg3;
- (id)initWithPlaylistItemKey:(id)arg1 analyticsSessionState:(id)arg2 URL:(id)arg3 appStoreID:(id)arg4;

@end

