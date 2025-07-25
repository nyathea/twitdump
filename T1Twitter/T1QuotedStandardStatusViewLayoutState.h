//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TwitterSPMMigration/TFNComposableViewLayoutStateSet.h>

@class NSString, TFNStackLayout;

@interface T1QuotedStandardStatusViewLayoutState : TFNComposableViewLayoutStateSet
{
    _Bool _bodyMayHaveHashflags;
    _Bool _hideMultiPhotoAltTextBadge;
    TFNStackLayout *_layout;
    struct CGSize _size;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hideMultiPhotoAltTextBadge; // @synthesize hideMultiPhotoAltTextBadge=_hideMultiPhotoAltTextBadge;
@property(nonatomic) _Bool bodyMayHaveHashflags; // @synthesize bodyMayHaveHashflags=_bodyMayHaveHashflags;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(retain, nonatomic) TFNStackLayout *layout; // @synthesize layout=_layout;
- (_Bool)_t1_isValidForViewModel:(id)arg1 width:(double)arg2 layoutMetrics:(id)arg3;
- (_Bool)isValidForViewModel:(id)arg1 width:(double)arg2 layoutMetrics:(id)arg3;
- (_Bool)isValidAfterExternalUpdateOfType:(long long)arg1;
- (_Bool)isValidAfterStatusUpdate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

