//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <T1Twitter/NSObject-Protocol.h>

@class NSNumber, NSString;

@protocol T1ActivityModel <NSObject>
- (NSNumber *)scribeParameterID;
- (NSString *)plainTextBodyWithShareURLString:(NSString *)arg1;
- (NSString *)plainTextSubject;
- (NSString *)twitterURLForShareWithSParam:(unsigned long long)arg1;

@optional
- (NSString *)emailBody;
- (NSString *)emailSubject;
@end

