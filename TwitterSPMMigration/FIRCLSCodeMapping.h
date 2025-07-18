//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface FIRCLSCodeMapping : NSObject
{
    int _source;
    NSURL *_URL;
    NSString *_sourceName;
}

+ (id)mappingWithURL:(id)arg1;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *sourceName; // @synthesize sourceName=_sourceName;
@property(nonatomic) int source; // @synthesize source=_source;
@property(readonly, copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (id)initWithURL:(id)arg1;

@end

