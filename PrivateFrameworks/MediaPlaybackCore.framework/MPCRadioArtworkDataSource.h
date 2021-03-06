/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCRadioArtworkDataSource : MPAbstractNetworkArtworkDataSource {
    unsigned int  _backgroundCacheSize;
    unsigned int  _cacheSize;
    CPLRUDictionary * _cachedArtworkRepresentations;
    NSObject<OS_dispatch_queue> * _cachedArtworkRepresentationsAccessQueue;
    int  _resumeToForegroundCacheSize;
}

+ (id)sharedRadioArtworkDataSource;

- (void).cxx_destruct;
- (void)_cacheArtworkRepresentation:(id)arg1 forKey:(id)arg2;
- (void)_clearCache;
- (void)_handleDidEnterBackgroundNotification:(id)arg1;
- (void)_handleDidReceiveMemoryWarningNotification:(id)arg1;
- (void)_handleWillEnterForegroundNotification:(id)arg1;
- (void)_setCacheSize:(unsigned int)arg1 preserveExisting:(BOOL)arg2;
- (BOOL)areRepresentationsAvailableForCatalog:(id)arg1;
- (void)cancelLoadingRepresentationForArtworkCatalog:(id)arg1;
- (void)dealloc;
- (id)existingRepresentationForArtworkCatalog:(id)arg1;
- (id)init;
- (BOOL)isRepresentation:(id)arg1 bestRepresentationForArtworkCatalog:(id)arg2;
- (void)loadRepresentationForArtworkCatalog:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)requestForCatalog:(id)arg1 size:(struct CGSize { float x1; float x2; })arg2;
- (id)visualIdenticalityIdentifierForCatalog:(id)arg1;

@end
