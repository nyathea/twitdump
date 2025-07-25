//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TwitterSPMMigration/NSObject-Protocol.h>

@class UIPrinter, UIPrinterPickerController, UIViewController;

@protocol UIPrinterPickerControllerDelegate <NSObject>

@optional
- (void)printerPickerControllerDidSelectPrinter:(UIPrinterPickerController *)arg1;
- (void)printerPickerControllerDidDismiss:(UIPrinterPickerController *)arg1;
- (void)printerPickerControllerWillDismiss:(UIPrinterPickerController *)arg1;
- (void)printerPickerControllerDidPresent:(UIPrinterPickerController *)arg1;
- (void)printerPickerControllerWillPresent:(UIPrinterPickerController *)arg1;
- (_Bool)printerPickerController:(UIPrinterPickerController *)arg1 shouldShowPrinter:(UIPrinter *)arg2;
- (UIViewController *)printerPickerControllerParentViewController:(UIPrinterPickerController *)arg1;
@end

