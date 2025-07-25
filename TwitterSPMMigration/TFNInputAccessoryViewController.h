//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIInputViewController.h>

@class TFNInputAccessoryControllerView, UIView;
@protocol TFNInputAccessoryViewControllerDelegate;

@interface TFNInputAccessoryViewController : UIInputViewController
{
    id <TFNInputAccessoryViewControllerDelegate> _delegate;
    double _accessoryHeight;
    UIView *_hostView;
}

+ (_Bool)debugOutlinesEnabled;
+ (void)setDebugOutlinesEnabled:(_Bool)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *hostView; // @synthesize hostView=_hostView;
@property(nonatomic) double accessoryHeight; // @synthesize accessoryHeight=_accessoryHeight;
@property(nonatomic) __weak id <TFNInputAccessoryViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)_tfn_main_hostViewDidChangeCenter;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_tfn_main_updateViewIntrinsicContentSize;
- (void)dealloc;

// Remaining properties
@property(retain, nonatomic) TFNInputAccessoryControllerView *view; // @dynamic view;

@end

