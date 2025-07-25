//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TwitterSPMMigration/NSObject-Protocol.h>

@class NSArray, UIPasteConfiguration;

@protocol UIPasteConfigurationSupporting <NSObject>
@property(copy, nonatomic) UIPasteConfiguration *pasteConfiguration;

@optional
- (_Bool)canPasteItemProviders:(NSArray *)arg1;
- (void)pasteItemProviders:(NSArray *)arg1;
@end

