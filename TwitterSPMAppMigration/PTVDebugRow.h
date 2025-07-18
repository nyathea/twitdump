//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface PTVDebugRow : NSObject
{
    NSString *_text;
    NSString *_detail;
    CDUnknownBlockType _tapHandler;
}

+ (id)rowWithText:(id)arg1 detail:(id)arg2 tapHandler:(CDUnknownBlockType)arg3;
+ (id)rowWithText:(id)arg1 tapHandler:(CDUnknownBlockType)arg2;
+ (id)rowWithText:(id)arg1 detail:(id)arg2;
+ (id)rowWithText:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType tapHandler; // @synthesize tapHandler=_tapHandler;
@property(retain, nonatomic) NSString *detail; // @synthesize detail=_detail;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;

@end

