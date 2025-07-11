//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, TVPVideoContextCTAInfo;
@protocol T1AmplifyUIEventHandlerDelegate;

@interface T1AmplifyCTATempImageTapHandler : NSObject
{
    TVPVideoContextCTAInfo *_ctaInfo;
    CDUnknownBlockType _loggingBlock;
    id <T1AmplifyUIEventHandlerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <T1AmplifyUIEventHandlerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) CDUnknownBlockType loggingBlock; // @synthesize loggingBlock=_loggingBlock;
@property(retain, nonatomic) TVPVideoContextCTAInfo *ctaInfo; // @synthesize ctaInfo=_ctaInfo;
- (void)ctaWasTappedOnAmplifyCTA:(id)arg1;
- (id)initWithCTAInfo:(id)arg1 loggingBlock:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

