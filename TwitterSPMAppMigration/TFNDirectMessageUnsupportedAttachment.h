//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, TFSTwitterEntityURL;
@protocol TFNDirectMessageEntry;

@interface TFNDirectMessageUnsupportedAttachment
{
    TFSTwitterEntityURL *_urlEntity;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TFSTwitterEntityURL *urlEntity; // @synthesize urlEntity=_urlEntity;
- (_Bool)shouldStripEntityFromMessageText:(id)arg1;
- (struct _NSRange)rangeInMessageText;
- (id)entity;
- (long long)attachmentType;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 messageText:(id)arg2 entities:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak id <TFNDirectMessageEntry> messageEntry;
@property(readonly) Class superclass;

@end

