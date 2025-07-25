//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TFSTwitterEntityURL;
@protocol TFSActiveTextRange;

@interface T1ProfileUserPreviewItem : NSObject
{
    unsigned long long _type;
    TFSTwitterEntityURL *_url;
    id <TFSActiveTextRange> _bioTextRange;
}

+ (id)previewItemWithBioTextActiveRange:(id)arg1;
+ (id)previewItemWithURL:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <TFSActiveTextRange> bioTextRange; // @synthesize bioTextRange=_bioTextRange;
@property(readonly, nonatomic) TFSTwitterEntityURL *url; // @synthesize url=_url;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;

@end

