//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class MISSING_TYPE, UIColor;

@interface _TtC18TwitterAudiospaces19TitleTextEditorView : UIView
{
    MISSING_TYPE *textEditorView;
    MISSING_TYPE *delegate;
    MISSING_TYPE *maximumTextCharacterCount;
    MISSING_TYPE *highlightingTextRangeFlavors;
    MISSING_TYPE *alertingMaximumTextCharacterCount;
    MISSING_TYPE *_textColor;
    MISSING_TYPE *_highlightedTextColor;
    MISSING_TYPE *_alertedTextBackgroundColor;
}

- (void).cxx_destruct;
- (void)dynamicColorDidReload:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) long long maximumNumberOfLinesForPlaceholderText;
@property(nonatomic, retain) UIColor *placeholderTextColor;
@property(nonatomic, retain) UIColor *alertedTextBackgroundColor;
@property(nonatomic, retain) UIColor *highlightedTextColor;
@property(nonatomic, retain) UIColor *textColor;

@end

