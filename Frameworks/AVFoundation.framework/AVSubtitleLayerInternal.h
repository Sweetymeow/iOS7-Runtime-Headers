/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVPlayer, NSObject<OS_dispatch_queue>, NSDictionary;

@interface AVSubtitleLayerInternal : NSObject  {
    AVPlayer *player;
    struct OpaqueFigSubtitleRenderer { } *renderer;
    NSDictionary *currentSubtitleSample;
    BOOL currentSubtitleSampleIsForced;
    BOOL nonForcedSubtitleDisplayEnabled;
    BOOL shouldObservePlayer;
    BOOL isObservingPlayer;
    BOOL hasPlayerToObserve;
    NSObject<OS_dispatch_queue> *serialQueue;
    BOOL isPresentationLayer;
    BOOL isOverscanSubtitleSupportEnabled;
    id delegate;
}



@end
