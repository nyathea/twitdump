//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TwitterSPMMigration/NSObject-Protocol.h>

@class NSAttributedString, NSDictionary, NSItemProvider, NSString, NSTextAttachment;

@protocol UITextPasteItem <NSObject>
@property(readonly, nonatomic) NSDictionary *defaultAttributes;
@property(readonly, nonatomic) id localObject;
@property(readonly, nonatomic) NSItemProvider *itemProvider;
- (void)setDefaultResult;
- (void)setNoResult;
- (void)setAttachmentResult:(NSTextAttachment *)arg1;
- (void)setAttributedStringResult:(NSAttributedString *)arg1;
- (void)setStringResult:(NSString *)arg1;
@end

