//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface TFSTwitterAPIAccountPasswordStrengthCommand
{
    NSString *_password;
    NSString *_name;
    NSString *_screenName;
    NSString *_email;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *email; // @synthesize email=_email;
@property(retain, nonatomic) NSString *screenName; // @synthesize screenName=_screenName;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *password; // @synthesize password=_password;
- (id)request;
- (id)initWithPassword:(id)arg1 name:(id)arg2 screenName:(id)arg3 email:(id)arg4 context:(id)arg5 source:(unsigned long long)arg6 responseModelBuilder:(id)arg7 completionBlock:(CDUnknownBlockType)arg8;

@end

