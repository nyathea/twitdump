//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TwitterSPMMigration/TFNTableViewCell.h>

@class NSString;

@interface T1ConversationControlTableViewHeaderCell : TFNTableViewCell
{
    NSString *_headerIconName;
    struct UIEdgeInsets _contentEdgeInsets;
}

+ (double)cellHeightForTableView:(id)arg1 headerText:(id)arg2 contentEdgeInsets:(struct UIEdgeInsets)arg3;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *headerIconName; // @synthesize headerIconName=_headerIconName;
@property(nonatomic) struct UIEdgeInsets contentEdgeInsets; // @synthesize contentEdgeInsets=_contentEdgeInsets;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)calculatedLayoutMetrics;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

