/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class NSMutableIndexSet;

@interface PLImportSessionInfo : NSObject {
    BOOL _importComplete;
    NSMutableIndexSet *_importCompleteIndexes;
    NSMutableIndexSet *_importErrorIndexes;
    NSMutableIndexSet *_importInProgressIndexes;
    NSMutableIndexSet *_importIndexes;
    BOOL _importingSelection;
}

@property(readonly) NSIndexSet *completedIndexes;
@property(readonly) NSIndexSet *errorIndexes;
@property(readonly) NSIndexSet *importIndexes;
@property(readonly) NSIndexSet *inProgressIndexes;
@property BOOL importComplete;
@property BOOL importingSelection;

- (BOOL)_isImportCompleteForIndex:(NSUInteger)arg1;
- (void)addIndexToImport:(NSUInteger)arg1;
- (void)beginImportForIndex:(NSUInteger)arg1;
- (void)completeImportForIndex:(NSUInteger)arg1 error:(BOOL)arg2;
- (id)completedIndexes;
- (void)dealloc;
- (id)errorIndexes;
- (BOOL)importComplete;
- (id)importIndexes;
- (BOOL)importingSelection;
- (id)inProgressIndexes;
- (id)initWithImportIndexes:(id)arg1;
- (void)removeIndex:(NSUInteger)arg1;
- (void)setImportComplete:(BOOL)arg1;
- (void)setImportingSelection:(BOOL)arg1;
- (void)shiftIndexesStartingAtIndex:(NSUInteger)arg1 by:(NSUInteger)arg2;

@end