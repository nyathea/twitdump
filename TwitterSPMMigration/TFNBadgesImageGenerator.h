//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, TIPImagePipeline;

@interface TFNBadgesImageGenerator : NSObject
{
    MISSING_TYPE *imagePipeline;
}

- (void).cxx_destruct;
- (id)init;
- (id)imageWithBadges:(id)arg1 onDark:(_Bool)arg2 badgeCustomSize:(struct CGSize)arg3 completion:(CDUnknownBlockType)arg4;
- (id)imageWithBadges:(id)arg1 onDark:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)imageWithBadges:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)imageWithBadges:(id)arg1 onDark:(_Bool)arg2 badgeCustomSize:(struct CGSize)arg3;
- (id)imageWithBadges:(id)arg1 onDark:(_Bool)arg2;
- (id)imageWithBadges:(id)arg1;
@property(nonatomic, retain) TIPImagePipeline *imagePipeline; // @synthesize imagePipeline;

@end

