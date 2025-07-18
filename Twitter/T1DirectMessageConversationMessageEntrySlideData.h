//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TFNDirectMessagePlayable, UIImage;
@protocol TFNDirectMessageEntry, TFNDirectMessageMediaAttachment;

@interface T1DirectMessageConversationMessageEntrySlideData : NSObject
{
    id <TFNDirectMessageEntry> _messageEntry;
    id <TFNDirectMessageMediaAttachment> _mediaAttachment;
    UIImage *_previewImage;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIImage *previewImage; // @synthesize previewImage=_previewImage;
@property(copy, nonatomic) id <TFNDirectMessageMediaAttachment> mediaAttachment; // @synthesize mediaAttachment=_mediaAttachment;
@property(copy, nonatomic) id <TFNDirectMessageEntry> messageEntry; // @synthesize messageEntry=_messageEntry;
@property(readonly, nonatomic) TFNDirectMessagePlayable *directMessagePlayable;
- (id)initWithMessageEntry:(id)arg1 mediaAttachment:(id)arg2 previewImage:(id)arg3;
- (id)init;

@end

