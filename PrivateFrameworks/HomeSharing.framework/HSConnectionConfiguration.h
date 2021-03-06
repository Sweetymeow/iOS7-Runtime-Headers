/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

@class NSString, SSAccount, NSDictionary, NSURL;

@interface HSConnectionConfiguration : NSObject <HSXPCCoding, NSCopying, NSMutableCopying> {
    SSAccount *_account;
    NSDictionary *_urlBag;
    NSURL *_baseURL;
    NSString *_buildIdentifier;
    NSString *_purchaseClientIdentifier;
    NSDictionary *_cookieHeaders;
    NSString *_userAgent;
    long long _requestReason;
}

@property(readonly) SSAccount * account;
@property(readonly) NSDictionary * urlBag;
@property(readonly) NSURL * baseURL;
@property(readonly) NSString * buildIdentifier;
@property(readonly) NSString * purchaseClientIdentifier;
@property(readonly) NSDictionary * cookieHeaders;
@property(readonly) NSString * userAgent;
@property(readonly) long long requestReason;


- (id)urlBag;
- (id)_dictonaryFromXPCDictonary:(id)arg1;
- (id)_copyXPCDictonaryFromDictonary:(id)arg1;
- (id)cookieHeaders;
- (long long)requestReason;
- (id)purchaseClientIdentifier;
- (id)buildIdentifier;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (id)userAgent;
- (id)account;
- (id)init;
- (id)baseURL;
- (void)dealloc;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
