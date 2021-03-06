/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@class CIImage, CIVector, NSNumber;

@interface _CIScreenFilter : CIFilter  {
    CIImage *inputImage;
    CIVector *inputCenter;
    NSNumber *inputAngle;
    NSNumber *inputWidth;
    NSNumber *inputSharpness;
}

@property(retain) CIImage * inputImage;
@property(retain) CIVector * inputCenter;
@property(retain) NSNumber * inputAngle;
@property(retain) NSNumber * inputWidth;
@property(retain) NSNumber * inputSharpness;

+ (id)customAttributes;

- (id)_kernel_code;
- (id)inputSharpness;
- (id)inputWidth;
- (void)setInputSharpness:(id)arg1;
- (void)setInputWidth:(id)arg1;
- (id)inputCenter;
- (void)setInputCenter:(id)arg1;
- (id)_kernel_name;
- (id)inputAngle;
- (void)setInputAngle:(id)arg1;
- (id)_kernel;
- (void)setInputImage:(id)arg1;
- (id)inputImage;
- (id)outputImage;
- (void)setDefaults;

@end
