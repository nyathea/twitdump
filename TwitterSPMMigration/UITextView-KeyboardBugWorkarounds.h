//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITextView.h>

@class NSDictionary;

@interface UITextView (KeyboardBugWorkarounds)
+ (_Bool)tfn_defaultShouldFlipForRightToLeftTransform;
- (void)_tfn_swizzled_deleteBackward;
@property(copy, nonatomic) NSDictionary *tfn_typingAttributes;
@end

