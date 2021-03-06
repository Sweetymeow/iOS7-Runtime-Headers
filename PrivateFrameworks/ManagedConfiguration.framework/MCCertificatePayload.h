/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSDate, NSData, NSString;

@interface MCCertificatePayload : MCPayload  {
    NSData *_certificatePersistentID;
    NSString *_installedOnDeviceID;
}

@property(copy) NSString * installedOnDeviceID;
@property(retain) NSData * certificatePersistentID;
@property(readonly) BOOL isRoot;
@property(readonly) BOOL isIdentity;
@property(readonly) NSDate * expiry;
@property(readonly) BOOL isSigned;


- (void)setInstalledOnDeviceID:(id)arg1;
- (void)setCertificatePersistentID:(id)arg1;
- (BOOL)isSigned;
- (BOOL)isRoot;
- (id)certificatePersistentID;
- (id)installedOnDeviceID;
- (BOOL)isIdentity;
- (struct __SecIdentity { }*)copyIdentityFromKeychain;
- (struct __SecCertificate { }*)copyCertificate;
- (id)subtitle2Description;
- (id)subtitle2Label;
- (id)expiry;
- (id)subtitle1Description;
- (id)subtitle1Label;
- (id)stubDictionary;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (id)title;
- (void).cxx_destruct;
- (id)description;

@end
