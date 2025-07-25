//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface TFSTwitterAPIAmplifyMarketplaceDefaultsPostCommand
{
    _Bool _monitize;
    NSArray *_videoCategories;
    NSArray *_excludedAdvertisers;
    NSArray *_excludedMonetizationCategories;
    NSArray *_excludedAdsCategories;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *excludedAdsCategories; // @synthesize excludedAdsCategories=_excludedAdsCategories;
@property(copy, nonatomic) NSArray *excludedMonetizationCategories; // @synthesize excludedMonetizationCategories=_excludedMonetizationCategories;
@property(copy, nonatomic) NSArray *excludedAdvertisers; // @synthesize excludedAdvertisers=_excludedAdvertisers;
@property(copy, nonatomic) NSArray *videoCategories; // @synthesize videoCategories=_videoCategories;
@property(nonatomic) _Bool monitize; // @synthesize monitize=_monitize;
- (id)request;
- (id)initWithAccountID:(id)arg1 monitize:(_Bool)arg2 videoCategories:(id)arg3 excludedAdvertisers:(id)arg4 excludedMonetizationCategories:(id)arg5 excludedAdsCategories:(id)arg6 context:(id)arg7 source:(unsigned long long)arg8 responseModelBuilder:(id)arg9 completionBlock:(CDUnknownBlockType)arg10;

@end

