//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <T1Twitter/NSObject-Protocol.h>

@class NSString;
@protocol TCRAutocompleteTextInputChangeObserver;

@protocol TCRAutocompleteTextInput <NSObject>
- (void)updateTextInRange:(struct _NSRange)arg1 withReplacementText:(NSString *)arg2;
@property(nonatomic, readonly) struct _NSRange selectedRange;
@property(nonatomic, readonly) NSString *text;
@property(nonatomic) __weak id <TCRAutocompleteTextInputChangeObserver> changeObserver;
@end

