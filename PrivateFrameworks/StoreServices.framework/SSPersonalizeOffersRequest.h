/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class <SSPersonalizeOffersDelegate>, NSArray;

@interface SSPersonalizeOffersRequest : SSRequest <SSXPCCoding> {
    NSArray *_items;
}

@property(readonly) NSArray * items;
@property <SSPersonalizeOffersDelegate> * delegate;


- (void)startWithPersonalizedResponseBlock:(id)arg1;
- (void)startWithCompletionBlock:(id)arg1;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (id)items;
- (void)dealloc;
- (id)initWithItems:(id)arg1;
- (BOOL)start;

@end
