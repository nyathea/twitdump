//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface TFSTwitterAPIUsersRecommendationsRequest
{
}

+ (unsigned long long)responseHydrationFlags;
+ (id)endpointPath;
- (id)initWithUserID:(id)arg1 screenName:(id)arg2 profileID:(id)arg3 displayLocation:(id)arg4 connections:(_Bool)arg5 allowPromotedContent:(_Bool)arg6 limit:(id)arg7 referralSource:(id)arg8 excluded:(id)arg9 context:(id)arg10 responseModelBuilder:(id)arg11;
- (id)initWithITSTopics:(id)arg1 customInterests:(id)arg2 displayLocation:(id)arg3 allowPromotedContent:(_Bool)arg4 context:(id)arg5 responseModelBuilder:(id)arg6;
- (id)initWithUserID:(id)arg1 screenName:(id)arg2 displayLocation:(id)arg3 allowPromotedContent:(_Bool)arg4 limit:(id)arg5 referralSource:(id)arg6 excluded:(id)arg7 context:(id)arg8 responseModelBuilder:(id)arg9;
- (id)initWithScreenName:(id)arg1 displayLocation:(id)arg2 allowPromotedContent:(_Bool)arg3 limit:(id)arg4 referralSource:(id)arg5 excluded:(id)arg6 context:(id)arg7 responseModelBuilder:(id)arg8;
- (id)initWithUserID:(id)arg1 displayLocation:(id)arg2 allowPromotedContent:(_Bool)arg3 limit:(id)arg4 referralSource:(id)arg5 excluded:(id)arg6 context:(id)arg7 responseModelBuilder:(id)arg8;
- (id)initWithEndpointPath:(id)arg1 parameters:(id)arg2 multipartFormData:(id)arg3 bodyData:(id)arg4 bodyFilePath:(id)arg5 headerFields:(id)arg6 context:(id)arg7 responseModelBuilder:(id)arg8 emptyResponseDataExpected:(_Bool)arg9;

@end

