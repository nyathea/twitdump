//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSAttributedString, NSURL, TFNTwitterCardContext;

@interface T1BroadcastCellCardViewModel : NSObject
{
    _Bool _isLive;
    TFNTwitterCardContext *_cardContext;
    NSAttributedString *_attributedCategoryString;
    NSAttributedString *_attributedCategorySpacerString;
    NSAttributedString *_attributedLiveString;
    NSAttributedString *_attributedTitleString;
    NSURL *_imageURL;
    struct CGSize _imageDimensions;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) struct CGSize imageDimensions; // @synthesize imageDimensions=_imageDimensions;
@property(readonly, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(nonatomic) _Bool isLive; // @synthesize isLive=_isLive;
@property(readonly, nonatomic) NSAttributedString *attributedTitleString; // @synthesize attributedTitleString=_attributedTitleString;
@property(readonly, nonatomic) NSAttributedString *attributedLiveString; // @synthesize attributedLiveString=_attributedLiveString;
@property(readonly, nonatomic) NSAttributedString *attributedCategorySpacerString; // @synthesize attributedCategorySpacerString=_attributedCategorySpacerString;
@property(readonly, nonatomic) NSAttributedString *attributedCategoryString; // @synthesize attributedCategoryString=_attributedCategoryString;
@property(retain, nonatomic) TFNTwitterCardContext *cardContext; // @synthesize cardContext=_cardContext;
- (id)initWithCardContext:(id)arg1;

@end

