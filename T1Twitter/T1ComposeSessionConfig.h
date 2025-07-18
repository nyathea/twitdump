//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSString, TFNTwitterAccount, TFNTwitterComposition;

@interface T1ComposeSessionConfig : NSObject
{
    struct {
        long long cameraAuthorizationStatus;
        unsigned int didOpenComposer:1;
        unsigned int didShowFoundMediaTooltip:1;
        unsigned int didRequestCameraAuthorization:1;
        unsigned int didOpenCamera:1;
        unsigned int cameraDidCancel:1;
        unsigned int didOpenPeriscopeBroadcast:1;
        unsigned int didDisplayGraduatedAccessUserPrompt:1;
    } _flags;
    _Bool _wantPoll;
    _Bool _wantStartFromCamera;
    _Bool _wantStartFromVideo;
    _Bool _wantFoundMediaTooltip;
    _Bool _wantStartFromGifCapture;
    _Bool _wantStartFromPeriscopeBroadcast;
    _Bool _wantStartFromLocationPicker;
    _Bool _wantStartFromGraduatedAccessPrompt;
    _Bool _wantPresentOverModal;
    NSArray *_initialCompositions;
    NSString *_initialWindowFrameString;
    NSString *_scribePage;
    NSDictionary *_sourceScribeParameters;
    CDUnknownBlockType _dismissCompletionBlock;
    CDUnknownBlockType _presentCompletionBlock;
    CDUnknownBlockType _willCompleteComposingBlock;
    long long _source;
    TFNTwitterAccount *_account;
    NSMutableDictionary *_statusForId;
}

+ (id)defaultSessionConfig;
+ (id)sessionConfigWithComposition:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool wantPresentOverModal; // @synthesize wantPresentOverModal=_wantPresentOverModal;
@property(nonatomic) _Bool wantStartFromGraduatedAccessPrompt; // @synthesize wantStartFromGraduatedAccessPrompt=_wantStartFromGraduatedAccessPrompt;
@property(nonatomic) _Bool wantStartFromLocationPicker; // @synthesize wantStartFromLocationPicker=_wantStartFromLocationPicker;
@property(nonatomic) _Bool wantStartFromPeriscopeBroadcast; // @synthesize wantStartFromPeriscopeBroadcast=_wantStartFromPeriscopeBroadcast;
@property(nonatomic) _Bool wantStartFromGifCapture; // @synthesize wantStartFromGifCapture=_wantStartFromGifCapture;
@property(nonatomic) _Bool wantFoundMediaTooltip; // @synthesize wantFoundMediaTooltip=_wantFoundMediaTooltip;
@property(nonatomic) _Bool wantStartFromVideo; // @synthesize wantStartFromVideo=_wantStartFromVideo;
@property(nonatomic) _Bool wantStartFromCamera; // @synthesize wantStartFromCamera=_wantStartFromCamera;
@property(nonatomic) _Bool wantPoll; // @synthesize wantPoll=_wantPoll;
@property(readonly, nonatomic) NSMutableDictionary *statusForId; // @synthesize statusForId=_statusForId;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(nonatomic) long long source; // @synthesize source=_source;
@property(copy, nonatomic) CDUnknownBlockType willCompleteComposingBlock; // @synthesize willCompleteComposingBlock=_willCompleteComposingBlock;
@property(copy, nonatomic) CDUnknownBlockType presentCompletionBlock; // @synthesize presentCompletionBlock=_presentCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType dismissCompletionBlock; // @synthesize dismissCompletionBlock=_dismissCompletionBlock;
@property(retain, nonatomic) NSDictionary *sourceScribeParameters; // @synthesize sourceScribeParameters=_sourceScribeParameters;
@property(retain, nonatomic) NSString *scribePage; // @synthesize scribePage=_scribePage;
@property(copy, nonatomic) NSString *initialWindowFrameString; // @synthesize initialWindowFrameString=_initialWindowFrameString;
@property(copy, nonatomic) NSArray *initialCompositions; // @synthesize initialCompositions=_initialCompositions;
- (void)didDisplayGraduatedAccessUserPrompt;
@property(readonly, nonatomic) _Bool shouldDisplayGraduatedAccessUserPrompt;
- (void)didOpenPeriscopeBroadcast;
- (_Bool)_shouldEnterPeriscopeMode;
@property(readonly, nonatomic) _Bool shouldOpenPeriscopeBroadcast;
- (void)cameraDidCancel;
- (void)cameraDidSelectAttachment:(id)arg1;
@property(readonly, nonatomic) _Bool shouldOpenCamera;
- (void)didRequestCameraAuthorization:(long long)arg1;
@property(readonly, nonatomic) _Bool shouldRequestCameraAuthorization;
- (_Bool)_isCameraAuthorized;
- (_Bool)_shouldEnterCameraMode;
- (_Bool)_deviceHasCamera;
- (void)didShowFoundMediaTooltip;
@property(readonly, nonatomic) _Bool shouldShowFoundMediaTooltip;
@property(readonly, nonatomic) _Bool shouldDismissModal;
- (void)didOpenComposer;
@property(readonly, nonatomic) _Bool shouldOpenComposer;
@property(readonly, nonatomic) _Bool shouldAddPoll;
@property(readonly, nonatomic) TFNTwitterComposition *initialComposition;
- (id)initWithCompositions:(id)arg1;
- (id)init;

@end

