//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <T1Twitter/T1TimelineMessageEntryTableRowAdapter.h>

@protocol T1TimelineMessageEntryTableRowAdapterDelegate;

@interface ONBTimelineMessageEntryTableRowAdapter : T1TimelineMessageEntryTableRowAdapter
{
    id <T1TimelineMessageEntryTableRowAdapterDelegate> _originalMessageEntryAdapterDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <T1TimelineMessageEntryTableRowAdapterDelegate> originalMessageEntryAdapterDelegate; // @synthesize originalMessageEntryAdapterDelegate=_originalMessageEntryAdapterDelegate;
- (void)adapterWasUsedByURTViewController:(id)arg1;

@end

