//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@protocol T1PhotoGalleryLimitedAuthorizationStatusViewDelegate;

@interface T1PhotoGalleryLimitedAuthorizationStatusView : UIView
{
    id <T1PhotoGalleryLimitedAuthorizationStatusViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <T1PhotoGalleryLimitedAuthorizationStatusViewDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)accessibilityActivate;
- (void)_t1_didTapButton:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

