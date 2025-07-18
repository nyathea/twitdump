//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, NSURL;
@protocol TIPImageFetchTransformer;

@interface TUIImageViewFetchHelperRequest : NSObject
{
    NSURL *_imageURL;
    NSString *_imageIdentifier;
    long long _targetContentMode;
    CDUnknownBlockType _imageRequestHydrationBlock;
    CDUnknownBlockType _imageRequestAuthorizationBlock;
    id <TIPImageFetchTransformer> _transformer;
    long long _options;
    long long _loadingSources;
    NSDictionary *_progressiveLoadingPolicies;
    long long _imageCategoryType;
    NSString *_imageCategoryVariantName;
    struct CGSize _targetDimensions;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *imageCategoryVariantName; // @synthesize imageCategoryVariantName=_imageCategoryVariantName;
@property(readonly, nonatomic) long long imageCategoryType; // @synthesize imageCategoryType=_imageCategoryType;
@property(readonly, copy, nonatomic) NSDictionary *progressiveLoadingPolicies; // @synthesize progressiveLoadingPolicies=_progressiveLoadingPolicies;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSDictionary",?,R,C,N,V_progressiveLoadingPolicies

@property(readonly, nonatomic) long long loadingSources; // @synthesize loadingSources=_loadingSources;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,R,N,V_loadingSources

@property(readonly, nonatomic) long long options; // @synthesize options=_options;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,R,N,V_options

@property(readonly, nonatomic) id <TIPImageFetchTransformer> transformer; // @synthesize transformer=_transformer;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"<TIPImageFetchTransformer>",?,R,N,V_transformer

@property(readonly, copy, nonatomic) CDUnknownBlockType imageRequestAuthorizationBlock; // @synthesize imageRequestAuthorizationBlock=_imageRequestAuthorizationBlock;
// Preceding property had unknown attributes: ?
// Original attribute string: T@?,?,R,C,N,V_imageRequestAuthorizationBlock

@property(readonly, copy, nonatomic) CDUnknownBlockType imageRequestHydrationBlock; // @synthesize imageRequestHydrationBlock=_imageRequestHydrationBlock;
// Preceding property had unknown attributes: ?
// Original attribute string: T@?,?,R,C,N,V_imageRequestHydrationBlock

@property(readonly, nonatomic) long long targetContentMode; // @synthesize targetContentMode=_targetContentMode;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,R,N,V_targetContentMode

@property(readonly, nonatomic) struct CGSize targetDimensions; // @synthesize targetDimensions=_targetDimensions;
// Preceding property had unknown attributes: ?
// Original attribute string: T{CGSize=dd},?,R,N,V_targetDimensions

@property(readonly, copy, nonatomic) NSString *imageIdentifier; // @synthesize imageIdentifier=_imageIdentifier;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C,N,V_imageIdentifier

@property(readonly, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
- (id)initWithImageURL:(id)arg1 identifier:(id)arg2 contentMode:(long long)arg3 dimensions:(struct CGSize)arg4 categoryType:(long long)arg5 variantName:(id)arg6 signingAccount:(id)arg7 transformer:(id)arg8 options:(long long)arg9 sources:(long long)arg10 progressiveLoadingPolicies:(id)arg11;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy, nonatomic) NSDictionary *decoderConfigMap;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSDictionary",?,R,C,N

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) double timeToLive;
// Preceding property had unknown attributes: ?
// Original attribute string: Td,?,R,N


@end

