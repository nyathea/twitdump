//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface TFSTwitterAPIFriendshipsListRequest
{
}

+ (unsigned long long)responseHydrationFlags;
+ (id)endpointPath;
- (id)initWithUserIDs:(id)arg1 screenNames:(id)arg2 context:(id)arg3 responseModelBuilder:(id)arg4;
- (id)initWithScreenNames:(id)arg1 context:(id)arg2 responseModelBuilder:(id)arg3;
- (id)initWithUserIDs:(id)arg1 context:(id)arg2 responseModelBuilder:(id)arg3;
- (id)initWithEndpointPath:(id)arg1 parameters:(id)arg2 multipartFormData:(id)arg3 bodyData:(id)arg4 bodyFilePath:(id)arg5 headerFields:(id)arg6 context:(id)arg7 responseModelBuilder:(id)arg8 emptyResponseDataExpected:(_Bool)arg9;

@end

