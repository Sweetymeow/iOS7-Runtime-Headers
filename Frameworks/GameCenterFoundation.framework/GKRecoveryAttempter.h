/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface GKRecoveryAttempter : NSObject  {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _attemptRecovery;

}

+ (id)recoveryAttempterUsingHandler:(id)arg1;

- (void)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned int)arg2 delegate:(id)arg3 didRecoverSelector:(SEL)arg4 contextInfo:(void*)arg5;
- (void)dealloc;
- (BOOL)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned int)arg2;

@end
