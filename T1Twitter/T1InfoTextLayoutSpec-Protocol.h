//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <T1Twitter/NSObject-Protocol.h>

@class NSSet, NSString, UIColor, UIFont;
@protocol T1InfoTextLayoutSpec;

@protocol T1InfoTextLayoutSpec <NSObject>
- (_Bool)isEqualToLayoutSpec:(id <T1InfoTextLayoutSpec>)arg1;
@property(nonatomic, readonly) struct CGSize caretButtonSize;
@property(nonatomic, readonly) _Bool showCaretButton;
@property(nonatomic, readonly) NSString *sponsorshipScribeComponent;
@property(nonatomic, readonly) _Bool hasSponsorship;
@property(nonatomic, readonly) _Bool renderFromRight;
@property(nonatomic, readonly) _Bool isTitleMultiline;
@property(nonatomic, readonly) struct CGSize badgeSize;
@property(nonatomic, readonly) UIColor *badgeFillColor;
@property(nonatomic, readonly) NSString *badgeName;
@property(nonatomic, readonly) UIFont *font;
@property(nonatomic, readonly) UIColor *color;
@property(nonatomic, readonly) NSSet *detailsHyperlinks;
@property(nonatomic, readonly) NSSet *titleHyperlinks;
@property(nonatomic, readonly) NSString *details;
@property(nonatomic, readonly) NSString *title;
@end

