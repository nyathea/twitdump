//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString, TFSTwitterEditControlEdit, TFSTwitterEditControlInitial;

@interface TFSTwitterEditControl : NSObject
{
    MISSING_TYPE *wrapped;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithInitialTweet:(id)arg1;
- (id)initWithEditedTweets:(id)arg1;
@property(nonatomic, readonly) TFSTwitterEditControlInitial *initial;
@property(nonatomic, readonly) TFSTwitterEditControlEdit *edit;
@property(nonatomic, readonly) NSString *description;
- (_Bool)isEqual:(id)arg1;
@property(nonatomic, readonly) long long hash;
- (id)copyWithZone:(void *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

