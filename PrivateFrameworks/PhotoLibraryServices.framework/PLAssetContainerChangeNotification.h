/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSObject<PLAlbumProtocol>, <PLAssetContainer>, NSDictionary;

@interface PLAssetContainerChangeNotification : PLContainerChangeNotification  {
    BOOL _titleDidChange;
    BOOL _keyAssetDidChange;
    NSDictionary *_userInfo;
}

@property(readonly) <PLAssetContainer> * container;
@property(readonly) NSObject<PLAlbumProtocol> * album;
@property(readonly) BOOL titleDidChange;
@property(readonly) BOOL keyAssetDidChange;

+ (id)notificationWithContainer:(id)arg1 snapshot:(id)arg2 changedAssets:(id)arg3;

- (id)_contentRelationshipName;
- (BOOL)keyAssetDidChange;
- (BOOL)titleDidChange;
- (BOOL)_getOldSet:(id*)arg1 newSet:(id*)arg2;
- (id)assetContainer;
- (void)_calculateDiffs;
- (struct NSObject { Class x1; }*)album;
- (id)name;
- (id)userInfo;
- (void)dealloc;
- (id)description;
- (id)container;

@end
