//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, TFSTwitterFoundMediaGroup, TFSTwitterFoundMediaImage;

@interface TFSTwitterFoundMediaObject : NSObject
{
    NSString *_identifier;
    TFSTwitterFoundMediaImage *_primaryImage;
    TFSTwitterFoundMediaGroup *_parentGroup;
    NSString *_altText;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *altText; // @synthesize altText=_altText;
@property(readonly, nonatomic) TFSTwitterFoundMediaGroup *parentGroup; // @synthesize parentGroup=_parentGroup;
@property(readonly, nonatomic) TFSTwitterFoundMediaImage *primaryImage; // @synthesize primaryImage=_primaryImage;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIdentifier:(id)arg1 primaryImage:(id)arg2 altText:(id)arg3 parentGroup:(id)arg4;
- (id)init;

@end

