/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

@class NSObject<OS_dispatch_queue>;

@interface HSConnectionStream : NSObject  {
    struct __CFReadStream { } *_readStream;
    NSObject<OS_dispatch_queue> *_queue;
}


- (void)sendCFHTTPMessage:(struct __CFHTTPMessage { }*)arg1 isConcurrent:(BOOL)arg2 timeoutInterval:(double)arg3 withResponseHandler:(id)arg4;
- (id)init;
- (void)dealloc;

@end
