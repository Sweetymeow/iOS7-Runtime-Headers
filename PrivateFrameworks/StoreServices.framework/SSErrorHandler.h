/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSArray, <SSErrorHandlerDelegate>, SSXPCConnection, NSObject<OS_dispatch_queue>;

@interface SSErrorHandler : NSObject  {
    SSXPCConnection *_controlConnection;
    <SSErrorHandlerDelegate> *_delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSArray *_failureTypes;
    SSXPCConnection *_observerConnection;
}

@property <SSErrorHandlerDelegate> * delegate;
@property(copy) NSArray * failureTypes;


- (void)stopWithCompletionBlock:(id)arg1;
- (void)setFailureTypes:(id)arg1;
- (id)failureTypes;
- (void)_dispatchToDelegate:(id)arg1;
- (void)_openSessionWithMessage:(id)arg1;
- (void)_reconnectToDaemonWithCompletionBlock:(id)arg1;
- (void)_tearDownConnections;
- (void)_sendDisconnectMessage;
- (void)_handleMessage:(id)arg1 fromServerConnection:(id)arg2;
- (void)startWithCompletionBlock:(id)arg1;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)delegate;

@end
