//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

@class MISSING_TYPE;

@interface _TtC40TwitterClientEventServicesImplementation31DynamicContainerEventSerializer : _TtCs12_SwiftObject
{
    MISSING_TYPE *thriftEncoder;
    MISSING_TYPE *event;
    MISSING_TYPE *eventGroup;
}

- (id)metadata;
- (void)setSessionId:(id)arg1;
- (void)setClientEventSequenceStartTimestamp:(long long)arg1 sequenceNumber:(long long)arg2;
- (_Bool)usesTimestampSequenceNumber;
- (id)group;
- (id)dictionaryRepresentation;
- (id)data;

@end

