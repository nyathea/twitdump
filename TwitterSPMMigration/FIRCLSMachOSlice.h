//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface FIRCLSMachOSlice : NSObject
{
    struct FIRCLSMachOSlice _slice;
    NSString *_uuidString;
    NSArray *_linkedDylibs;
    CDStruct_e24ffa00 _minimumOSVersion;
    CDStruct_e24ffa00 _linkedSDKVersion;
}

+ (id)runningSlice;
- (void).cxx_destruct;
@property(readonly, nonatomic) CDStruct_e24ffa00 linkedSDKVersion; // @synthesize linkedSDKVersion=_linkedSDKVersion;
@property(readonly, nonatomic) CDStruct_e24ffa00 minimumOSVersion; // @synthesize minimumOSVersion=_minimumOSVersion;
@property(readonly, nonatomic) NSArray *linkedDylibs;
@property(readonly, copy, nonatomic) NSString *uuid;
@property(readonly, copy, nonatomic) NSString *architectureName;
- (id)initWithSlice:(struct FIRCLSMachOSlice *)arg1;

@end

