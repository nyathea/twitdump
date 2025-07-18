//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, TNUHTMLTagParser;

@interface TNUURLHTMLTitleRetrieverContext : NSObject
{
    NSString *_title;
    CDUnknownBlockType _completionBlock;
    TNUHTMLTagParser *_parser;
    unsigned long long _encoding;
    unsigned long long _redirectCount;
    unsigned long long _bytesReceived;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long bytesReceived; // @synthesize bytesReceived=_bytesReceived;
@property(nonatomic) unsigned long long redirectCount; // @synthesize redirectCount=_redirectCount;
@property(nonatomic) unsigned long long encoding; // @synthesize encoding=_encoding;
@property(retain, nonatomic) TNUHTMLTagParser *parser; // @synthesize parser=_parser;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;

@end

