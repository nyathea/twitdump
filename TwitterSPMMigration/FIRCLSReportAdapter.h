//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FIRCLSInstallIdentifierModel, FIRCLSRecordApplication, FIRCLSRecordHost, FIRCLSRecordIdentity, NSString;

@interface FIRCLSReportAdapter : NSObject
{
    _Bool _hasCrashed;
    FIRCLSInstallIdentifierModel *_installIDModel;
    NSString *_fiid;
    NSString *_authToken;
    NSString *_folderPath;
    NSString *_googleAppID;
    FIRCLSRecordIdentity *_identity;
    FIRCLSRecordHost *_host;
    FIRCLSRecordApplication *_application;
    struct _google_crashlytics_Report _report;
}

+ (id)dictionariesFromEachLineOfFile:(id)arg1;
+ (id)combinedDictionariesFromFilePath:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) struct _google_crashlytics_Report report; // @synthesize report=_report;
@property(retain, nonatomic) FIRCLSRecordApplication *application; // @synthesize application=_application;
@property(retain, nonatomic) FIRCLSRecordHost *host; // @synthesize host=_host;
@property(retain, nonatomic) FIRCLSRecordIdentity *identity; // @synthesize identity=_identity;
@property(retain, nonatomic) NSString *googleAppID; // @synthesize googleAppID=_googleAppID;
@property(retain, nonatomic) NSString *folderPath; // @synthesize folderPath=_folderPath;
@property(readonly, nonatomic) _Bool hasCrashed; // @synthesize hasCrashed=_hasCrashed;
@property(copy, nonatomic) NSString *authToken; // @synthesize authToken=_authToken;
@property(copy, nonatomic) NSString *fiid; // @synthesize fiid=_fiid;
@property(retain, nonatomic) FIRCLSInstallIdentifierModel *installIDModel; // @synthesize installIDModel=_installIDModel;
- (int)protoPlatformFromString:(id)arg1;
- (id)clsRecordFilePaths;
- (struct _google_crashlytics_FilesPayload)protoFilesPayload;
- (struct _google_crashlytics_Report)protoReport;
- (id)transportBytes;
- (void)loadMetaDataFile;
- (void)dealloc;
- (id)initWithPath:(id)arg1 googleAppId:(id)arg2 installIDModel:(id)arg3 fiid:(id)arg4 authToken:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

