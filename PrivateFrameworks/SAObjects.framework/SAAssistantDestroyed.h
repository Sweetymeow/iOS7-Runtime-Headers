/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString;

@interface SAAssistantDestroyed : SABaseClientBoundCommand  {
}

@property(copy) NSString * assistantId;

+ (id)assistantDestroyedWithDictionary:(id)arg1 context:(id)arg2;
+ (id)assistantDestroyed;

- (void)setAssistantId:(id)arg1;
- (id)assistantId;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
