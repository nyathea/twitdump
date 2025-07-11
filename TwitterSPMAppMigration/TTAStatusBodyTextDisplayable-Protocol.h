//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TwitterAppSPMMigration/NSObject-Protocol.h>
#import <TwitterAppSPMMigration/TFNPreferredMaxLayoutWidthSizable-Protocol.h>

@class NSArray, TFNAttributedTextModel, UIColor;
@protocol TFSActiveTextRange, TTAStatusBodyTextDisplayableDelegate;

@protocol TTAStatusBodyTextDisplayable <NSObject, TFNPreferredMaxLayoutWidthSizable>
@property(retain, nonatomic) UIColor *selectionColor;
@property(retain, nonatomic) TFNAttributedTextModel *textModel;
@property(nonatomic, getter=isTextLayoutAnimationEnabled) _Bool textLayoutAnimationEnabled;
@property(nonatomic, getter=isSelectionPaddingEnabled) _Bool selectionPaddingEnabled;
@property(retain, nonatomic) NSArray *activeRanges;
@property(nonatomic) __weak id <TTAStatusBodyTextDisplayableDelegate> textViewDelegate;
- (struct CGSize)actualSize;
- (id <TFSActiveTextRange>)hitTestForActiveRangesAtPoint:(struct CGPoint)arg1;
@end

