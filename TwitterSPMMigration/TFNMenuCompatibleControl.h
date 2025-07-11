//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIControl.h>

@class NSString, UIMenu;

@interface TFNMenuCompatibleControl : UIControl
{
    CDUnknownBlockType _willDisplayMenuBlock;
    CDUnknownBlockType _willDismissMenuBlock;
    UIMenu *_menu;
    struct CGPoint _menuAttachmentPoint;
}

+ (id)menuCompatibleControlWithFrame:(struct CGRect)arg1;
- (void).cxx_destruct;
@property(nonatomic) struct CGPoint menuAttachmentPoint; // @synthesize menuAttachmentPoint=_menuAttachmentPoint;
@property(retain, nonatomic) UIMenu *menu; // @synthesize menu=_menu;
@property(copy, nonatomic) CDUnknownBlockType willDismissMenuBlock; // @synthesize willDismissMenuBlock=_willDismissMenuBlock;
@property(copy, nonatomic) CDUnknownBlockType willDisplayMenuBlock; // @synthesize willDisplayMenuBlock=_willDisplayMenuBlock;
- (void)_tfn_menuActionTriggered;
- (struct CGPoint)menuAttachmentPointForConfiguration:(id)arg1;
- (void)contextMenuInteraction:(id)arg1 willEndForConfiguration:(id)arg2 animator:(id)arg3;
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint)arg2;
- (id)initWithFrame:(struct CGRect)arg1 primaryAction:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
- (id)initWithFramePrivate:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

