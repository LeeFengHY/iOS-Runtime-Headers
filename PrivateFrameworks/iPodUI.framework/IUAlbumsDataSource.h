/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@interface IUAlbumsDataSource : IUMediaQueriesDataSource {
}

+ (int)mediaEntityType;
+ (id)queryCollectionPropertiesToFetch;
+ (id)tabBarItemIconName;
+ (id)tabBarItemTitleKey;

- (BOOL)allowsDeletion;
- (BOOL)allowsDownloadingAllEntities;
- (Class)cellConfigurationClassForEntity:(id)arg1;
- (BOOL)deleteRemovesEntireGroup;
- (SEL)libraryHasDisplayableEntitiesSelector;
- (unsigned int)requiredEntityCountForSections;
- (id)viewControllerContextForIndex:(unsigned int)arg1;
- (id)viewControllerContextForMediaQuery:(id)arg1;

@end