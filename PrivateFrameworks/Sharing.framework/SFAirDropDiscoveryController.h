/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@class <SFAirDropDiscoveryControllerDelegate>, <SFAirDropDiscoveryActionSheetDelegate>, UIActionSheet;

@interface SFAirDropDiscoveryController : NSObject <UIActionSheetDelegate> {
    BOOL _isVisible;
    struct __SFOperation { } *_controller;
    UIActionSheet *_actionSheet;
    int _discoverableMode;
    <SFAirDropDiscoveryControllerDelegate> *_delegate;
    <SFAirDropDiscoveryActionSheetDelegate> *_actionSheetDelegate;
}

@property(getter=isVisible,readonly) BOOL visible;
@property int discoverableMode;
@property <SFAirDropDiscoveryControllerDelegate> * delegate;
@property <SFAirDropDiscoveryActionSheetDelegate> * actionSheetDelegate;


- (void)setActionSheetDelegate:(id)arg1;
- (id)actionSheetDelegate;
- (int)discoverableMode;
- (id)discoverableModeActionSheet;
- (void)handleOperationCallback:(struct __SFOperation { }*)arg1 event:(long)arg2 withResults:(id)arg3;
- (void)setDiscoverableMode:(int)arg1;
- (id)discoverableModeToString:(int)arg1;
- (int)operationDiscoverableModeToInteger:(id)arg1;
- (BOOL)isVisible;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (id)delegate;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)actionSheet:(id)arg1 willDismissWithButtonIndex:(int)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;

@end
