//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface TFNUndoSendCompositionDetails : NSObject
{
    NSArray *_compositions;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *compositions; // @synthesize compositions=_compositions;
- (unsigned long long)hash;
- (_Bool)isEqualToUndoSendCompositionDetails:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCompositions:(id)arg1;

@end

