//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSIndexPath, NSString;

@interface TFNDataViewContextMenuConfigurationContext : NSObject
{
    NSString *_identifier;
    NSIndexPath *_indexPath;
    struct CGPoint _point;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGPoint point; // @synthesize point=_point;
@property(copy, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIndexPath:(id)arg1 point:(struct CGPoint)arg2;

@end

