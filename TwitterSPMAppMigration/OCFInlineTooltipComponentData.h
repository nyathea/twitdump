//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class OCFIcon, OCFImage, OCFNavigationLink, OCFRichText;

@interface OCFInlineTooltipComponentData
{
    OCFRichText *_title;
    OCFIcon *_icon;
    OCFImage *_image;
    OCFNavigationLink *_dismissLink;
    long long _backgroundColor;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(readonly, nonatomic) OCFNavigationLink *dismissLink; // @synthesize dismissLink=_dismissLink;
@property(readonly, nonatomic) OCFImage *image; // @synthesize image=_image;
@property(readonly, nonatomic) OCFIcon *icon; // @synthesize icon=_icon;
@property(readonly, nonatomic) OCFRichText *title; // @synthesize title=_title;
- (id)initWithJSONDictionary:(id)arg1 error:(id *)arg2;

@end

