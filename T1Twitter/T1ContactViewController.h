//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ContactsUI/CNContactViewController.h>

@class TFSTwitterScribeContext;

@interface T1ContactViewController : CNContactViewController
{
    _Bool _updatingExistingContact;
    TFSTwitterScribeContext *_scribeContext;
}

- (void).cxx_destruct;
@property(copy, nonatomic) TFSTwitterScribeContext *scribeContext; // @synthesize scribeContext=_scribeContext;
@property(nonatomic, getter=isUpdatingExistingContact) _Bool updatingExistingContact; // @synthesize updatingExistingContact=_updatingExistingContact;

@end

