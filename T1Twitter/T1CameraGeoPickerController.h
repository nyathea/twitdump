//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TwitterSPMMigration/TFNViewController.h>

@class MISSING_TYPE, NSArray, TFSTwitterLocation, TFSTwitterPlace, UIScrollView;
@protocol T1CameraGeoPickerControllerDelegate;

@interface T1CameraGeoPickerController : TFNViewController
{
    MISSING_TYPE *defaultPlace;
    MISSING_TYPE *targetLocation;
    MISSING_TYPE *places;
    MISSING_TYPE *placesAttribution;
    MISSING_TYPE *cameraGeoPickerControllerDelegate;
    MISSING_TYPE *tableView;
    MISSING_TYPE *tableViewDataSource;
    MISSING_TYPE *noLocationsView;
    MISSING_TYPE *entryPointView;
    MISSING_TYPE *selectedPlace;
    MISSING_TYPE *selectedLocation;
    MISSING_TYPE *selectionState;
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
@property(nonatomic, readonly) UIScrollView *tfn_contentScrollView;
- (void)selectWithItem:(id)arg1;
- (id)createEntryPointButton;
- (void)retryButtonTappedWithSender:(id)arg1;
- (long long)preferredSelectionState;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;
- (id)init;
@property(nonatomic, retain) TFSTwitterLocation *selectedLocation; // @synthesize selectedLocation;
@property(nonatomic, retain) TFSTwitterPlace *selectedPlace; // @synthesize selectedPlace;
@property(nonatomic) __weak id <T1CameraGeoPickerControllerDelegate> cameraGeoPickerControllerDelegate; // @synthesize cameraGeoPickerControllerDelegate;
@property(nonatomic, copy) NSArray *placesAttribution;
@property(nonatomic, copy) NSArray *places;
@property(nonatomic, retain) TFSTwitterLocation *targetLocation; // @synthesize targetLocation;
@property(nonatomic, retain) TFSTwitterPlace *defaultPlace; // @synthesize defaultPlace;

@end

