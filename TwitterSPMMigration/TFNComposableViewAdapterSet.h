//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface TFNComposableViewAdapterSet : NSObject
{
    NSDictionary *_viewAdaptersByIdentifier;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *viewAdaptersByIdentifier; // @synthesize viewAdaptersByIdentifier=_viewAdaptersByIdentifier;
- (id)viewIdentifiersWithValidLayoutStateInSet:(id)arg1 forViewModel:(id)arg2 layoutMetrics:(id)arg3;
- (void)populateLayoutStateSet:(id)arg1 withValidViewIdentifiers:(id)arg2 inPreviousLayoutState:(id)arg3;
- (void)enumerateViewAdaptersUsingBlock:(CDUnknownBlockType)arg1;
- (id)objectAtIndexedSubscript:(long long)arg1;
@property(readonly, nonatomic) unsigned long long count;
- (id)init;
- (id)initWithViewAdaptersByIdentifier:(id)arg1;
- (id)initWithViewAdapters:(id)arg1;

@end

