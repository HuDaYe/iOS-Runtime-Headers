/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLThumbnailIndexes : NSObject {
    unsigned long long  _fetchTimestamp;
    NSObject<OS_dispatch_queue> * isolation;
    NSMutableIndexSet * unusedIndexes;
    int  usedMax;
}

+ (void)getAvailableThumbnailIndexWithHandler:(id /* block */)arg1;
+ (void)getAvailableThumbnailIndexesWithCount:(unsigned int)arg1 handler:(id /* block */)arg2;
+ (unsigned int)nextAvailableThumbnailIndex;
+ (void)recycleThumbnailIndexes:(id)arg1;
+ (void)recycleThumbnailIndexes:(id)arg1 timestamp:(unsigned long long)arg2;
+ (id)sharedInstance;

- (id)fetchOccupiedThumbnailIndexesWithLibrary:(id)arg1;
- (void)getAvailableThumbnailIndexesFromDatabase;
- (void)getAvailableThumbnailIndexesWithCount:(unsigned int)arg1 handler:(id /* block */)arg2;
- (id)init;
- (void)recycleThumbnailIndexes:(id)arg1 timestamp:(unsigned long long)arg2;

@end
