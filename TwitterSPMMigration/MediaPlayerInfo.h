//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface MediaPlayerInfo : NSObject
{
    NSString *_source;
    NSString *_metadata;
    NSString *_extra;
}

- (void).cxx_destruct;
- (id)extra;
- (id)metadata;
- (id)source;
- (id)initWithSource:(id)arg1 metaData:(id)arg2 andExtra:(id)arg3;

@end

