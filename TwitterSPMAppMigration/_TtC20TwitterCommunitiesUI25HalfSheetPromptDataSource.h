//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray, TFNPromptTextSpec;

__attribute__((visibility("hidden")))
@interface _TtC20TwitterCommunitiesUI25HalfSheetPromptDataSource : NSObject
{
    MISSING_TYPE *promptLayout;
    MISSING_TYPE *showLogo;
    MISSING_TYPE *primaryTextSpec;
    MISSING_TYPE *secondaryTextSpec;
    MISSING_TYPE *buttonLayout;
    MISSING_TYPE *buttonSpecs;
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, copy) NSArray *buttonSpecs;
@property(nonatomic) unsigned long long buttonLayout; // @synthesize buttonLayout;
@property(nonatomic, retain) TFNPromptTextSpec *secondaryTextSpec; // @synthesize secondaryTextSpec;
@property(nonatomic, retain) TFNPromptTextSpec *primaryTextSpec; // @synthesize primaryTextSpec;
@property(nonatomic) _Bool showLogo; // @synthesize showLogo;
@property(nonatomic, readonly) long long promptLayout; // @synthesize promptLayout;

@end

