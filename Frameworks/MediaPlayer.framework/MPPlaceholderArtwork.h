/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPPlaceholderArtwork : NSObject  {
}

+ (id)noArtPlaceholderImageForMediaType:(unsigned int)arg1 withFormat:(unsigned int)arg2;
+ (id)noArtMusicPlaceholderImageForMediaType:(unsigned int)arg1 size:(struct CGSize { float x1; float x2; })arg2;
+ (id)noArtPlaceholderImageForMediaType:(unsigned int)arg1;
+ (id)allArtworkFormatSizes;
+ (id)scaledNoArtPlaceholderMusicImageWithFormat:(unsigned int)arg1;
+ (id)scaledNoArtPlaceholderVideoImageWithFormat:(unsigned int)arg1;
+ (id)scaledNoArtPlaceholderAudioBookImageWithFormat:(unsigned int)arg1;
+ (id)scaledNoArtPlaceholderPodcastImageWithFormat:(unsigned int)arg1;
+ (struct CGSize { float x1; float x2; })unscaledArtworkSizeForFormatID:(unsigned int)arg1;
+ (id)padNoArtPlaceholderMusicImageForSize:(struct CGSize { float x1; float x2; })arg1;
+ (id)padNoArtPlaceholderVideoImageForSize:(struct CGSize { float x1; float x2; })arg1;
+ (id)padNoArtPlaceholderAudioBookImageForSize:(struct CGSize { float x1; float x2; })arg1;
+ (id)padNoArtPlaceholderPodcastImageForSize:(struct CGSize { float x1; float x2; })arg1;
+ (id)noArtMusicPlaceholderAudioBookImage;
+ (id)noArtMusicPlaceholderPodcastImage;
+ (id)noArtPlaceholderImageForMediaType:(unsigned int)arg1 size:(struct CGSize { float x1; float x2; })arg2;
+ (id)padNoArtPlaceholderImageForMediaType:(unsigned int)arg1 size:(struct CGSize { float x1; float x2; })arg2;
+ (id)noArtPlaceholderVideoImage;
+ (id)noArtPlaceholderAudioBookImage;
+ (id)noArtPlaceholderPodcastImage;
+ (id)scaleImage:(id)arg1 withFormat:(unsigned int)arg2;
+ (id)noArtPlaceholderMusicImage;
+ (id)noArtPlaceholderMusicImageForSize:(struct CGSize { float x1; float x2; })arg1;
+ (id)noArtMusicPlaceholderMusicImageForSize:(struct CGSize { float x1; float x2; })arg1;
+ (unsigned int)currentScreenFormatIDFrom1XFormatID:(unsigned int)arg1;

- (BOOL)isPlaceholder:(id)arg1;

@end
