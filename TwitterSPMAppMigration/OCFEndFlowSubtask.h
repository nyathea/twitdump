//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface OCFEndFlowSubtask
{
    long long _status;
    long long _type;
}

+ (long long)version;
+ (id)typeNames;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) long long status; // @synthesize status=_status;
- (id)initWithJSONDictionary:(id)arg1 subtaskID:(id)arg2 typeName:(id)arg3 backNavigationType:(long long)arg4 backNavigationLink:(id)arg5 error:(id *)arg6;

@end

