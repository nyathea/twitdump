//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TwitterSPMMigration/TFSTwitterAPICommandWithResponseModelBuilder.h>

@class NSNumber, NSString;

@interface TFSTwitterAPIDirectMessageUserUpdatesCommand : TFSTwitterAPICommandWithResponseModelBuilder
{
    _Bool _filterNSFW;
    _Bool _triggeredByLivePipeline;
    NSString *_cursor;
    NSString *_activeConversationID;
    NSNumber *_filterLowQuality;
    NSString *_includeQualityParameter;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool triggeredByLivePipeline; // @synthesize triggeredByLivePipeline=_triggeredByLivePipeline;
@property(readonly, nonatomic) _Bool filterNSFW; // @synthesize filterNSFW=_filterNSFW;
@property(readonly, copy, nonatomic) NSString *includeQualityParameter; // @synthesize includeQualityParameter=_includeQualityParameter;
@property(readonly, nonatomic) NSNumber *filterLowQuality; // @synthesize filterLowQuality=_filterLowQuality;
@property(readonly, copy, nonatomic) NSString *activeConversationID; // @synthesize activeConversationID=_activeConversationID;
@property(readonly, copy, nonatomic) NSString *cursor; // @synthesize cursor=_cursor;
- (id)request;
- (id)initWithAccountID:(id)arg1 cursor:(id)arg2 activeConversationID:(id)arg3 filterLowQuality:(id)arg4 includeQualityParameter:(id)arg5 filterNSFW:(_Bool)arg6 triggeredByLivePipeline:(_Bool)arg7 context:(id)arg8 source:(unsigned long long)arg9 responseModelBuilder:(id)arg10 completionBlock:(CDUnknownBlockType)arg11;

@end

