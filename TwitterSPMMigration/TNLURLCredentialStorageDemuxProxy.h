//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface TNLURLCredentialStorageDemuxProxy
{
}

- (void)setDefaultCredential:(id)arg1 forProtectionSpace:(id)arg2 task:(id)arg3;
- (void)getDefaultCredentialForProtectionSpace:(id)arg1 task:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)removeCredential:(id)arg1 forProtectionSpace:(id)arg2 options:(id)arg3 task:(id)arg4;
- (void)setCredential:(id)arg1 forProtectionSpace:(id)arg2 task:(id)arg3;
- (void)getCredentialsForProtectionSpace:(id)arg1 task:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end

