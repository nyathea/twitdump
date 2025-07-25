//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface LHLSSPS : NSObject
{
    struct SeqParamSet _sps;
}

- (id).cxx_construct;
- (_Bool)frameNumWithSliceHeaderData:(id)arg1 frameNum:(int *)arg2;
- (void)cropOffsetsLeft:(int *)arg1 right:(int *)arg2 top:(int *)arg3 bottom:(int *)arg4;
@property(readonly, nonatomic) int frameNumBitDepth;
@property(readonly, nonatomic) int croppedHeight;
@property(readonly, nonatomic) int croppedWidth;
@property(readonly, nonatomic) int encodedHeight;
@property(readonly, nonatomic) int encodedWidth;
@property(readonly, nonatomic) int level;
@property(readonly, nonatomic) int constraintSetFlags;
@property(readonly, nonatomic) int profile;
- (id)initWithData:(id)arg1;

@end

