//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface TFSScribeOpenOperation
{
    CDUnknownBlockType _willOpen;
    CDUnknownBlockType _didOpen;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) CDUnknownBlockType didOpen; // @synthesize didOpen=_didOpen;
@property(readonly, copy, nonatomic) CDUnknownBlockType willOpen; // @synthesize willOpen=_willOpen;
- (void)main;
- (id)initWithApplicationLink:(id)arg1 databaseProvider:(id)arg2 willOpenBlock:(CDUnknownBlockType)arg3 didOpenBlock:(CDUnknownBlockType)arg4;

@end

