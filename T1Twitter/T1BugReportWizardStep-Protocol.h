//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <T1Twitter/NSObject-Protocol.h>

@class TDTBugReport, UIViewController;
@protocol T1BugReportWizardStep;

@protocol T1BugReportWizardStep <NSObject>
- (UIViewController<T1BugReportWizardStep> *)nextStep;
- (void)updateBugReport:(TDTBugReport *)arg1;
@end

