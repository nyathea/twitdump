//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface GADSignal : NSObject
{
    NSString *_signalString;
    NSString *_requestIdentifier;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *requestIdentifier; // @synthesize requestIdentifier=_requestIdentifier;
@property(readonly, nonatomic) NSString *signalString; // @synthesize signalString=_signalString;
- (id)initWithSignalString:(id)arg1 requestIdentifier:(id)arg2;

@end

