//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TwitterAppSPMMigration/NSObject-Protocol.h>

@class TFSTwitterAPICommand;
@protocol TFSTwitterAPICommandCancellable, TFSTwitterAPICommandOperationHandle;

@protocol TFSTwitterAPICommandLoader <NSObject>
- (id <TFSTwitterAPICommandCancellable>)startCommand:(TFSTwitterAPICommand *)arg1;
- (id <TFSTwitterAPICommandOperationHandle>)loadCommand:(TFSTwitterAPICommand *)arg1;
@end

