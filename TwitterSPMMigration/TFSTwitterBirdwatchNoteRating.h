//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, TFSTwitterBirdwatchNoteRatingUserResponse;

@interface TFSTwitterBirdwatchNoteRating : NSObject
{
    MISSING_TYPE *userResponse;
    MISSING_TYPE *version;
}

- (void).cxx_destruct;
- (id)init;
- (void)encodeWith:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(nonatomic, readonly) long long hash;
@property(nonatomic) long long version; // @synthesize version;
@property(nonatomic, retain) TFSTwitterBirdwatchNoteRatingUserResponse *userResponse; // @synthesize userResponse;

@end

