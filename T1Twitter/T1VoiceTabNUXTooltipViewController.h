//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TwitterSPMMigration/TFNViewController.h>

@class MISSING_TYPE;

@interface T1VoiceTabNUXTooltipViewController : TFNViewController
{
    MISSING_TYPE *context;
    MISSING_TYPE *highlightFrame;
    MISSING_TYPE *completion;
    MISSING_TYPE *$__lazy_storage_$_titleTextLabel;
    MISSING_TYPE *$__lazy_storage_$_subtitleTextLabel;
    MISSING_TYPE *$__lazy_storage_$_textStackView;
    MISSING_TYPE *$__lazy_storage_$_textStackBottomConstraint;
    MISSING_TYPE *$__lazy_storage_$_lineImageView;
    MISSING_TYPE *$__lazy_storage_$_tabHightlightButton;
    MISSING_TYPE *$__lazy_storage_$_closeBarButton;
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)scribeComponent;
- (id)scribeSection;
- (id)scribePage;
- (id)scribe;
- (void)didTapHighlightButton;
- (void)didTapCloseButton;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
@property(nonatomic, readonly) long long tfn_navigationBarStyle;
- (id)initWithCoder:(id)arg1;
- (id)initWithContext:(id)arg1 highlightFrame:(struct CGRect)arg2 completion:(CDUnknownBlockType)arg3;

@end

