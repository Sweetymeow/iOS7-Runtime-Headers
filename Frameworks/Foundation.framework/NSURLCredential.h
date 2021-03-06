/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSURLCredentialInternal;

@interface NSURLCredential : NSObject <NSSecureCoding, NSCopying> {
    NSURLCredentialInternal *_internal;
}

+ (id)credentialForTrust:(struct __SecTrust { }*)arg1;
+ (id)credentialWithIdentity:(struct __SecIdentity { }*)arg1 certificates:(id)arg2 persistence:(unsigned int)arg3;
+ (id)credentialWithUser:(id)arg1 password:(id)arg2 persistence:(unsigned int)arg3;
+ (BOOL)supportsSecureCoding;

- (id)password;
- (id)user;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)_initWithCFURLCredential:(struct _CFURLCredential { }*)arg1;
- (struct _CFURLCredential { }*)_cfurlcredential;
- (id)certificates;
- (struct __SecIdentity { }*)identity;
- (unsigned int)persistence;
- (BOOL)hasPassword;
- (id)initWithTrust:(struct __SecTrust { }*)arg1;
- (id)initWithIdentity:(struct __SecIdentity { }*)arg1 certificates:(id)arg2 persistence:(unsigned int)arg3;
- (id)initWithUser:(id)arg1 password:(id)arg2 persistence:(unsigned int)arg3;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
