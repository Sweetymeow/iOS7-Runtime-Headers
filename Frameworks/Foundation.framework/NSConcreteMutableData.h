/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSConcreteMutableData : NSMutableData  {
    unsigned int _reserved : 1;
    unsigned int _needToZero : 1;
    unsigned int _hasVM : 1;
    unsigned int _retainCount : 29;
    unsigned int _length;
    unsigned int _capacity;
    void *_bytes;
}


- (id)init;
- (unsigned int)length;
- (id)initWithCapacity:(unsigned int)arg1;
- (void)appendBytes:(const void*)arg1 length:(unsigned int)arg2;
- (void)increaseLengthBy:(unsigned int)arg1;
- (void)setLength:(unsigned int)arg1;
- (void*)mutableBytes;
- (const void*)bytes;
- (void)finalize;
- (void)dealloc;
- (void)_freeBytes;
- (void)resetBytesInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)appendData:(id)arg1;
- (void)replaceBytesInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 withBytes:(const void*)arg2;
- (id)initWithBytes:(void*)arg1 length:(unsigned int)arg2 copy:(BOOL)arg3 deallocator:(id)arg4;
- (id)initWithLength:(unsigned int)arg1;

@end
