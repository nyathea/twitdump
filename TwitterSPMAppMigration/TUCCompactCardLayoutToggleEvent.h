//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE;

@interface TUCCompactCardLayoutToggleEvent
{
    MISSING_TYPE *action;
}

- (id)initWithEventType:(unsigned long long)arg1 componentType:(unsigned long long)arg2 destination:(id)arg3 supplementalParams:(id)arg4 slideIndex:(id)arg5 scribeAction:(id)arg6;
- (id)initWithEventType:(unsigned long long)arg1 componentType:(unsigned long long)arg2 destination:(id)arg3;
- (id)initWithSwipeEventType:(unsigned long long)arg1 slideIndex:(id)arg2;
- (id)initWithComponentView:(id)arg1 eventType:(unsigned long long)arg2 destination:(id)arg3;
- (id)initWithComponentView:(id)arg1 eventType:(unsigned long long)arg2 componentType:(unsigned long long)arg3;
- (id)initWithComponentType:(unsigned long long)arg1 destination:(id)arg2 action:(long long)arg3;
@property(nonatomic, readonly) long long action; // @synthesize action;

@end

