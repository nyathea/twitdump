//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSNumber, NSString, NSUUID, TAVAnalyticsSessionState;

@interface TAVAnalyticsEventPlaybackSpeedChange
{
    NSNumber *_selectedSpeed;
    NSNumber *_previousSpeed;
}

+ (id)private_valueKeys;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSNumber *previousSpeed; // @synthesize previousSpeed=_previousSpeed;
@property(readonly, nonatomic) NSNumber *selectedSpeed; // @synthesize selectedSpeed=_selectedSpeed;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSelectedSpeed:(id)arg1 previousSpeed:(id)arg2 analyticsSessionState:(id)arg3;
@property(readonly, copy, nonatomic) NSString *clientEventAction;

// Remaining properties
@property(readonly, copy, nonatomic) TAVAnalyticsSessionState *analyticsSessionState;
@property(readonly, copy, nonatomic) NSString *clientEventCategory;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C,N

@property(readonly, copy, nonatomic) NSDictionary *clientEventParameters;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSDictionary",?,R,C,N

@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSUUID *playlistItemKey;
@property(readonly) Class superclass;

@end

