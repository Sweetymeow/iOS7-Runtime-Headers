/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/Message.framework/Message
 */

@class MFSMTPResponse, NSMutableData, NSString, NSMutableArray;

@interface MFSMTPConnection : MFConnection  {
    MFSMTPResponse *_lastResponse;
    NSMutableArray *_serviceExtensions;
    NSMutableData *_mdata;
    NSString *_domainName;
    NSString *_saveSentMbox;
    int _originalSocketTimeout;
    long _lastCommandTimestamp;
    id _delegate;
    BOOL _hideLoggedData;
    BOOL _useSaveSent;
    BOOL _dislikesSaveSentMbox;
}


- (long)timeLastCommandWasSent;
- (int)noop;
- (BOOL)authenticateUsingAccount:(id)arg1 authenticator:(id)arg2;
- (id)authenticationMechanisms;
- (BOOL)supportsEnhancedStatusCodes;
- (void)setDomainName:(id)arg1;
- (id)lastResponse;
- (BOOL)connectUsingAccount:(id)arg1;
- (int)_readResponseRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg1 isContinuation:(BOOL*)arg2;
- (int)_sendBytes:(const char *)arg1 length:(unsigned int)arg2 progressHandler:(id)arg3;
- (void)_setLastResponse:(id)arg1;
- (int)rcptTo:(id)arg1;
- (int)mailFrom:(id)arg1;
- (int)sendBData:(id)arg1;
- (int)_sendData:(id)arg1;
- (id)dataForDataCmd;
- (id)dataForRcptTo:(id)arg1;
- (id)dataForMailFrom:(id)arg1;
- (BOOL)supportsPipelining;
- (BOOL)supportsChunking;
- (id)_dataForCommand:(const char *)arg1 length:(unsigned int)arg2 argument:(id)arg3 trailer:(const char *)arg4;
- (int)_sendData:(id)arg1 progressHandler:(id)arg2;
- (int)_doHandshakeUsingAccount:(id)arg1;
- (BOOL)_connectUsingAccount:(id)arg1;
- (id)lastResponseLine;
- (int)_getReply;
- (int)_sendCommand:(const char *)arg1 length:(unsigned int)arg2 argument:(id)arg3 trailer:(const char *)arg4;
- (BOOL)_supportsExtension:(id)arg1;
- (BOOL)_supportsSaveSentExtension;
- (BOOL)_hasParameter:(id)arg1 forKeyword:(id)arg2;
- (int)mailFrom:(id)arg1 recipients:(id)arg2 withData:(id)arg3 host:(id)arg4 errorTitle:(id*)arg5 errorMessage:(id*)arg6 serverResponse:(id*)arg7 displayError:(BOOL*)arg8 errorCode:(int*)arg9;
- (void)setUseSaveSent:(BOOL)arg1 toFolder:(id)arg2;
- (BOOL)supportsBinaryMime;
- (BOOL)supports8BitMime;
- (BOOL)supportsOutboxCopy;
- (unsigned long long)maximumMessageBytes;
- (BOOL)authenticateUsingAccount:(id)arg1;
- (int)quit;
- (id)domainName;
- (int)sendData:(id)arg1;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (int)state;
- (void)abort;

@end
