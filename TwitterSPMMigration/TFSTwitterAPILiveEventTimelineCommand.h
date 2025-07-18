//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface TFSTwitterAPILiveEventTimelineCommand
{
    NSString *_eventID;
    NSString *_sourceID;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *sourceID; // @synthesize sourceID=_sourceID;
@property(copy, nonatomic) NSString *eventID; // @synthesize eventID=_eventID;
- (id)request;
- (id)initWithAccountID:(id)arg1 eventID:(id)arg2 sourceID:(id)arg3 context:(id)arg4 responseModelBuilder:(id)arg5 responseProcessorBlock:(CDUnknownBlockType)arg6 completionBlock:(CDUnknownBlockType)arg7;

@end

