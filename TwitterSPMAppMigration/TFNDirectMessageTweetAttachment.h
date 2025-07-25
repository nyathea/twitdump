//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, TFNTwitterStatus;
@protocol TFNDirectMessageEntry;

@interface TFNDirectMessageTweetAttachment
{
    NSString *_displayURL;
    NSString *_expandedURL;
    TFNTwitterStatus *_status;
    long long _tweetID;
    NSString *_url;
    struct _NSRange _urlRange;
}

- (void).cxx_destruct;
@property(nonatomic) struct _NSRange urlRange; // @synthesize urlRange=_urlRange;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) long long tweetID; // @synthesize tweetID=_tweetID;
@property(retain, nonatomic) TFNTwitterStatus *status; // @synthesize status=_status;
@property(copy, nonatomic) NSString *expandedURL; // @synthesize expandedURL=_expandedURL;
@property(copy, nonatomic) NSString *displayURL; // @synthesize displayURL=_displayURL;
- (void)_statusDidUpdate:(id)arg1;
- (void)_observeStatusUpdateNotifications;
@property(readonly, nonatomic) _Bool isPossiblySensitive;
- (struct _NSRange)rangeInMessageText;
- (long long)attachmentType;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setParameterDataForRequestDictionary:(id)arg1;
- (void)dealloc;
- (id)initWithDisplayURL:(id)arg1 expandedURL:(id)arg2 url:(id)arg3 status:(id)arg4 tweetID:(long long)arg5 range:(struct _NSRange)arg6;
- (id)initWithJSONDictionary:(id)arg1 messageText:(id)arg2 entities:(id)arg3;
- (id)initWithStatus:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak id <TFNDirectMessageEntry> messageEntry;
@property(readonly) Class superclass;

@end

