//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TwitterSPMMigration/NSObject-Protocol.h>

@class NSString, UIColor;

@protocol TFNDynamicColorProvider <NSObject>
@property(nonatomic, readonly) _Bool isHighContrast;
@property(nonatomic, readonly) _Bool hasDarkBackground;
@property(nonatomic, readonly) long long preferredStatusBarStyle;
- (UIColor *)dynamicColorWithIdentifier:(id)arg1;
- (NSString *)currentColorStateIdentifier;
@end

