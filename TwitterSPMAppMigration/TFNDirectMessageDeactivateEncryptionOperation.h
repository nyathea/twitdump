//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TwitterSPMMigration/TFSConcurrentOperation.h>

@interface TFNDirectMessageDeactivateEncryptionOperation : TFSConcurrentOperation
{
    CDUnknownBlockType _completion;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (void)run;
- (id)initWithCompletion:(CDUnknownBlockType)arg1;

@end

