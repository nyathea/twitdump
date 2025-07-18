//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface T1BirdwatchPivotActionViewModel : NSObject
{
    NSString *_title;
    NSArray *_buttonConfigurations;
    unsigned long long _type;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSArray *buttonConfigurations; // @synthesize buttonConfigurations=_buttonConfigurations;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (id)_t1_buttonConfigurationWithTitle:(id)arg1 imageName:(id)arg2 style:(long long)arg3 sizeClass:(long long)arg4;
- (_Bool)isEqual:(id)arg1;
- (id)init;
- (id)initWithCallToAction:(id)arg1;

@end

