//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface TFSTwitterTrendsLocation : NSObject
{
    unsigned long long _type;
    NSString *_name;
    NSString *_country;
    NSNumber *_woeID;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSNumber *woeID; // @synthesize woeID=_woeID;
@property(readonly, nonatomic) NSString *country; // @synthesize country=_country;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (unsigned long long)_locationTypeForPlaceCode:(long long)arg1;
- (id)plistDictionaryValue;
- (id)initWithPlistDictionary:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithType:(unsigned long long)arg1 name:(id)arg2 country:(id)arg3 woeID:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

