//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSFormatter, NSString, UIImage;

@interface TFNPickerFormattedValue : NSObject
{
    id _value;
    NSFormatter *_formatter;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSFormatter *formatter; // @synthesize formatter=_formatter;
@property(readonly, nonatomic) id value; // @synthesize value=_value;
- (_Bool)isEqualToFormattedValue:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *valueName;
- (id)init;
- (id)initWithValue:(id)arg1 formatter:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSString *valueDetail;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C,N

@property(readonly, nonatomic) UIImage *valueIcon;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UIImage",?,R,N

@property(readonly, copy, nonatomic) NSString *valueShortName;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C,N


@end

