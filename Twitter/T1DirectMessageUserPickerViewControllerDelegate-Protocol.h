//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSString, T1DirectMessageUserPickerViewController;

@protocol T1DirectMessageUserPickerViewControllerDelegate <NSObject>
- (void)userPickerViewControllerDidCancel:(T1DirectMessageUserPickerViewController *)arg1;
- (void)userPickerViewControllerDidTapDone:(T1DirectMessageUserPickerViewController *)arg1;
- (_Bool)userPickerViewController:(T1DirectMessageUserPickerViewController *)arg1 shouldForceSelectUsername:(NSString *)arg2;
@end

