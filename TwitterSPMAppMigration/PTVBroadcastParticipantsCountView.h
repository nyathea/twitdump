//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface PTVBroadcastParticipantsCountView : UIView
{
    UIImageView *_participantsImage;
    UILabel *_participantsLabel;
}

- (void).cxx_destruct;
- (id)participantsFont;
- (void)setNWatching:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1 nWatching:(long long)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;

@end

