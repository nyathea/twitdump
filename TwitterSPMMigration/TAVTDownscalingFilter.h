//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface TAVTDownscalingFilter : NSObject
{
    MISSING_TYPE *framesToBuffer;
    MISSING_TYPE *lumaScaler;
    MISSING_TYPE *chromaScaler;
    MISSING_TYPE *commandQueue;
    MISSING_TYPE *textureCache;
}

- (void).cxx_destruct;
- (id)init;
- (id)scheduleProcessingOfFrameWithPresentationTimeStamp:(CDStruct_1b6d18a9)arg1 input:(struct __CVBuffer *)arg2 output:(struct __CVBuffer *)arg3 error:(id *)arg4;
- (id)initWithFramesToBuffer:(long long)arg1 lumaAlgorithm:(long long)arg2 chromaAlgorithm:(long long)arg3 error:(id *)arg4;
@property(nonatomic, readonly) long long framesToBuffer; // @synthesize framesToBuffer;

@end

