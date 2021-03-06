/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class MediaControlClient, NSString, AirPlayRemoteSlideshow, NSDictionary, NSMutableArray, <PLAirPlaySessionDataSource>;

@interface PLAirPlaySession : NSObject  {
    <PLAirPlaySessionDataSource> *_dataSource;
    NSMutableArray *_streamedPhotoUuids;
    NSDictionary *_pickedRoute;
    MediaControlClient *_mediaControlClient;
    BOOL _streamingPhotos;
    BOOL _streamingRemoteSlideshow;
    BOOL _streamingLocalSlideShow;
    AirPlayRemoteSlideshow *_remoteSlideshow;
    NSDictionary *_remoteSlideshowAvailableFeatures;
    NSString *_password;
    BOOL _routeRequiresPassword;
    BOOL _passwordIsAPin;
    BOOL _showingPasswordAlert;
    BOOL _validPassword;
    BOOL _validated;
    BOOL _sentPhoto;
    unsigned int _features;
}

@property BOOL streamingLocalSlideShow;
@property <PLAirPlaySessionDataSource> * dataSource;
@property(retain) AirPlayRemoteSlideshow * remoteSlideshow;
@property(retain) NSDictionary * remoteSlideshowAvailableFeatures;
@property(readonly) BOOL routeRequiresPassword;
@property BOOL validPassword;
@property(retain) NSString * password;
@property unsigned int features;

+ (void)beginNetworkAssertion;
+ (void)endNetworkAssertion;
+ (BOOL)canDisplayMedia:(id)arg1;

- (id)remoteSlideshowAvailableFeatures;
- (id)remoteSlideshow;
- (BOOL)streamingLocalSlideShow;
- (BOOL)_streaming;
- (BOOL)validPassword;
- (void)setValidPassword:(BOOL)arg1;
- (void*)_keychainAccessibility;
- (BOOL)routeRequiresPassword;
- (void)setRemoteSlideshowAvailableFeatures:(id)arg1;
- (void)setRemoteSlideshow:(id)arg1;
- (void)_streamPhotosAdjacentToPhoto:(id)arg1 withTransition:(id)arg2;
- (id)_fixLegacyEvent:(id)arg1;
- (void)_streamPhoto:(id)arg1 withTransition:(id)arg2 andAction:(id)arg3;
- (void)stopRemoteSlideshow;
- (BOOL)_shouldCachePhotos;
- (void)_validateForBadPassword:(BOOL)arg1 completionBlock:(id)arg2;
- (void)_reallySendPhotoData:(id)arg1 forPhotoWithUUID:(id)arg2 withTransition:(id)arg3 andAction:(id)arg4;
- (BOOL)_supportsPhotoCaching;
- (void)setStreamingLocalSlideShow:(BOOL)arg1;
- (void)startRemoteSlideshowWithTheme:(id)arg1 remoteSlideshowDelegate:(id)arg2;
- (void)stopStreaming;
- (void)streamPhoto:(id)arg1 withTransition:(id)arg2;
- (void)invalidatePhotoCache;
- (void)getRemoteFeaturesWithCompletionHandler:(id)arg1;
- (id)initWithPickedRoute:(id)arg1;
- (id)remoteLocalizationForSlideshowThemeKey:(id)arg1;
- (id)supportedRemoteSlideshowThemes;
- (id)pickedRouteName;
- (BOOL)supportsRemoteSlideshow;
- (id)pickedRouteID;
- (void)setFeatures:(unsigned int)arg1;
- (unsigned int)features;
- (void)validate;
- (void)setPassword:(id)arg1;
- (void)setDataSource:(id)arg1;
- (id)dataSource;
- (id)password;
- (void)dealloc;

@end
