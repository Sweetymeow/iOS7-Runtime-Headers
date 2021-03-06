/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class CMMotionManager, CMAttitude, NSMutableSet, NSOperationQueue;

@interface MPMotionManager : NSObject  {
    NSMutableSet *_accelerometerHandlerClients;
    BOOL _accelerometerUpdatesActive;
    CMAttitude *_attitude;
    CMMotionManager *_motionManager;
    NSOperationQueue *_operationQueue;
}

+ (id)sharedMotionManager;

- (void)_beginMotionUpdates;
- (void)_applicationWillResignActiveNotification:(id)arg1;
- (void)_applicationDidBecomeActiveNotification:(id)arg1;
- (id)addObserverWithAccelerometerHandler:(id)arg1;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)removeObserver:(id)arg1;

@end
