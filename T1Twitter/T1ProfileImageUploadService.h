//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface T1ProfileImageUploadService : NSObject
{
}

+ (id)_perfEventNameWithElement:(id)arg1 action:(id)arg2 type:(unsigned long long)arg3;
+ (id)_uploadFailedReasonForError:(id)arg1;
+ (id)_uploadFailedMessageForType:(unsigned long long)arg1;
+ (id)_uploadOperationKeyForType:(unsigned long long)arg1 fromAccount:(id)arg2;
+ (void)uploadPhoto:(id)arg1 ofType:(unsigned long long)arg2 fromAccount:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)cancelUploadsOfType:(unsigned long long)arg1 fromAccount:(id)arg2;

@end

