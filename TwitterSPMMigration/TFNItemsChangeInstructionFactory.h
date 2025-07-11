//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSCountedSet, NSIndexSet, NSMutableArray;

@interface TFNItemsChangeInstructionFactory : NSObject
{
    NSArray *_fromSections;
    NSArray *_toSections;
    NSIndexSet *_changedSectionIndexes;
    NSMutableArray *_sectionDeletionInstructions;
    NSMutableArray *_sectionInsertionInstructions;
    NSMutableArray *_sectionUpdateInstructions;
    NSCountedSet *_canonicalItemCountsInToSections;
    NSCountedSet *_canonicalItemCountsInFromSections;
}

- (void).cxx_destruct;
- (id)_tfn_canonicalizedSections:(id)arg1;
- (id)_tfn_itemCountsInSections:(id)arg1;
- (id)_tfn_sectionIndexesForInstructions:(id)arg1;
- (id)_tfn_unchangedFromSectionIndexesFromCanonicalizedSectionsDeduped:(id)arg1 toCanonicalizedSectionsDeduped:(id)arg2;
- (id)_tfn_unchangedToSectionIndexesFromCanonicalizedSectionsDeduped:(id)arg1 toCanonicalizedSectionsDeduped:(id)arg2;
- (id)_tfn_changedSectionIndexesFromCanonicalizedSectionsDeduped:(id)arg1 toCanonicalizedSectionsDeduped:(id)arg2;
- (id)_tfn_itemAtIndexPath:(id)arg1 inSections:(id)arg2;
- (id)_tfn_arrayDedupedWithinSections:(id)arg1;
- (id)_tfn_sectionsByCopyingSections:(id)arg1;
- (id)_tfn_sectionChangeInstructionWithSections:(id)arg1 index:(unsigned long long)arg2 changeType:(unsigned long long)arg3;
- (_Bool)_tfn_itemIsDeleted:(id)arg1;
- (_Bool)_tfn_itemIsInserted:(id)arg1;
- (void)_tfn_shiftItemUpdateInstructions:(id)arg1 insertedItemIndexes:(id)arg2 deletedItemIndexes:(id)arg3;
- (void)_tfn_shiftUpdateInstructions:(id)arg1 insertedSectionIndexes:(id)arg2 deletedSectionsIndexes:(id)arg3;
- (void)_tfn_shiftDeletionInstructions:(id)arg1 insertedSectionIndexes:(id)arg2 deletedSectionsIndexes:(id)arg3;
- (void)_tfn_resolveDependenciesInInstructions:(id)arg1 excludedInstructions:(id)arg2 itemDeletionInstructions:(id)arg3 itemInsertionInstructions:(id)arg4 sectionDeletionInstructions:(id)arg5 sectionInsertionInstructions:(id)arg6;
- (id)_tfn_batchInstructions:(id)arg1 excludedInstructions:(id)arg2;
- (id)batchedInstructionsWithFilter:(CDUnknownBlockType)arg1;
- (void)_tfn_emitSectionUpdateInstructionsForChangedSectionsWithInstructions:(id)arg1 fromSections:(id)arg2 toSections:(id)arg3 intoInstructions:(id)arg4;
- (id)_tfn_unchangedItemIndexesWithInstructions:(id)arg1 fromSections:(id)arg2 toSections:(id)arg3;
- (void)_tfn_emitSectionInsertionInstructionsForNewSectionsWithInstructions:(id)arg1 intoInstructions:(id)arg2 fromCanonicalizedSectionsDeduped:(id)arg3 toCanonicalizedSectionsDeduped:(id)arg4;
- (void)_tfn_emitSectionDeletionInstructionsForDeletedItemsInstructions:(id)arg1 intoInstructions:(id)arg2 fromCanonicalizedSectionsDeduped:(id)arg3 toCanonicalizedSectionsDeduped:(id)arg4;
- (void)_tfn_emitItemInstructionsIntoInstructions:(id)arg1 fromSections:(id)arg2 toSections:(id)arg3;
- (id)instructions;
- (id)initWithFromSections:(id)arg1 toSections:(id)arg2;

@end

