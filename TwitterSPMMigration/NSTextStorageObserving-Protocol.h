//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TwitterSPMMigration/NSObject-Protocol.h>

@class NSTextStorage;

@protocol NSTextStorageObserving <NSObject>
@property(retain, nonatomic) NSTextStorage *textStorage;
- (void)performEditingTransactionForTextStorage:(NSTextStorage *)arg1 usingBlock:(void (^)(void))arg2;
- (void)processEditingForTextStorage:(NSTextStorage *)arg1 edited:(unsigned long long)arg2 range:(struct _NSRange)arg3 changeInLength:(long long)arg4 invalidatedRange:(struct _NSRange)arg5;
@end

