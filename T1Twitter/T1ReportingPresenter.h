//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface T1ReportingPresenter : NSObject
{
}

+ (id)taskServiceForFlowSpec:(id)arg1;
+ (id)flowSpecForContext:(id)arg1 account:(id)arg2;
+ (id)_makeFlowControllerForContext:(id)arg1 account:(id)arg2 delegate:(id)arg3;
+ (_Bool)shouldUseNativeZazuReportingForContext:(id)arg1 account:(id)arg2;
+ (id)presentReportFromViewController:(id)arg1 account:(id)arg2 context:(id)arg3 webViewRequestDelegate:(id)arg4 flowControllerDelegate:(id)arg5 onDismissBlock:(CDUnknownBlockType)arg6;

@end

