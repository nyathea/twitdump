//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class T1ScoreParticipantInfoViewTheme, UIColor, UIFont;

@interface T1ScoreViewTheme : NSObject
{
    T1ScoreParticipantInfoViewTheme *_participantViewTheme;
    UIColor *_separatorColor;
    UIColor *_notesColor;
    UIColor *_backgroundColor;
}

+ (id)darkTheme;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(readonly, nonatomic) UIColor *notesColor; // @synthesize notesColor=_notesColor;
@property(readonly, nonatomic) UIColor *separatorColor; // @synthesize separatorColor=_separatorColor;
@property(readonly, nonatomic) T1ScoreParticipantInfoViewTheme *participantViewTheme; // @synthesize participantViewTheme=_participantViewTheme;
@property(readonly, nonatomic) UIFont *notesFont;

@end

