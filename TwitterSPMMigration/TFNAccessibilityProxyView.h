//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@interface TFNAccessibilityProxyView : UIView
{
    UIView *_view;
}

+ (id)proxyViewForView:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak UIView *view; // @synthesize view=_view;
- (id)accessibilityValue;
- (id)accessibilityLabel;
- (id)accessibilityIdentifier;
- (id)accessibilityHint;

@end

