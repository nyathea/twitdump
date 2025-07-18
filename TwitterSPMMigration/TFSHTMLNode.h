//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface TFSHTMLNode : NSObject
{
    NSString *_tagName;
    NSString *_content;
    struct _xmlNode *_xmlNode;
    TFSHTMLNode *_parent;
}

+ (id)rootNodeForHTML:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) TFSHTMLNode *parent; // @synthesize parent=_parent;
@property(readonly, nonatomic) struct _xmlNode *xmlNode; // @synthesize xmlNode=_xmlNode;
@property(readonly, nonatomic) NSString *content; // @synthesize content=_content;
- (id)descendantWithTag:(id)arg1;
@property(readonly, nonatomic) NSArray *children;
- (id)attributeNamed:(id)arg1;
- (_Bool)isTagNamed:(id)arg1;
@property(readonly, nonatomic) NSString *tagName; // @synthesize tagName=_tagName;
- (void)dealloc;
- (id)initWithXMLNode:(struct _xmlNode *)arg1 parentNode:(id)arg2;

@end

