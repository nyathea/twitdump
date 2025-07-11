//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSIndexPath, TFSDisplayLink;

@interface TFNScrollingAnimationState : NSObject
{
    TFSDisplayLink *_displayLink;
    CDUnknownBlockType _destination;
    CDUnknownBlockType _completion;
    NSIndexPath *_startIndexPath;
    double _startTime;
    double _duration;
    struct CGPoint _startContentOffset;
    struct CGPoint _startCellOffset;
}

- (void).cxx_destruct;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) struct CGPoint startCellOffset; // @synthesize startCellOffset=_startCellOffset;
@property(retain, nonatomic) NSIndexPath *startIndexPath; // @synthesize startIndexPath=_startIndexPath;
@property(nonatomic) struct CGPoint startContentOffset; // @synthesize startContentOffset=_startContentOffset;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(copy, nonatomic) CDUnknownBlockType destination; // @synthesize destination=_destination;
@property(retain, nonatomic) TFSDisplayLink *displayLink; // @synthesize displayLink=_displayLink;

@end

