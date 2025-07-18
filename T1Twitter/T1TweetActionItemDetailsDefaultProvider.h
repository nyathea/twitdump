//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, TFNTwitterComposition;

@interface T1TweetActionItemDetailsDefaultProvider : NSObject
{
    NSString *_buttonTitle;
    TFNTwitterComposition *_composition;
    CDUnknownBlockType _completion;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) TFNTwitterComposition *composition; // @synthesize composition=_composition;
@property(copy, nonatomic) NSString *buttonTitle; // @synthesize buttonTitle=_buttonTitle;
- (id)initWithButtonTitle:(id)arg1 composition:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithButtonTitle:(id)arg1 composition:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

