//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, T1ComposeTooltipConfiguration;

@interface T1ComposeTooltipRegistryItem : NSObject
{
    NSString *_identifier;
    T1ComposeTooltipConfiguration *_config;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) T1ComposeTooltipConfiguration *config; // @synthesize config=_config;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)initWithIdentifier:(id)arg1 config:(id)arg2;
- (id)init;

@end

