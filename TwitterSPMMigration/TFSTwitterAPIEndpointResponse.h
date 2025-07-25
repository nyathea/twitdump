//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSError;

@interface TFSTwitterAPIEndpointResponse
{
    id _finalModel;
    NSError *_finalParseError;
    NSError *_finalOperationError;
    NSArray *_finalAPIErrors;
}

- (void).cxx_destruct;
@property(copy) NSArray *finalAPIErrors; // @synthesize finalAPIErrors=_finalAPIErrors;
@property(retain) NSError *finalOperationError; // @synthesize finalOperationError=_finalOperationError;
@property(retain) NSError *finalParseError; // @synthesize finalParseError=_finalParseError;
@property(retain) id finalModel; // @synthesize finalModel=_finalModel;
- (id)modelWithParseError:(out id *)arg1 APIErrors:(out id *)arg2;
- (void)finalizeAPIErrors:(id)arg1;
- (void)finalizeOperationError:(id)arg1;
- (void)finalizeParseError:(id)arg1;
- (void)finalizeModel:(id)arg1;
- (id)APIErrors;
- (id)operationError;
- (id)parseError;
- (id)model;
- (void)prepare;

@end

