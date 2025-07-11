//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, TFSScribeThriftCellularLink, TFSScribeThriftOtherLink, TFSScribeThriftWifiLink;

@interface TFSScribeThriftDataLinkLayer : NSObject
{
    _Bool _cellularLinkIsSet;
    _Bool _wifiLinkIsSet;
    _Bool _otherLinkIsSet;
    TFSScribeThriftCellularLink *_cellularLink;
    TFSScribeThriftWifiLink *_wifiLink;
    TFSScribeThriftOtherLink *_otherLink;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool otherLinkIsSet; // @synthesize otherLinkIsSet=_otherLinkIsSet;
@property(retain, nonatomic) TFSScribeThriftOtherLink *otherLink; // @synthesize otherLink=_otherLink;
@property(readonly, nonatomic) _Bool wifiLinkIsSet; // @synthesize wifiLinkIsSet=_wifiLinkIsSet;
@property(retain, nonatomic) TFSScribeThriftWifiLink *wifiLink; // @synthesize wifiLink=_wifiLink;
@property(readonly, nonatomic) _Bool cellularLinkIsSet; // @synthesize cellularLinkIsSet=_cellularLinkIsSet;
@property(retain, nonatomic) TFSScribeThriftCellularLink *cellularLink; // @synthesize cellularLink=_cellularLink;
- (void)validate;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCellularLink:(id)arg1 wifiLink:(id)arg2 otherLink:(id)arg3;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

