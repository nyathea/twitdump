//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TwitterAppSPMMigration/NSObject-Protocol.h>

@class UIContextMenuConfiguration, UIContextMenuInteraction, UITargetedPreview;
@protocol NSCopying, UIContextMenuInteractionAnimating, UIContextMenuInteractionCommitAnimating;

@protocol UIContextMenuInteractionDelegate <NSObject>
- (UIContextMenuConfiguration *)contextMenuInteraction:(UIContextMenuInteraction *)arg1 configurationForMenuAtLocation:(struct CGPoint)arg2;

@optional
- (UITargetedPreview *)contextMenuInteraction:(UIContextMenuInteraction *)arg1 previewForDismissingMenuWithConfiguration:(UIContextMenuConfiguration *)arg2;
- (UITargetedPreview *)contextMenuInteraction:(UIContextMenuInteraction *)arg1 previewForHighlightingMenuWithConfiguration:(UIContextMenuConfiguration *)arg2;
- (void)contextMenuInteraction:(UIContextMenuInteraction *)arg1 willEndForConfiguration:(UIContextMenuConfiguration *)arg2 animator:(id <UIContextMenuInteractionAnimating>)arg3;
- (void)contextMenuInteraction:(UIContextMenuInteraction *)arg1 willDisplayMenuForConfiguration:(UIContextMenuConfiguration *)arg2 animator:(id <UIContextMenuInteractionAnimating>)arg3;
- (void)contextMenuInteraction:(UIContextMenuInteraction *)arg1 willPerformPreviewActionForMenuWithConfiguration:(UIContextMenuConfiguration *)arg2 animator:(id <UIContextMenuInteractionCommitAnimating>)arg3;
- (UITargetedPreview *)contextMenuInteraction:(UIContextMenuInteraction *)arg1 configuration:(UIContextMenuConfiguration *)arg2 dismissalPreviewForItemWithIdentifier:(id <NSCopying>)arg3;
- (UITargetedPreview *)contextMenuInteraction:(UIContextMenuInteraction *)arg1 configuration:(UIContextMenuConfiguration *)arg2 highlightPreviewForItemWithIdentifier:(id <NSCopying>)arg3;
@end

