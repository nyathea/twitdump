//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSDictionary, NSMutableArray, NSMutableSet, NSNumber, NSSet, NSString, NSValue, TFNTwitterCompositionCardPreview, TFNTwitterCompositionOriginatorStatusInfo, TFNTwitterCompositionPollingCard, TFNTwitterCompositionQuotedStatusInfo, TFNTwitterCompositionReplyChain, TFNTwitterCompositionReplyChainScribeDetails, TFNTwitterCompositionReplyEntryPointScribeValue, TFNTwitterCompositionReplyStatusInfo, TFSTweetTextCounter, TFSTwitterCommunityReference, TFSTwitterCompositionNudge, TFSTwitterGeotag, TFSTwitterTagSet, TFSTwitterUserReference, TFSTwitterVideoMonetizationSettings, TTMAsset;

@interface TFNTwitterComposition : NSObject
{
    NSMutableArray *_attachments;
    _Bool _isHeadOfReplystorm;
    _Bool _isDraft;
    _Bool _hadFailedSend;
    _Bool _shouldBroadcastToFollowers;
    _Bool _periscopeIsLive;
    _Bool _spaceEntity;
    _Bool _isTweetWithBoost;
    _Bool _referencingAdPreviewTweet;
    _Bool _hasCheckedForNudge;
    _Bool _didFailLastSendFromNudge;
    _Bool _shouldScribeRetweetWithCommentForArticleNudge;
    _Bool _didUndoTweetSent;
    _Bool _isUndoable;
    _Bool _openedFromDraft;
    NSString *_uniqueID;
    unsigned long long _textDefaultLength;
    TFSTwitterCommunityReference *_communityReference;
    long long _exclusiveTweetControlType;
    NSString *_placeID;
    TFSTwitterUserReference *_replyToUserReference;
    NSArray *_initiallyMentionedUsers;
    TFNTwitterCompositionReplyStatusInfo *_replyToStatusInfo;
    TFNTwitterCompositionQuotedStatusInfo *_quotedStatusInfo;
    TFNTwitterCompositionOriginatorStatusInfo *_originatorStatusInfo;
    TFNTwitterCompositionReplyChainScribeDetails *_replyChainScribeDetails;
    TFSTwitterGeotag *_geotag;
    NSDate *_createdDate;
    NSDate *_draftsAddedDate;
    NSDate *_undoableAddedDate;
    NSDate *_outboxAddedDate;
    NSDate *_retryExpiration;
    long long _draftType;
    NSArray *_excludedReplyUserIDs;
    NSString *_text;
    NSString *_validDisplayText;
    TFSTwitterTagSet *_tagSet;
    NSDictionary *_extraScribeParameters;
    NSDictionary *_mediaScribeParameters;
    TFNTwitterCompositionCardPreview *_cardPreview;
    TFNTwitterCompositionPollingCard *_pollingCard;
    TFSTwitterVideoMonetizationSettings *_videoMonetizationSettings;
    NSString *_periscopeBroadcastID;
    NSString *_periscopeCreatorID;
    NSNumber *_videoReactToStatusID;
    NSString *_inReplyToSpaceID;
    unsigned long long _conversationControlType;
    NSDictionary *_engagementMetadata;
    NSArray *_richTextTags;
    TFNTwitterCompositionReplyEntryPointScribeValue *_replyEntryPointScribeValue;
    TFNTwitterCompositionReplyChain *_replyChain;
    NSString *_replyChainUniqueID;
    long long _positionWithinReplyChain;
    TFSTwitterCompositionNudge *_compositionNudge;
    NSString *_compositionNudgeID;
    NSString *_compositionUndoTweetSentNudgeID;
    NSDictionary *_articleNudgeScribeParameters;
    double _undoTimeInterval;
    long long _didUndoCount;
    NSNumber *_previousTweetIdNumber;
    NSDate *_editableUntilDate;
    NSNumber *_editsRemainingNumber;
    TFSTweetTextCounter *_tweetTextCounter;
    NSMutableSet *_mutableSemanticAnnotationIds;
    NSValue *_initialSelectedRangeValue;
    NSString *_initialText;
}

+ (id)userReferencesForReplyToStatus:(id)arg1 account:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *initialText; // @synthesize initialText=_initialText;
@property(retain, nonatomic) NSValue *initialSelectedRangeValue; // @synthesize initialSelectedRangeValue=_initialSelectedRangeValue;
@property(retain, nonatomic) NSMutableSet *mutableSemanticAnnotationIds; // @synthesize mutableSemanticAnnotationIds=_mutableSemanticAnnotationIds;
@property(retain, nonatomic) TFSTweetTextCounter *tweetTextCounter; // @synthesize tweetTextCounter=_tweetTextCounter;
@property(retain, nonatomic) NSNumber *editsRemainingNumber; // @synthesize editsRemainingNumber=_editsRemainingNumber;
@property(retain, nonatomic) NSDate *editableUntilDate; // @synthesize editableUntilDate=_editableUntilDate;
@property(retain, nonatomic) NSNumber *previousTweetIdNumber; // @synthesize previousTweetIdNumber=_previousTweetIdNumber;
@property(nonatomic) _Bool openedFromDraft; // @synthesize openedFromDraft=_openedFromDraft;
@property(nonatomic) long long didUndoCount; // @synthesize didUndoCount=_didUndoCount;
@property(nonatomic) double undoTimeInterval; // @synthesize undoTimeInterval=_undoTimeInterval;
@property(nonatomic) _Bool isUndoable; // @synthesize isUndoable=_isUndoable;
@property(nonatomic) _Bool didUndoTweetSent; // @synthesize didUndoTweetSent=_didUndoTweetSent;
@property(retain, nonatomic) NSDictionary *articleNudgeScribeParameters; // @synthesize articleNudgeScribeParameters=_articleNudgeScribeParameters;
@property(nonatomic) _Bool shouldScribeRetweetWithCommentForArticleNudge; // @synthesize shouldScribeRetweetWithCommentForArticleNudge=_shouldScribeRetweetWithCommentForArticleNudge;
@property(copy, nonatomic) NSString *compositionUndoTweetSentNudgeID; // @synthesize compositionUndoTweetSentNudgeID=_compositionUndoTweetSentNudgeID;
@property(copy, nonatomic) NSString *compositionNudgeID; // @synthesize compositionNudgeID=_compositionNudgeID;
@property(nonatomic) _Bool didFailLastSendFromNudge; // @synthesize didFailLastSendFromNudge=_didFailLastSendFromNudge;
@property(nonatomic) _Bool hasCheckedForNudge; // @synthesize hasCheckedForNudge=_hasCheckedForNudge;
@property(retain, nonatomic) TFSTwitterCompositionNudge *compositionNudge; // @synthesize compositionNudge=_compositionNudge;
@property(nonatomic) long long positionWithinReplyChain; // @synthesize positionWithinReplyChain=_positionWithinReplyChain;
@property(copy, nonatomic) NSString *replyChainUniqueID; // @synthesize replyChainUniqueID=_replyChainUniqueID;
@property(retain, nonatomic) TFNTwitterCompositionReplyChain *replyChain; // @synthesize replyChain=_replyChain;
@property(nonatomic, getter=isReferencingAdPreviewTweet) _Bool referencingAdPreviewTweet; // @synthesize referencingAdPreviewTweet=_referencingAdPreviewTweet;
@property(retain, nonatomic) TFNTwitterCompositionReplyEntryPointScribeValue *replyEntryPointScribeValue; // @synthesize replyEntryPointScribeValue=_replyEntryPointScribeValue;
@property(copy, nonatomic) NSArray *richTextTags; // @synthesize richTextTags=_richTextTags;
@property(copy, nonatomic) NSDictionary *engagementMetadata; // @synthesize engagementMetadata=_engagementMetadata;
@property(nonatomic) unsigned long long conversationControlType; // @synthesize conversationControlType=_conversationControlType;
@property(nonatomic) _Bool isTweetWithBoost; // @synthesize isTweetWithBoost=_isTweetWithBoost;
@property(copy, nonatomic) NSString *inReplyToSpaceID; // @synthesize inReplyToSpaceID=_inReplyToSpaceID;
@property(nonatomic, getter=isSpaceEntity) _Bool spaceEntity; // @synthesize spaceEntity=_spaceEntity;
@property(copy, nonatomic) NSNumber *videoReactToStatusID; // @synthesize videoReactToStatusID=_videoReactToStatusID;
@property(nonatomic) _Bool periscopeIsLive; // @synthesize periscopeIsLive=_periscopeIsLive;
@property(copy, nonatomic) NSString *periscopeCreatorID; // @synthesize periscopeCreatorID=_periscopeCreatorID;
@property(copy, nonatomic) NSString *periscopeBroadcastID; // @synthesize periscopeBroadcastID=_periscopeBroadcastID;
@property(retain, nonatomic) TFSTwitterVideoMonetizationSettings *videoMonetizationSettings; // @synthesize videoMonetizationSettings=_videoMonetizationSettings;
@property(retain, nonatomic) TFNTwitterCompositionPollingCard *pollingCard; // @synthesize pollingCard=_pollingCard;
@property(retain, nonatomic) TFNTwitterCompositionCardPreview *cardPreview; // @synthesize cardPreview=_cardPreview;
@property(copy, nonatomic) NSDictionary *mediaScribeParameters; // @synthesize mediaScribeParameters=_mediaScribeParameters;
@property(copy, nonatomic) NSDictionary *extraScribeParameters; // @synthesize extraScribeParameters=_extraScribeParameters;
@property(retain, nonatomic) TFSTwitterTagSet *tagSet; // @synthesize tagSet=_tagSet;
@property(readonly, nonatomic) NSString *validDisplayText; // @synthesize validDisplayText=_validDisplayText;
@property(nonatomic) _Bool shouldBroadcastToFollowers; // @synthesize shouldBroadcastToFollowers=_shouldBroadcastToFollowers;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(copy, nonatomic) NSArray *excludedReplyUserIDs; // @synthesize excludedReplyUserIDs=_excludedReplyUserIDs;
@property(nonatomic) _Bool hadFailedSend; // @synthesize hadFailedSend=_hadFailedSend;
@property(nonatomic) long long draftType; // @synthesize draftType=_draftType;
@property(nonatomic) _Bool isDraft; // @synthesize isDraft=_isDraft;
@property(retain, nonatomic) NSDate *retryExpiration; // @synthesize retryExpiration=_retryExpiration;
@property(retain, nonatomic) NSDate *outboxAddedDate; // @synthesize outboxAddedDate=_outboxAddedDate;
@property(retain, nonatomic) NSDate *undoableAddedDate; // @synthesize undoableAddedDate=_undoableAddedDate;
@property(retain, nonatomic) NSDate *draftsAddedDate; // @synthesize draftsAddedDate=_draftsAddedDate;
@property(retain, nonatomic) NSDate *createdDate; // @synthesize createdDate=_createdDate;
@property(retain, nonatomic) TFSTwitterGeotag *geotag; // @synthesize geotag=_geotag;
@property(retain, nonatomic) TFNTwitterCompositionReplyChainScribeDetails *replyChainScribeDetails; // @synthesize replyChainScribeDetails=_replyChainScribeDetails;
@property(retain, nonatomic) TFNTwitterCompositionOriginatorStatusInfo *originatorStatusInfo; // @synthesize originatorStatusInfo=_originatorStatusInfo;
@property(retain, nonatomic) TFNTwitterCompositionQuotedStatusInfo *quotedStatusInfo; // @synthesize quotedStatusInfo=_quotedStatusInfo;
@property(nonatomic) _Bool isHeadOfReplystorm; // @synthesize isHeadOfReplystorm=_isHeadOfReplystorm;
@property(retain, nonatomic) TFNTwitterCompositionReplyStatusInfo *replyToStatusInfo; // @synthesize replyToStatusInfo=_replyToStatusInfo;
@property(readonly, nonatomic) NSArray *initiallyMentionedUsers; // @synthesize initiallyMentionedUsers=_initiallyMentionedUsers;
@property(retain, nonatomic) TFSTwitterUserReference *replyToUserReference; // @synthesize replyToUserReference=_replyToUserReference;
@property(copy, nonatomic) NSString *placeID; // @synthesize placeID=_placeID;
@property(nonatomic) long long exclusiveTweetControlType; // @synthesize exclusiveTweetControlType=_exclusiveTweetControlType;
@property(retain, nonatomic) TFSTwitterCommunityReference *communityReference; // @synthesize communityReference=_communityReference;
@property(nonatomic) unsigned long long textDefaultLength; // @synthesize textDefaultLength=_textDefaultLength;
@property(readonly, nonatomic) NSString *uniqueID; // @synthesize uniqueID=_uniqueID;
@property(readonly, copy, nonatomic) NSString *localizedDropIndicationTooManyVideos;
@property(readonly, copy, nonatomic) NSString *localizedDropIndicationTooManyImages;
@property(readonly, copy, nonatomic) NSString *localizedDropIndicationTooManyGIFs;
@property(readonly, copy, nonatomic) NSString *localizedDropIndicationMixedMedia;
@property(readonly, copy, nonatomic) NSString *localizedDropIndicationVideos;
@property(readonly, copy, nonatomic) NSString *localizedDropIndicationURL;
@property(readonly, copy, nonatomic) NSString *localizedDropIndicationText;
@property(readonly, copy, nonatomic) NSString *localizedDropIndicationStatus;
@property(readonly, copy, nonatomic) NSString *localizedDropIndicationImages;
@property(readonly, copy, nonatomic) NSString *localizedDropIndicationGIFs;
- (_Bool)canDropAnimatedGIFsCount:(unsigned long long)arg1;
- (_Bool)canDropVideosCount:(unsigned long long)arg1;
- (_Bool)canDropImagesCount:(unsigned long long)arg1;
- (_Bool)canAddPoll;
- (_Bool)_tfn_canAddPollOrNonImageAttachment;
- (_Bool)canAddImageAttachment;
- (_Bool)canAddQuoteTweet;
- (id)voiceRecordingAttachment;
- (_Bool)hasVoiceRecordingAttachment;
- (unsigned long long)attachmentsCountWithType:(unsigned long long)arg1;
@property(readonly, nonatomic) NSArray *videoAttachments;
@property(readonly, nonatomic) _Bool hasVideoAttachments;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

- (_Bool)hasVideoCaptureAttachments;
- (_Bool)hasLivePhotoAttachments;
@property(readonly, nonatomic) _Bool hasAnimatedImageAttachments;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

- (_Bool)hasVideoImportAttachments;
- (_Bool)hasPeopleTaggableAttachments:(_Bool)arg1;
- (_Bool)hasPeopleTaggableAttachments;
@property(readonly, nonatomic) _Bool hasImageOrGIFAttachments;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

- (_Bool)hasOnlyStillImageAttachments;
@property(readonly, nonatomic) _Bool hasAttachments;
@property(readonly, nonatomic) unsigned long long maxNumberOfPhotos;
@property(readonly, nonatomic) NSArray *imageAttachments;
@property(readonly, nonatomic) TTMAsset *primaryImageAttachment;
@property(readonly, nonatomic) NSString *attachmentURL;
- (_Bool)isReplyUserReferenceExcludable:(id)arg1;
@property(readonly, nonatomic, getter=isTextOnly) _Bool textOnly;
- (void)scribeSendWithScribe:(id)arg1;
- (id)_tfn_scribeParameterForTweet;
- (id)_tfn_scribeItemForTweet;
- (id)scribeParameters;
@property(readonly, nonatomic) NSString *scribePage;
@property(nonatomic) struct _NSRange initialSelectedRange;
- (id)accessibilityText;
- (id)textWithAttachment;
- (_Bool)_tfn_containsMoreThanWhitespace;
- (_Bool)isTextEdited;
- (_Bool)isWorthSending;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)hasEmptyText;
- (_Bool)isWorthSavingLegacy;
- (_Bool)isWorthSaving;
@property(readonly, nonatomic) struct _NSRange redRange;
@property(readonly, nonatomic) struct _NSRange transparentRange;
- (long long)remainingCharactersWithInputLocaleIdentifier:(id)arg1;
@property(readonly, nonatomic) long long remainingCharacters;
@property(readonly, nonatomic) long long indexOfFirstOverflowCharacter;
@property(readonly, nonatomic) unsigned long long characterCount;
@property(readonly, copy, nonatomic) NSString *textForCharacterCount;
@property(readonly, nonatomic) _Bool editingExistingTweet;
- (void)_tfn_updateExclusiveTweetControlsFromReplyToStatusInfo;
- (void)_tfn_updateCommunityReferenceFromReplyToStatusInfo;
@property(readonly, nonatomic) _Bool canChangeConversationControlType;
@property(readonly, nonatomic, getter=isLongform) _Bool longform;
@property(readonly, nonatomic) _Bool isBeyondCharacterLimit;
@property(readonly, nonatomic) NSDate *undoableSendDate;
- (long long)_tfn_secureLinkLength;
- (_Bool)isSelfThreadReplyFromUserID:(long long)arg1;
@property(readonly, nonatomic) NSNumber *replyToStatusIDNumber;
@property(readonly, nonatomic, getter=isReply) _Bool reply;
@property(readonly, nonatomic) _Bool hasPoll;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

@property(readonly, nonatomic, getter=isQuotedStatusAllowed) _Bool quotedStatusAllowed;
@property(readonly, nonatomic, getter=isCardPreviewAllowed) _Bool cardPreviewAllowed;
@property(readonly, nonatomic) _Bool hasCardPreview;
@property(readonly, nonatomic) NSString *commaSeparatedSemanticAnnotationIds;
@property(readonly, nonatomic, getter=isGeotagged) _Bool geotagged;
- (void)_tfn_cleanupAsset:(id)arg1;
@property(readonly, nonatomic) NSSet *semanticAnnotationIds;
- (void)removeAllSemanticAnnotationIds;
- (void)removeSemanticAnnotationIds:(id)arg1;
- (void)addSemanticAnnotationIds:(id)arg1;
- (void)removeAllAttachments;
- (void)removeAttachment:(id)arg1;
- (void)replaceAttachment:(id)arg1 withAttachment:(id)arg2;
- (void)addAttachment:(id)arg1;
- (id)attachmentForAssetReferencedFromAttachment:(id)arg1;
@property(copy, nonatomic) NSArray *attachments;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)_tfn_twitterComposition_initialize;
- (id)initWithCoder:(id)arg1;
- (id)initWithInitialText:(id)arg1 mentionedUsers:(id)arg2;
- (id)init;
- (id)statusesUpdateParametersForAccount:(id)arg1;
- (id)_tfn_engagementMetadataParameter;
- (id)_tfn_cardURIParameter;
- (id)_tfn_mediaTagsParameter;
- (id)_tfn_mediaTagsDictionary;
- (id)_tfn_mediaIDsParameter;
- (id)_tfn_geoSearchRequestIDParameter;
- (unsigned long long)_tfn_conversationControlParameter;
- (id)_tfn_geotaggingModeParameter;
- (id)_tfn_placeIDParameter;
- (id)orderedUserReferencesForReplyFromAccount:(id)arg1;
- (id)initialMentionUserIDs;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) Class superclass;

@end

