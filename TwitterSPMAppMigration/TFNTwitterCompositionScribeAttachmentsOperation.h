//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TwitterSPMMigration/TFSDependentConcurrentOperation.h>

@class NSString, TFNTwitterComposition;
@protocol TAPTwitterCompositionTweetPerspective, TFSTwitterLegacyScribeLogMethods;

@interface TFNTwitterCompositionScribeAttachmentsOperation : TFSDependentConcurrentOperation
{
    id <TAPTwitterCompositionTweetPerspective> _status;
    TFNTwitterComposition *_composition;
    id <TFSTwitterLegacyScribeLogMethods> _scribe;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <TFSTwitterLegacyScribeLogMethods> scribe; // @synthesize scribe=_scribe;
@property(readonly, nonatomic) TFNTwitterComposition *composition; // @synthesize composition=_composition;
@property(retain) id <TAPTwitterCompositionTweetPerspective> status; // @synthesize status=_status;
- (void)_tfn_main_scribeCompositionAction:(id)arg1 parameters:(id)arg2;
- (void)_tfn_main_scribeAttachmentAction:(id)arg1 component:(id)arg2 element:(id)arg3 parameters:(id)arg4;
- (void)_tfn_main_scribeAttachmentAction:(id)arg1 component:(id)arg2 parameters:(id)arg3;
- (void)_tfn_main_scribeMediaCreationEventsForAttachments:(id)arg1;
- (void)_tfn_main_scribeRetweetWithCameraUsageForAttachment:(id)arg1;
- (void)_tfn_main_scribeMediaUsageForAttachment:(id)arg1;
- (void)_tfn_main_scribeCameraCapturedAttachmentTimeIntervalToCompositionWithTweetForAttachment:(id)arg1;
- (void)_tfn_main_scribeForAttachment:(id)arg1;
- (void)_tfn_main_run;
- (void)run;
- (id)initWithComposition:(id)arg1 scribe:(id)arg2;
- (id)initWithComposition:(id)arg1 context:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

