/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSConditionLock;

@interface MFDAMailAccountConsumer : NSObject <DAActionConsumer> {
    NSConditionLock *_doneCondition;
    BOOL _shouldRetryRequest;
    BOOL _alwaysReportFailures;
}


- (BOOL)waitUntilDoneBeforeDate:(id)arg1;
- (void)actionFailed:(int)arg1 forTask:(id)arg2 error:(id)arg3;
- (void)setDone:(BOOL)arg1;
- (void)taskFailed:(id)arg1 statusCode:(int)arg2 error:(id)arg3;
- (id)initWithAlwaysReportFailures:(BOOL)arg1;
- (BOOL)shouldRetryRequest;
- (void)waitUntilDone;
- (id)init;
- (void)dealloc;

@end
