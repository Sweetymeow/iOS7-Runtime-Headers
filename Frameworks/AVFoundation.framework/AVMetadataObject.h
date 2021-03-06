/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVMetadataObjectInternal, NSString;

@interface AVMetadataObject : NSObject  {
    AVMetadataObjectInternal *_objectInternal;
}

@property(readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } time;
@property(readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } duration;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } bounds;
@property(readonly) NSString * type;

+ (id)derivedMetadataObjectFromMetadataObject:(id)arg1 withTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg2 isVideoMirrored:(BOOL)arg3 rollAdjustment:(float)arg4;

- (id)initDerivedMetadataObjectFromMetadataObject:(id)arg1 withTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg2 isVideoMirrored:(BOOL)arg3 rollAdjustment:(float)arg4;
- (id)originalMetadataObject;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })time;
- (id)input;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bounds;
- (id)init;
- (void)dealloc;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })duration;
- (id)type;

@end
