/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class CIColor, UIColor;

@interface UICIColor : UIColor  {
    CIColor *_ciColor;
    UIColor *_rgbColor;
}


- (void)setStroke;
- (id)initWithCIColor:(id)arg1;
- (id)colorWithAlphaComponent:(float)arg1;
- (void)setFill;
- (BOOL)getRed:(float*)arg1 green:(float*)arg2 blue:(float*)arg3 alpha:(float*)arg4;
- (struct CGColor { }*)CGColor;
- (void)set;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)CIColor;
- (id)_rgbColor;
- (BOOL)_getWhite:(float*)arg1 alpha:(float*)arg2;

@end
