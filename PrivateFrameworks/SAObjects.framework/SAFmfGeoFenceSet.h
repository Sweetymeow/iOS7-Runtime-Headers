/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class SAPerson, NSString, NSNumber, SALocation;

@interface SAFmfGeoFenceSet : SADomainCommand  {
}

@property(copy) NSNumber * enable;
@property(copy) NSString * fenceType;
@property(retain) SAPerson * friend;
@property(copy) NSString * geoFenceTrigger;
@property(copy) NSNumber * oneTimeOnly;
@property(retain) SALocation * requestedLocation;

+ (id)geoFenceSetWithDictionary:(id)arg1 context:(id)arg2;
+ (id)geoFenceSet;

- (void)setOneTimeOnly:(id)arg1;
- (id)oneTimeOnly;
- (void)setFenceType:(id)arg1;
- (id)fenceType;
- (void)setGeoFenceTrigger:(id)arg1;
- (id)geoFenceTrigger;
- (void)setRequestedLocation:(id)arg1;
- (id)requestedLocation;
- (void)setFriend:(id)arg1;
- (id)friend;
- (void)setEnable:(id)arg1;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)enable;
- (id)groupIdentifier;

@end
