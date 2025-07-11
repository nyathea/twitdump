//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TwitterSPMMigration/TFNComposableViewLayoutState.h>

@class NSString;

@interface T1StandardStatusAffiliateBadgeViewLayoutState : TFNComposableViewLayoutState
{
    _Bool _hasAccountLabel;
    NSString *_designatorString;
    NSString *_designatorImageUrl;
    long long _designatorIconType;
    long long _designatorLabelType;
    NSString *_designatorUrl;
    struct CGRect _affiliateBadgeFrame;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasAccountLabel; // @synthesize hasAccountLabel=_hasAccountLabel;
@property(nonatomic) struct CGRect affiliateBadgeFrame; // @synthesize affiliateBadgeFrame=_affiliateBadgeFrame;
@property(copy, nonatomic) NSString *designatorUrl; // @synthesize designatorUrl=_designatorUrl;
@property(nonatomic) long long designatorLabelType; // @synthesize designatorLabelType=_designatorLabelType;
@property(nonatomic) long long designatorIconType; // @synthesize designatorIconType=_designatorIconType;
@property(copy, nonatomic) NSString *designatorImageUrl; // @synthesize designatorImageUrl=_designatorImageUrl;
@property(copy, nonatomic) NSString *designatorString; // @synthesize designatorString=_designatorString;

@end

