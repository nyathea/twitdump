//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, TFNLegacyFormAppearance;

@interface TFNLegacyFormCustomItem : NSObject
{
    _Bool _destructive;
    _Bool _showsMenuOnPrimaryAction;
    TFNLegacyFormAppearance *_appearance;
    NSString *_text;
    NSString *_detailText;
    unsigned long long _disclosureStyle;
    CDUnknownBlockType _sizeAtIndexPath;
    CDUnknownBlockType _cellAtIndexPath;
    CDUnknownBlockType _didSelectAtIndexPath;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType didSelectAtIndexPath; // @synthesize didSelectAtIndexPath=_didSelectAtIndexPath;
@property(copy, nonatomic) CDUnknownBlockType cellAtIndexPath; // @synthesize cellAtIndexPath=_cellAtIndexPath;
@property(copy, nonatomic) CDUnknownBlockType sizeAtIndexPath; // @synthesize sizeAtIndexPath=_sizeAtIndexPath;
@property(readonly, nonatomic) _Bool showsMenuOnPrimaryAction; // @synthesize showsMenuOnPrimaryAction=_showsMenuOnPrimaryAction;
@property(readonly, nonatomic) _Bool destructive; // @synthesize destructive=_destructive;
@property(readonly, nonatomic) unsigned long long disclosureStyle; // @synthesize disclosureStyle=_disclosureStyle;
@property(copy, nonatomic) NSString *detailText; // @synthesize detailText=_detailText;
@property(readonly, copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) TFNLegacyFormAppearance *appearance; // @synthesize appearance=_appearance;
- (void)setDidSelectAtIndexPathTarget:(id)arg1 action:(SEL)arg2;
- (id)initWithText:(id)arg1 disclosureStyle:(unsigned long long)arg2 destructive:(_Bool)arg3 showsMenuOnPrimaryAction:(_Bool)arg4;
- (id)initWithText:(id)arg1 disclosureStyle:(unsigned long long)arg2 destructive:(_Bool)arg3;

@end

