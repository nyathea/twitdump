//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TwitterSPMMigration/TFNCollectionViewCell.h>

@class MISSING_TYPE, UIImage, UIView;
@protocol TVPPlayerSessionSource;

__attribute__((visibility("hidden")))
@interface _TtC14T1TwitterSwift18CondensedTweetView : TFNCollectionViewCell
{
    MISSING_TYPE *statusView;
}

- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)autoplayable;
@property(nonatomic, readonly) UIImage *playerPreviewImage;
@property(nonatomic, readonly) UIView *playerContainerView;
@property(nonatomic, readonly) id <TVPPlayerSessionSource> playerSessionSource;

@end

