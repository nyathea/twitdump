//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray, NSString;

@interface TSKPlaygroundItem : NSObject
{
    MISSING_TYPE *title;
    MISSING_TYPE *subtitle;
    MISSING_TYPE *componentClassName;
    MISSING_TYPE *deeplinkId;
    MISSING_TYPE *searchTerms;
    MISSING_TYPE *controller;
    MISSING_TYPE *preview;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 componentClassName:(id)arg3 deeplinkId:(id)arg4;
@property(nonatomic, copy) CDUnknownBlockType preview;
@property(nonatomic, copy) CDUnknownBlockType controller;
@property(nonatomic, copy) NSArray *searchTerms;
@property(nonatomic, readonly) NSString *deeplinkId;
@property(nonatomic, copy) NSString *componentClassName;
@property(nonatomic, readonly) NSString *subtitle;
@property(nonatomic, readonly) NSString *title;

@end

