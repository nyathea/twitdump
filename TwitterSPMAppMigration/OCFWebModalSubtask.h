//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSURL, OCFNavigationLink;

@interface OCFWebModalSubtask
{
    NSURL *_url;
    long long _style;
    OCFNavigationLink *_nextLink;
    OCFNavigationLink *_skipLink;
    OCFNavigationLink *_failLink;
}

+ (long long)version;
+ (id)completionDeepLinkSubtaskDataKey;
+ (id)typeNames;
- (void).cxx_destruct;
@property(readonly, nonatomic) OCFNavigationLink *failLink; // @synthesize failLink=_failLink;
@property(readonly, nonatomic) OCFNavigationLink *skipLink; // @synthesize skipLink=_skipLink;
@property(readonly, nonatomic) OCFNavigationLink *nextLink; // @synthesize nextLink=_nextLink;
@property(readonly, nonatomic) long long style; // @synthesize style=_style;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
- (id)initWithJSONDictionary:(id)arg1 subtaskID:(id)arg2 typeName:(id)arg3 backNavigationType:(long long)arg4 backNavigationLink:(id)arg5 error:(id *)arg6;

@end

