//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary;

@interface TFSTwitterAPIMutesAdvancedFiltersUpdateCommand
{
    NSDictionary *_advancedFilters;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSDictionary *advancedFilters; // @synthesize advancedFilters=_advancedFilters;
- (id)request;
- (id)initWithContext:(id)arg1 accountID:(id)arg2 advancedFilters:(id)arg3 responseModelBuilder:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;

@end

