//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TwitterSPMMigration/TFSTwitterAPIEndpointRequest.h>

@interface TFSTwitterAPIDirectMessageConversationRequest : TFSTwitterAPIEndpointRequest
{
}

- (id)initWithParticipantIDs:(id)arg1 supportsEdit:(_Bool)arg2 context:(id)arg3 responseModelBuilder:(id)arg4;
- (id)initWithConversationID:(id)arg1 minID:(id)arg2 minBuffer:(id)arg3 count:(id)arg4 includeConversationInfo:(_Bool)arg5 supportsEdit:(_Bool)arg6 context:(id)arg7 responseModelBuilder:(id)arg8;
- (id)_initWithConversationID:(id)arg1 maxID:(id)arg2 count:(id)arg3 includeConversationInfo:(_Bool)arg4 supportsEdit:(_Bool)arg5 context:(id)arg6 responseModelBuilder:(id)arg7;
- (id)initWithConversationID:(id)arg1 maxID:(id)arg2 count:(id)arg3 includeConversationInfo:(_Bool)arg4 supportsEdit:(_Bool)arg5 context:(id)arg6 responseModelBuilder:(id)arg7;
- (id)initWithConversationID:(id)arg1 count:(id)arg2 includeConversationInfo:(_Bool)arg3 supportsEdit:(_Bool)arg4 context:(id)arg5 responseModelBuilder:(id)arg6;
- (id)initWithEndpointPath:(id)arg1 parameters:(id)arg2 multipartFormData:(id)arg3 bodyData:(id)arg4 bodyFilePath:(id)arg5 headerFields:(id)arg6 context:(id)arg7 responseModelBuilder:(id)arg8 emptyResponseDataExpected:(_Bool)arg9;

@end

