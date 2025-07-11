//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GADAdContent, NSString;

@interface GADClickProtection : NSObject
{
    _Bool _autoClickEnabled;
    _Atomic _Bool _touched;
    NSString *_debugDialogString;
    GADAdContent *_ad;
}

- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)reportBlockedOpenActionWithNavigationURL:(id)arg1 sourceURL:(id)arg2;
- (_Bool)shouldAllowClickAction;
- (id)initWithAd:(id)arg1 view:(id)arg2 autoClickProtectionEnabled:(_Bool)arg3 debugDialogString:(id)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

