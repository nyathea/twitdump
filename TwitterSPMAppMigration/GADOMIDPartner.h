//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface GADOMIDPartner : NSObject
{
    NSString *_name;
    NSString *_versionString;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *versionString; // @synthesize versionString=_versionString;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (id)toJSON;
- (id)initWithName:(id)arg1 versionString:(id)arg2;

@end

