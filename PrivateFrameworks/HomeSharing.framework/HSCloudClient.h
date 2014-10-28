/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class HSConnectionConfiguration, NSMutableSet, NSObject<OS_dispatch_queue>, NSString, NSXPCConnection;

@interface HSCloudClient : NSObject <HSCloudAvailability> {
    BOOL _active;
    HSConnectionConfiguration *_configuration;
    unsigned long long _daemonConfiguration;
    NSMutableSet *_knownArtworkIDs;
    NSObject<OS_dispatch_queue> *_knownArtworkIDsQueue;
    NSXPCConnection *_nsxpcConnection;
    NSMutableSet *_pendingArtworkRequests;
    NSObject<OS_dispatch_queue> *_pendingArtworkRequestsQueue;
    long long _preferredVideoQuality;
    id _updateInProgressChangedHandler;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;
@property(copy) id updateInProgressChangedHandler;

- (void).cxx_destruct;
- (void)_sendConfigurationToDaemon;
- (void)_serverDidLaunch;
- (void)_serverUpdateInProgressDidChange;
- (void)addGeniusPlaylistWithName:(id)arg1 seedItemSagaIDs:(id)arg2 itemSagaIDs:(id)arg3 completionHandler:(id)arg4;
- (void)addPlaylistWithName:(id)arg1 completionHandler:(id)arg2;
- (void)authenticateAndStartInitialImport:(BOOL)arg1 completionHandler:(id)arg2;
- (void)authenticateWithCompletionHandler:(id)arg1;
- (void)becomeActive;
- (BOOL)canShowCloudDownloadButtons;
- (BOOL)canShowCloudMusic;
- (BOOL)canShowCloudVideo;
- (void)cancelUpdateJaliscoGeniusDataInProgressWithCompletionHandler:(id)arg1;
- (id)connection;
- (void)dealloc;
- (void)deauthenticateWithCompletionHandler:(id)arg1;
- (void)disableJaliscoGeniusWithCompletionHandler:(id)arg1;
- (void)downloadGeniusDataWithCompletionHandler:(id)arg1;
- (void)enableJaliscoGeniusWithCompletionHandler:(id)arg1;
- (void)fetchKeepLocalForCollectionWithPersistentID:(long long)arg1 groupingType:(int)arg2 completionHandler:(id)arg3;
- (BOOL)hasProperNetworkConditionsToPlayMedia;
- (void)importItemArtworkForPurchaseHistoryID:(unsigned long long)arg1 completionHandler:(id)arg2;
- (void)importItemArtworkForSagaID:(unsigned long long)arg1 completionHandler:(id)arg2;
- (void)importScreenshotForPurchaseHistoryID:(unsigned long long)arg1 completionHandler:(id)arg2;
- (void)incrementItemProperty:(id)arg1 forSagaID:(unsigned long long)arg2;
- (id)init;
- (id)initWithConfiguration:(id)arg1;
- (void)isAuthenticatedWithCompletionHandler:(id)arg1;
- (void)isAuthenticatedWithQueue:(id)arg1 completionHandler:(id)arg2;
- (BOOL)isCellularDataRestricted;
- (void)isExpiredWithCompletionHandler:(id)arg1;
- (void)jaliscoAppsImageDataForStoreID:(id)arg1 completionHandler:(id)arg2;
- (void)loadArtworkDataForPurchaseHistoryIDs:(id)arg1 completionHandler:(id)arg2;
- (void)loadArtworkDataForSagaID:(unsigned long long)arg1 completionHandler:(id)arg2;
- (void)loadArtworkInfoForPurchaseHistoryIDs:(id)arg1 completionHandler:(id)arg2;
- (void)loadArtworkInfoForSagaIDs:(id)arg1 completionHandler:(id)arg2;
- (void)loadBooksForStoreIDs:(id)arg1 withCompletionHandler:(id)arg2;
- (void)loadGeniusItemsForSagaID:(unsigned long long)arg1 completionHandler:(id)arg2;
- (void)loadIsJaliscoGeniusSupportedWithCompletionHandler:(id)arg1;
- (void)loadIsUpdateInProgressWithCompletionHandler:(id)arg1;
- (void)loadJaliscoGeniusCUIDWithCompletionHandler:(id)arg1;
- (void)loadJaliscoGeniusLearnMoreURLWithCompletionHandler:(id)arg1;
- (void)loadJaliscoGeniusOperationStatusWithCompletionHandler:(id)arg1;
- (void)loadUpdateProgressWithCompletionHandler:(id)arg1;
- (void)redownloadPurchaseAppWithStoreID:(id)arg1 completionHandler:(id)arg2;
- (void)removeJaliscoLibrary;
- (void)removePlaylistWithSagaID:(unsigned long long)arg1 completionHandler:(id)arg2;
- (void)resetConfiguration:(id)arg1;
- (void)resignActive;
- (void)searchJaliscoAppsLibrary:(id)arg1 searchMethod:(long long)arg2 completionHandler:(id)arg3;
- (void)setDaemonConfiguration:(unsigned long long)arg1;
- (void)setHidden:(BOOL)arg1 purchasedAppWithStoreID:(id)arg2 completionHandler:(id)arg3;
- (void)setItemProperties:(id)arg1 forPurchaseHistoryID:(unsigned long long)arg2;
- (void)setItemProperties:(id)arg1 forSagaID:(unsigned long long)arg2;
- (void)setJaliscoGeniusCUID:(id)arg1 withCompletionHandler:(id)arg2;
- (void)setKeepLocal:(BOOL)arg1 forCollectionWithPersistentID:(long long)arg2 groupingType:(int)arg3 completionHandler:(id)arg4;
- (void)setPreferredVideoQuality:(long long)arg1;
- (void)setUpdateInProgressChangedHandler:(id)arg1;
- (BOOL)shouldProhibitActionsForCurrentNetworkConditions;
- (void)unhideAllPurchasedApps:(id)arg1;
- (void)updateArtistHeroImagesWithCompletionHandler:(id)arg1;
- (id)updateInProgressChangedHandler;
- (void)updateJaliscoAppsLibraryForFamilyMemberStoreID:(id)arg1 withReason:(long long)arg2 completionHandler:(id)arg3;
- (void)updateJaliscoAppsLibraryWithReason:(long long)arg1 completionHandler:(id)arg2;
- (void)updateJaliscoGeniusDataWithCompletionHandler:(id)arg1;
- (void)updateJaliscoLibraryWithCompletionHandler:(id)arg1;
- (void)updateJaliscoLibraryWithReason:(long long)arg1 completionHandler:(id)arg2;
- (void)updatePlaylistWithSagaID:(unsigned long long)arg1 itemSagaIDs:(id)arg2 queue:(id)arg3 completionHandler:(id)arg4;
- (void)updateSagaLibraryWithCompletionHandler:(id)arg1;
- (void)updateSagaLibraryWithReason:(long long)arg1 completionHandler:(id)arg2;
- (void)uploadItemProperties;

@end