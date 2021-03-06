/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TIKeyboardLayout : NSObject <NSSecureCoding> {
    unsigned int _count;
    struct _ShortRect { short x1; short x2; short x3; short x4; } *_frames;
    unsigned int _framesCapacity;
    char *_strings;
    unsigned int _stringsSize;
    unsigned int _stringsCapacity;
}

+ (BOOL)supportsSecureCoding;

- (void)enumerateKeysUsingBlock:(id)arg1;
- (void)ensureStringCapacity:(unsigned int)arg1;
- (void)ensureFrameCapacity:(unsigned int)arg1;
- (id)initWithCapacity:(unsigned int)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (void)addKeyWithString:(id)arg1 frame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
