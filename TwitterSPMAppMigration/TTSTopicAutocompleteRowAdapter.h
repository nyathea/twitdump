//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TwitterSPMMigration/TFNItemsDataViewAdapter.h>

@class MISSING_TYPE;

@interface TTSTopicAutocompleteRowAdapter : TFNItemsDataViewAdapter
{
    MISSING_TYPE *useDarkMode;
    MISSING_TYPE *useInlineReplyColorMode;
    MISSING_TYPE *isHashflagEnabled;
}

- (id)init;
- (id)dataViewController:(id)arg1 tableViewCellForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (double)dataViewController:(id)arg1 estimatedTableViewHeightForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (double)dataViewController:(id)arg1 tableViewHeightForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
@property(nonatomic) _Bool isHashflagEnabled; // @synthesize isHashflagEnabled;
@property(nonatomic) _Bool useInlineReplyColorMode; // @synthesize useInlineReplyColorMode;
@property(nonatomic) _Bool useDarkMode; // @synthesize useDarkMode;

@end

