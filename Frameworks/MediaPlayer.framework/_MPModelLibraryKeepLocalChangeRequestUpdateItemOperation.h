/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface _MPModelLibraryKeepLocalChangeRequestUpdateItemOperation : MPAsyncOperation {
    int  _keepLocal;
    MPMediaItem * _mediaItem;
}

@property (nonatomic) int keepLocal;
@property (nonatomic, retain) MPMediaItem *mediaItem;

- (void).cxx_destruct;
- (void)execute;
- (int)keepLocal;
- (id)mediaItem;
- (void)setKeepLocal:(int)arg1;
- (void)setMediaItem:(id)arg1;

@end
