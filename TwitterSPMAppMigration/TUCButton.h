//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TwitterSPMMigration/TFNButton.h>

@class TUCButtonData;

@interface TUCButton : TFNButton
{
    TUCButtonData *_dataModel;
}

+ (id)buttonWithDataModel:(id)arg1 dominantColor:(id)arg2;
+ (struct CGSize)sizeForDataModel:(id)arg1 hasImage:(_Bool)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) TUCButtonData *dataModel; // @synthesize dataModel=_dataModel;
- (void)_t1_updateContentFromDataModel;
- (void)updateWithDataModel:(id)arg1;

@end

