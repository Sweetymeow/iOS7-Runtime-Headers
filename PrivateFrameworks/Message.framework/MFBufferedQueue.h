/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSMutableArray;

@interface MFBufferedQueue : NSObject  {
    unsigned int _maximumSize;
    double _maximumLatency;
    double _timeOfLastFlush;
    NSMutableArray *_queue;
    unsigned int _currentSize;
}

@property(readonly) unsigned int size;
@property unsigned int maximumSize;
@property double maximumLatency;


- (void)setMaximumLatency:(double)arg1;
- (double)maximumLatency;
- (BOOL)handleItems:(id)arg1;
- (unsigned int)sizeForItem:(id)arg1;
- (id)initWithMaximumSize:(unsigned int)arg1 latency:(double)arg2;
- (unsigned int)size;
- (void)setMaximumSize:(unsigned int)arg1;
- (unsigned int)maximumSize;
- (BOOL)flush;
- (id)init;
- (BOOL)isEmpty;
- (void)removeAllObjects;
- (void)dealloc;
- (BOOL)addItem:(id)arg1;

@end
