//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <T1Twitter/NSObject-Protocol.h>

@class NSArray;
@protocol T1ProfileActionButtonProviderDelegate;

@protocol T1ProfileActionButtonProvider <NSObject>
@property(readonly, nonatomic) NSArray *buttonSpecs;
@property(nonatomic) __weak id <T1ProfileActionButtonProviderDelegate> delegate;
@end

