//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, TFSTwitterScribeContext;
@protocol TFSTwitterLegacyScribeLogMethods;

@interface T1EmailComposer : NSObject
{
    _Bool _isHTML;
    NSArray *_recipients;
    NSString *_body;
    NSString *_subject;
    TFSTwitterScribeContext *_scribeContext;
    id <TFSTwitterLegacyScribeLogMethods> _scribe;
}

+ (id)composerForEmailWithStatus:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) id <TFSTwitterLegacyScribeLogMethods> scribe; // @synthesize scribe=_scribe;
@property(retain, nonatomic) TFSTwitterScribeContext *scribeContext; // @synthesize scribeContext=_scribeContext;
@property(readonly, nonatomic) _Bool isHTML; // @synthesize isHTML=_isHTML;
@property(readonly, copy, nonatomic) NSString *subject; // @synthesize subject=_subject;
@property(readonly, copy, nonatomic) NSString *body; // @synthesize body=_body;
@property(readonly, copy, nonatomic) NSArray *recipients; // @synthesize recipients=_recipients;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (id)init;
- (id)initWithRecipients:(id)arg1 body:(id)arg2 subject:(id)arg3 isHTML:(_Bool)arg4;
- (void)showFrom:(id)arg1 scribe:(id)arg2 scribeContext:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

