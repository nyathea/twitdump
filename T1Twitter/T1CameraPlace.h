//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CLLocation, TFSTwitterLocation, TFSTwitterPlace;

@interface T1CameraPlace : NSObject
{
    TFSTwitterPlace *_place;
    TFSTwitterLocation *_location;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) TFSTwitterLocation *location; // @synthesize location=_location;
@property(readonly, nonatomic) TFSTwitterPlace *place; // @synthesize place=_place;
@property(readonly, nonatomic) CLLocation *backingLocation;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithPlace:(id)arg1 location:(id)arg2;
- (id)initWithPlace:(id)arg1;
- (id)init;

@end

