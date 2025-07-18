//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UILabel.h>

@class NSMutableArray;

@interface T1AccessibleBadgesLabel : UILabel
{
    NSMutableArray *_accessibleElements;
}

- (void).cxx_destruct;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
- (_Bool)isAccessibilityElement;
- (id)accessibleElements;
- (void)_t1_updateAccessibilityFrames;
- (void)addAccessibleElementForLabel:(id)arg1 accessibilityHint:(id)arg2 accessibilityTraits:(unsigned long long)arg3;
- (void)addAccessibleElementForLabel:(id)arg1;
- (void)resetAccessibleElements;

@end

