//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TwitterAppSPMMigration/NSObject-Protocol.h>

@class NSArray, TUCDisplayOptions, TUCMediaComponentModel, _TtC14TFSTwitterCore25TFSTwitterPromotedContent;

@protocol TUCComponentContainer <NSObject>
@property(nonatomic, readonly) TUCMediaComponentModel *firstVideoComponent;
@property(nonatomic, readonly) _Bool hasCarousel;
@property(nonatomic, readonly) TUCDisplayOptions *displayOptions;
- (id)withRemovedComponentsOfType:(unsigned long long)arg1;
- (id)withComponentsTransform:(id <TUCComponentModel> (^)(id <TUCComponentModel>))arg1;
- (id)withPromotedContent:(_TtC14TFSTwitterCore25TFSTwitterPromotedContent *)arg1;
- (NSArray *)allComponents;
@end

