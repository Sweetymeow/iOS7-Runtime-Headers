/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class NSString;

@interface DAMessageMoveRequest : NSObject  {
    NSString *_message;
    NSString *_fromFolder;
    NSString *_toFolder;
    id _context;
}

@property(readonly) NSString * message;
@property(readonly) NSString * fromFolder;
@property(readonly) NSString * toFolder;
@property(retain) id context;


- (id)toFolder;
- (id)fromFolder;
- (id)initMoveRequestWithMessage:(id)arg1 fromFolder:(id)arg2 toFolder:(id)arg3;
- (id)context;
- (void)setContext:(id)arg1;
- (id)message;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;
- (id)description;

@end
