//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable;

@interface T1NavigationMetadataTracker : NSObject
{
    NSMapTable *_sourceNavigationMetadataMap;
    NSMapTable *_sourceScribeContextMap;
}

+ (id)sharedTracker;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMapTable *sourceScribeContextMap; // @synthesize sourceScribeContextMap=_sourceScribeContextMap;
@property(retain, nonatomic) NSMapTable *sourceNavigationMetadataMap; // @synthesize sourceNavigationMetadataMap=_sourceNavigationMetadataMap;
- (void)setCurrentViewControllerSourceScribeContext:(id)arg1;
- (void)setSourceScribeContext:(id)arg1 forViewController:(id)arg2;
- (id)sourceScribeContextForViewController:(id)arg1;
- (void)setCurrentViewControllerNavigationMetadata:(id)arg1;
- (void)setSourceNavigationMetadata:(id)arg1 forViewController:(id)arg2;
- (id)sourceNavigationMetadataForViewController:(id)arg1;
- (id)init;

@end

