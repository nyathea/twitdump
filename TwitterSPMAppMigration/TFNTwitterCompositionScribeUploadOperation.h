//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TwitterSPMMigration/TFSDependentConcurrentOperation.h>

@class TFNTwitterComposition, TFNTwitterCompositionUploadContext;

@interface TFNTwitterCompositionScribeUploadOperation : TFSDependentConcurrentOperation
{
    TFNTwitterComposition *_composition;
    TFNTwitterCompositionUploadContext *_context;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) TFNTwitterCompositionUploadContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) TFNTwitterComposition *composition; // @synthesize composition=_composition;
- (void)_tfn_main_run;
- (void)run;
- (id)initWithComposition:(id)arg1 context:(id)arg2;
- (id)init;

@end

