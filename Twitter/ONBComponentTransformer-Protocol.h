//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSArray, NSNumber, OCFMutableComponent, OCFRichText, TFNActivityIndicatorButton, TFNDataViewItem, TFNTwitterAccount, UIView;
@protocol ONBComponentTransformerControllerDelegate, ONBComponentTransformerDelegate;

@protocol ONBComponentTransformer <NSObject>
+ (id)alloc;
+ (Class)mutableComponentClass;
@property(nonatomic) _Bool shouldDisplayCellBorder;
@property(nonatomic) __weak id <ONBComponentTransformerControllerDelegate> controllerDelegate;
@property(nonatomic) __weak id <ONBComponentTransformerDelegate> delegate;
- (id)initWithAccount:(TFNTwitterAccount *)arg1 mutableComponent:(OCFMutableComponent *)arg2;
- (OCFMutableComponent *)mutableComponent;
- (_Bool)updateVisibility:(_Bool)arg1;
- (_Bool)updateNumberValue:(NSNumber *)arg1;
- (_Bool)updateRichText:(OCFRichText *)arg1;
- (TFNActivityIndicatorButton *)embeddedButton;
- (NSArray *)detailTextDataViewItems;
- (TFNDataViewItem *)dataViewItem;
- (UIView *)barButtonComponentView;
- (UIView *)detailTextComponentView;
- (UIView *)componentView;
- (OCFRichText *)detailText;
@end

