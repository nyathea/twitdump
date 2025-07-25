//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString, TFNItemsDataViewController, TSKShowcaseTextItem;

@interface TSKPlaygroundSectionBuilder : NSObject
{
    MISSING_TYPE *controller;
    MISSING_TYPE *sectionIndex;
    MISSING_TYPE *sectionItems;
    MISSING_TYPE *titleItem;
    MISSING_TYPE *subtitleItem;
    MISSING_TYPE *dynamicContent;
    MISSING_TYPE *dynamicContentItemCount;
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, copy) CDUnknownBlockType dynamicContent;
- (void)addOptionItems:(id)arg1;
- (void)addTextItem:(id)arg1;
- (void)addPreviewItem:(id)arg1;
- (void)addActionItem:(id)arg1;
- (void)addGalleryItemWith:(id)arg1;
- (void)addGalleryItem:(id)arg1;
@property(nonatomic, copy) NSString *subtitle;
@property(nonatomic, retain) TSKShowcaseTextItem *subtitleItem; // @synthesize subtitleItem;
@property(nonatomic, copy) NSString *title;
@property(nonatomic, retain) TSKShowcaseTextItem *titleItem; // @synthesize titleItem;
- (id)initWithController:(id)arg1 sectionIndex:(long long)arg2;
@property(nonatomic, readonly) long long sectionIndex; // @synthesize sectionIndex;
@property(nonatomic, readonly) TFNItemsDataViewController *controller; // @synthesize controller;

@end

