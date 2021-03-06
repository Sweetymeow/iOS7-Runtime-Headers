/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@class NSURLResponse, NSURLRequest, NSString, NSError;

@interface __NSCFURLSessionTask : NSObject <NSSecureCoding, NSCopying> {
    unsigned int _taskIdentifier;
    NSURLRequest *_originalRequest;
    NSURLRequest *_currentRequest;
    NSURLResponse *_response;
    NSString *_taskDescription;
    int _state;
    NSError *_error;
    long long _countOfBytesReceived;
    long long _countOfBytesSent;
    long long _countOfBytesExpectedToSend;
    long long _countOfBytesExpectedToReceive;
    double _startTime;
}

@property unsigned int taskIdentifier;
@property(copy) NSURLRequest * originalRequest;
@property(copy) NSURLRequest * currentRequest;
@property(copy) NSURLResponse * response;
@property long long countOfBytesReceived;
@property long long countOfBytesSent;
@property long long countOfBytesExpectedToSend;
@property long long countOfBytesExpectedToReceive;
@property(copy) NSString * taskDescription;
@property int state;
@property(copy) NSError * error;
@property double startTime;

+ (BOOL)supportsSecureCoding;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setTaskIdentifier:(unsigned int)arg1;
- (void)setTaskDescription:(id)arg1;
- (id)taskDescription;
- (long long)countOfBytesExpectedToSend;
- (long long)countOfBytesSent;
- (unsigned int)taskIdentifier;
- (long long)countOfBytesExpectedToReceive;
- (void)setOriginalRequest:(id)arg1;
- (void)resume;
- (void)suspend;
- (void)cancel;
- (double)startTime;
- (id)currentRequest;
- (void)setCountOfBytesExpectedToSend:(long long)arg1;
- (void)setCountOfBytesSent:(long long)arg1;
- (void)setCountOfBytesReceived:(long long)arg1;
- (long long)countOfBytesReceived;
- (id)response;
- (void)setCountOfBytesExpectedToReceive:(long long)arg1;
- (void)setResponse:(id)arg1;
- (void)setError:(id)arg1;
- (id)error;
- (void)setState:(int)arg1;
- (void)_onqueue_connection_resume;
- (void)_onqueue_connection_cancel;
- (void)setCurrentRequest:(id)arg1;
- (id)originalRequest;
- (int)state;
- (id)initWithTask:(id)arg1;
- (id)initWithRequest:(id)arg1 ident:(unsigned int)arg2;
- (void)_onqueue_connection_suspend;
- (void)setStartTime:(double)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
