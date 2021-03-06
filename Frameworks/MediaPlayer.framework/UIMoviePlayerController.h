/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class UIImage, <MPVideoControllerProtocol>, MPAVItem, MPAVController, MPVideoView, MPSystemNowPlayingController, UIView, UINavigationController, NSArray, MPTransitionController, UIViewController, NSDate, _UIHostedWindow, NSString, UIMovieView, MPMovieAccessLog, MPMovieErrorLog;

@interface UIMoviePlayerController : NSObject  {
    id _delegate;
    MPAVItem *_item;
    NSString *_moviePath;
    MPAVController *_player;
    UIImage *_posterImage;
    NSString *_youTubeVideoID;
    UIViewController *_topViewController;
    <MPVideoControllerProtocol> *_activeVideoController;
    MPVideoView *_videoView;
    MPTransitionController *_transitionController;
    int _transitionCount;
    UINavigationController *_portraitNavigationController;
    struct __CFBag { } *_ignoredChangeTypes;
    int _pendingInterfaceOrientation;
    MPAVItem *_pendingItem;
    MPAVItem *_pendingItemWithDifferentType;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _layoutRect;
    int _lastSetUIInterfaceOrientation;
    int _interfaceOrientation;
    int _interfaceOrientationFromDevice;
    NSString *_playbackErrorDescription;
    unsigned int _autoRotationMask;
    unsigned int _displayableParts;
    unsigned int _unmodifiedDisplayableParts;
    unsigned int _desiredParts;
    unsigned int _audioControlsStyle;
    unsigned int _playableContentTypeOverride;
    double _timeWhenResignedActive;
    double _timeToSnapshot;
    NSArray *_closedCaptionData;
    MPSystemNowPlayingController *_nowPlayingController;
    struct { 
        unsigned int canShowControlsOverlay : 1; 
        unsigned int wantsControlsOverlayVis : 1; 
        unsigned int wantsControlsOverlayAnim : 1; 
        unsigned int wantsControlsOverlayDisableAutohide : 1; 
        unsigned int wantsFullscreen : 1; 
        unsigned int alwaysFullscreen : 1; 
        unsigned int canAnimateControlsOverlay : 1; 
        unsigned int autoplayWhenLikelyToKeepUp : 1; 
        unsigned int disallowsVideoOut : 1; 
        unsigned int exited : 1; 
        unsigned int generatingOrientationNotifications : 1; 
        unsigned int forStreaming : 1; 
        unsigned int isExternalTransformationActive : 1; 
        unsigned int controlsVisibleBeforeExternalTransformation : 1; 
        unsigned int isActive : 1; 
        unsigned int resigningActive : 1; 
        unsigned int didResignActive : 1; 
        unsigned int uiPrepared : 1; 
        unsigned int isChangingMoviePath : 1; 
        unsigned int alwaysAllowHidingControlsOverlay : 1; 
        unsigned int schedulePortraitLoadingIndicator : 1; 
        unsigned int clientClearedMoviePath : 1; 
        unsigned int canCommitOverlayChanges : 1; 
        unsigned int usingDebugTestPath : 1; 
        unsigned int allowsWirelessPlayback : 1; 
        unsigned int useHostedWindowWhenFullscreen : 1; 
    } _mpcBitfield;
}

@property unsigned int options;
@property(copy) NSString * moviePath;
@property(readonly) UIView * view;
@property(retain) MPAVItem * item;
@property id delegate;
@property unsigned int playableContentType;
@property(readonly) BOOL isPreparedForPlayback;
@property float playbackRate;
@property(readonly) unsigned int playbackState;
@property BOOL stopAtEnd;
@property(readonly) double duration;
@property double currentTime;
@property(readonly) BOOL muted;
@property(readonly) float volume;
@property(readonly) BOOL areClosedCaptionsAvailable;
@property(readonly) unsigned int bufferingState;
@property(readonly) double playableDuration;
@property(readonly) double playableStartTime;
@property(readonly) double playableEndTime;
@property(readonly) double seekableStartTime;
@property(readonly) double seekableEndTime;
@property BOOL limitReadAhead;
@property(readonly) NSDate * currentDate;
@property BOOL useApplicationAudioSession;
@property(readonly) long long fileSize;
@property(copy) NSString * movieTitle;
@property(copy) NSString * movieSubtitle;
@property BOOL useHostedWindowWhenFullscreen;
@property(readonly) _UIHostedWindow * hostedWindow;
@property(readonly) unsigned int hostedWindowContextID;
@property(readonly) BOOL videoOutActive;
@property(readonly) BOOL canContinuePlayingInBackground;
@property(readonly) BOOL canContinuePlayingWhenLocked;
@property(copy) NSString * youTubeVideoID;
@property(retain) NSString * audioSessionModeOverride;
@property(readonly) UIMovieView * movieView;
@property unsigned int audioControlsStyle;
@property(copy) NSString * playbackErrorDescription;
@property(readonly) struct CGSize { float x1; float x2; } naturalSize;
@property BOOL disallowsVideoOut;
@property(retain) UIImage * posterImage;
@property(retain) UIImage * backgroundPlaceholderImage;
@property(getter=isFullscreen) BOOL fullscreen;
@property(readonly) UIView * fullscreenView;
@property BOOL closedCaptioningEnabled;
@property BOOL disableAlternateTextTrackRendering;
@property(readonly) UIView * alternateTextTrackView;
@property(readonly) MPMovieAccessLog * accessLog;
@property(readonly) MPMovieErrorLog * errorLog;
@property BOOL useLegacyControls;
@property BOOL alwaysAllowHidingControlsOverlay;

+ (Class)preferredWindowClass;
+ (struct CGSize { float x1; float x2; })fillSizeForMovieBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 movieNaturalSize:(struct CGSize { float x1; float x2; })arg2 interfaceOrientation:(int)arg3 destinationTVOut:(BOOL)arg4;
+ (void)allInstancesResignActiveForced:(BOOL)arg1;
+ (void)allInstancesResignActive;

- (BOOL)isPreparedForPlayback;
- (float)playbackRate;
- (id)playerView;
- (BOOL)isFullScreen;
- (void)layoutUIInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 fullScreen:(BOOL)arg2;
- (id)initWithPlayerSize:(struct CGSize { float x1; float x2; })arg1 isFullScreen:(BOOL)arg2 options:(unsigned int)arg3;
- (id)initWithPlayerSize:(struct CGSize { float x1; float x2; })arg1 isFullScreen:(BOOL)arg2;
- (id)youTubeVideoID;
- (id)playbackErrorDescription;
- (unsigned int)audioControlsStyle;
- (id)_backgroundPlaceholderView;
- (void)videoControllerDidEndScrubbing:(id)arg1;
- (void)videoControllerDidBeginScrubbing:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })videoControllerFrameAfterFullscreenExit:(id)arg1;
- (void)videoControllerDidCreateFullscreenView:(id)arg1;
- (void)videoControllerWillExitFullscreen:(id)arg1 reason:(int)arg2;
- (void)viewControllerFailedToPlay:(id)arg1 withError:(id)arg2;
- (void)resignActiveAndEndAirPlay;
- (void)setUseLegacyControls:(BOOL)arg1;
- (BOOL)useLegacyControls;
- (void)setYouTubeVideoID:(id)arg1;
- (void)endExternalTransformation;
- (void)beginExternalTransformation;
- (void)prepareAndSetupUI;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })moviePlaceholderImageRectForMovieWithAspectRatio:(float)arg1;
- (void)layoutUIInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setAudioControlsStyle:(unsigned int)arg1;
- (void)setControlsOverlayVisible:(BOOL)arg1 disableAutohide:(BOOL)arg2 animate:(BOOL)arg3;
- (void)setDisplayable:(BOOL)arg1 movieParts:(unsigned int)arg2 animated:(BOOL)arg3;
- (void)setDesiredMovieParts:(unsigned int)arg1 animated:(BOOL)arg2;
- (void)setAutoRotationMask:(unsigned int)arg1;
- (unsigned int)autoRotationMask;
- (BOOL)setInterfaceOrientation:(int)arg1 animated:(BOOL)arg2 forced:(BOOL)arg3;
- (void)performTransition:(id)arg1;
- (void)viewController:(id)arg1 endIgnoringChangeType:(unsigned int)arg2;
- (void)viewController:(id)arg1 beginIgnoringChangeTypes:(unsigned int)arg2;
- (BOOL)areClosedCaptionsAvailable;
- (double)seekableEndTime;
- (double)seekableStartTime;
- (double)playableEndTime;
- (double)playableStartTime;
- (void)setPlaybackRate:(float)arg1;
- (void)prepareForPlayback;
- (void)setPlayableContentType:(unsigned int)arg1;
- (BOOL)useHostedWindowWhenFullscreen;
- (void)setManagesStatusBar:(BOOL)arg1;
- (void)setDisallowsVideoOut:(BOOL)arg1;
- (void)setMoviePath:(id)arg1;
- (id)moviePath;
- (BOOL)canContinuePlayingWhenLocked;
- (BOOL)canContinuePlayingInBackground;
- (id)alternateTextTrackView;
- (void)unlockMoviePlaybackResources;
- (id)initWithPlayerSize:(struct CGSize { float x1; float x2; })arg1;
- (BOOL)_canAutoRotateToInterfaceOrientation:(int)arg1;
- (void)_deviceOrientationChanged:(id)arg1;
- (void)_alternateTracksAvailableNotification:(id)arg1;
- (void)_itemDurationAvailableNotification:(id)arg1;
- (void)_willResignNotification:(id)arg1;
- (void)_willBeginSuspendAnimationNotification:(id)arg1;
- (void)_willSuspendNotification:(id)arg1;
- (void)_tvOutCapabilityChanged:(id)arg1;
- (void)_mutedDidChangeNotification:(id)arg1;
- (void)_volumeDidChangeNotification:(id)arg1;
- (void)_autoRotateToInterfaceOrientation:(int)arg1 animated:(BOOL)arg2;
- (void)_setTVOutEnabled:(BOOL)arg1;
- (void)_pausePlaybackForNotification:(id)arg1;
- (void)_exitPlayer:(int)arg1;
- (int)_exitReasonForMPViewControllerExitReason:(int)arg1;
- (void)resignActive;
- (id)fullscreenView;
- (void)_autoRotateToCurrentOrientationAnimated:(BOOL)arg1;
- (id)posterImage;
- (id)backgroundPlaceholderImage;
- (void)setBackgroundPlaceholderImage:(id)arg1;
- (void)_prepareAndSetupUIForClient;
- (void)setAllowsDetailScrubbing:(BOOL)arg1;
- (void)setDisplayableMovieParts:(unsigned int)arg1 animated:(BOOL)arg2;
- (void)_beginDeviceOrientationNotifications;
- (void)_reloadForTransitionFromInterfaceOrientation:(int)arg1 toInterfaceOrientation:(int)arg2 animated:(BOOL)arg3;
- (BOOL)_shouldIgnoreChangeType:(unsigned int)arg1;
- (void)_setActiveViewController:(id)arg1 forTransition:(BOOL)arg2;
- (id)newViewControllerForItem:(id)arg1 interfaceOrientation:(int)arg2 reusingController:(id)arg3;
- (void)_transitionFinished:(id)arg1;
- (void)beginTransition;
- (void)beginIgnoringChangeTypes:(unsigned int)arg1;
- (void)endTransition;
- (void)endIgnoringChangeTypes:(unsigned int)arg1;
- (BOOL)setOrientation:(int)arg1 animated:(BOOL)arg2 forced:(BOOL)arg3;
- (void)setItem:(id)arg1 animated:(BOOL)arg2;
- (BOOL)_noteStoppedIgnoringChangeType:(unsigned int)arg1;
- (void)portraitScaleButtonAction:(id)arg1;
- (void)_reconfigurePortraitNavigationItem:(id)arg1 time:(double)arg2 animate:(BOOL)arg3;
- (void)portraitDoneButtonAction:(id)arg1;
- (void)_commitFinishInitializeActiveViewController:(id)arg1 animate:(BOOL)arg2;
- (void)setPlaybackErrorDescription:(id)arg1;
- (void)_updateEnabledParts;
- (unsigned long long)_convertedVisiblePartsMask:(unsigned int)arg1;
- (unsigned long long)_convertedPartsMask:(unsigned int)arg1;
- (void)setCanAnimateControlsOverlay:(BOOL)arg1;
- (void)_initializeVideoViewController:(id)arg1 orientation:(int)arg2;
- (void)setPosterImage:(id)arg1;
- (void)_finishInitializeActiveViewController:(id)arg1 forTransition:(BOOL)arg2;
- (id)_portraitNavigationController:(BOOL)arg1;
- (void)_prepareAndSetupUI;
- (BOOL)stopAtEnd;
- (id)currentDate;
- (void)setCurrentTime:(double)arg1 timeSnapOption:(unsigned int)arg2;
- (unsigned int)playableContentType;
- (void)_updatePlayableContentTypeOverride;
- (void)setClosedCaptioningEnabled:(BOOL)arg1;
- (BOOL)closedCaptioningEnabled;
- (void)setClosedCaptions:(id)arg1;
- (void)setAttemptAutoPlayWhenControlsHidden:(BOOL)arg1;
- (id)_activeVideoController;
- (BOOL)disallowsVideoOut;
- (id)_topViewController;
- (id)movieView;
- (void)setLimitReadAhead:(BOOL)arg1;
- (BOOL)limitReadAhead;
- (void)setDisableAlternateTextTrackRendering:(BOOL)arg1;
- (BOOL)disableAlternateTextTrackRendering;
- (BOOL)videoOutActive;
- (void)_updateForStreamingOptions;
- (void)tearDownUI;
- (void)_endDeviceOrientationNotifications;
- (id)initWithPlayerSize:(struct CGSize { float x1; float x2; })arg1 options:(unsigned int)arg2;
- (void)debugSetup;
- (void)_alternateTextTrackDidOutputNotification:(id)arg1;
- (void)_alternateTextTrackWillChangeNotification:(id)arg1;
- (void)_tickNotification:(id)arg1;
- (void)_playbackStateChanged:(id)arg1;
- (void)_validityChangedNotification:(id)arg1;
- (void)_serverDeathNotification:(id)arg1;
- (void)_itemChangedNotification:(id)arg1;
- (void)_bufferingStateChangedNotification:(id)arg1;
- (void)_didEnterBackgroundNotification:(id)arg1;
- (void)_willEnterForegroundNotification:(id)arg1;
- (void)delayedDebugSetup;
- (BOOL)useApplicationAudioSession;
- (void)videoControllerDidHideOverlay:(id)arg1;
- (void)videoController:(id)arg1 willHideOverlayWithDuration:(double)arg2;
- (void)videoControllerDidShowOverlay:(id)arg1;
- (void)videoController:(id)arg1 willShowOverlayWithDuration:(double)arg2;
- (BOOL)videoController:(id)arg1 tappedButtonPart:(unsigned long long)arg2;
- (void)viewControllerRequestsExit:(id)arg1 reason:(int)arg2;
- (void)videoControllerDidExitFullscreen:(id)arg1;
- (void)videoControllerDidEnterFullscreen:(id)arg1;
- (void)videoControllerWillEnterFullscreen:(id)arg1;
- (BOOL)videoControllerShouldAutohide:(id)arg1;
- (void)setUseApplicationAudioSession:(BOOL)arg1;
- (unsigned int)hostedWindowContextID;
- (id)hostedWindow;
- (void)setInlinePlaybackUsesTVOut:(BOOL)arg1;
- (void)setUseHostedWindowWhenFullscreen:(BOOL)arg1;
- (void)setMovieTitle:(id)arg1;
- (void)setMovieSubtitle:(id)arg1;
- (void)setAlwaysAllowHidingControlsOverlay:(BOOL)arg1;
- (BOOL)alwaysAllowHidingControlsOverlay;
- (void)setAudioSessionModeOverride:(id)arg1;
- (id)audioSessionModeOverride;
- (void)setItem:(id)arg1;
- (void)setAllowsWirelessPlayback:(BOOL)arg1;
- (void)setAutoPlayWhenLikelyToKeepUp:(BOOL)arg1;
- (void)setCanShowControlsOverlay:(BOOL)arg1;
- (void)_ensureActive;
- (unsigned int)bufferingState;
- (void)_simpleRemoteNotification:(id)arg1;
- (void)_videoViewPathWillChangeNotification:(id)arg1;
- (void)_movieTypeAvailableNotification:(id)arg1;
- (void)_moviePlayerDidBecomeActiveNotification:(id)arg1;
- (void)_moviePlayerWillBecomeActiveNotification:(id)arg1;
- (void)_timeDidJumpNotification:(id)arg1;
- (void)_timedMetadataAvailableNotification:(id)arg1;
- (void)_rateDidChangeNotification:(id)arg1;
- (void)_itemPlaybackDidEndNotification:(id)arg1;
- (void)_itemReadyToPlayNotification:(id)arg1;
- (void)_isExternalPlaybackActiveDidChangeNotification:(id)arg1;
- (void)setStopAtEnd:(BOOL)arg1;
- (double)playableDuration;
- (void)play;
- (void)setFullscreen:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setFullscreen:(BOOL)arg1;
- (BOOL)isFullscreen;
- (unsigned int)playbackState;
- (id)movieSubtitle;
- (id)movieTitle;
- (void)setCurrentTime:(double)arg1;
- (BOOL)muted;
- (double)currentTime;
- (id)errorLog;
- (id)accessLog;
- (void)_registerForNotifications;
- (BOOL)seekToDate:(id)arg1;
- (void)_unregisterForNotifications;
- (float)volume;
- (int)interfaceOrientation;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (id)delegate;
- (long long)fileSize;
- (struct CGSize { float x1; float x2; })naturalSize;
- (void)setOptions:(unsigned int)arg1;
- (id)item;
- (id)backgroundView;
- (id)view;
- (void)pause;
- (double)duration;
- (void)stop;
- (unsigned int)options;

@end
