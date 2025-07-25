//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <T1Twitter/NSObject-Protocol.h>

@class NSSet, NSString;
@protocol TFNPickableValue;

@protocol TFNValuePicker <NSObject>
@property(copy, nonatomic) CDUnknownBlockType didPickValueBlock;
@property(readonly, copy, nonatomic) NSSet *pickedValues;
@property(readonly, nonatomic) id <TFNPickableValue> pickedValue;
@property(readonly, nonatomic) _Bool canPickMultipleValues;

@optional
@property(readonly, copy, nonatomic) NSString *valueQuery;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C,N

@property(readonly, nonatomic) unsigned long long index;
// Preceding property had unknown attributes: ?
// Original attribute string: TQ,?,R,N

@end

