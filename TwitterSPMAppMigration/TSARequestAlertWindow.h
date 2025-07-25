//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TwitterSPMMigration/TFNAlertWindow.h>

@class UIWindow;
@protocol TSARequestItem;

@interface TSARequestAlertWindow : TFNAlertWindow
{
    id <TSARequestItem> _requestItem;
    _Bool _isVisible;
    CDUnknownBlockType _openURLBlock;
    UIWindow *_retainedSelf;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIWindow *retainedSelf; // @synthesize retainedSelf=_retainedSelf;
@property(copy, nonatomic) CDUnknownBlockType openURLBlock; // @synthesize openURLBlock=_openURLBlock;
@property(readonly, nonatomic) _Bool isVisible; // @synthesize isVisible=_isVisible;
- (void)_learnMore:(id)arg1;
- (id)initWithRequestItem:(id)arg1;

@end

