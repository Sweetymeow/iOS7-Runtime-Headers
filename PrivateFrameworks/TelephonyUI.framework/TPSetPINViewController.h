/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@class TPPasscodeView, UIView, NSString, UILabel, <TPSetPINViewControllerDelegate>, TPSimpleNumberPad;

@interface TPSetPINViewController : UIViewController <TPSimpleNumberPadDelegate> {
    BOOL _confirmPIN;
    <TPSetPINViewControllerDelegate> *_delegate;
    NSString *_promptTextForOldPIN;
    NSString *_promptTextForNewPIN;
    NSString *_promptTextForConfirmingNewPIN;
    NSString *_promptTextForSavingPIN;
    UIView *_customBackgroundView;
    int _initialState;
    int _state;
    unsigned int _minPINLength;
    unsigned int _maxPINLength;
    UILabel *_statusLabel;
    TPPasscodeView *_passcodeView;
    TPSimpleNumberPad *_numberPad;
    NSString *_oldPIN;
    NSString *_unconfirmedPIN;
}

@property <TPSetPINViewControllerDelegate> * delegate;
@property(retain) NSString * promptTextForOldPIN;
@property(retain) NSString * promptTextForNewPIN;
@property(retain) NSString * promptTextForConfirmingNewPIN;
@property(retain) NSString * promptTextForSavingPIN;
@property(retain) UIView * customBackgroundView;
@property int initialState;
@property int state;
@property unsigned int minPINLength;
@property unsigned int maxPINLength;
@property BOOL confirmPIN;
@property(retain) UILabel * statusLabel;
@property(retain) TPPasscodeView * passcodeView;
@property(retain) TPSimpleNumberPad * numberPad;
@property(retain) NSString * oldPIN;
@property(retain) NSString * unconfirmedPIN;


- (void)setCustomBackgroundView:(id)arg1;
- (void)setPromptTextForSavingPIN:(id)arg1;
- (void)setPromptTextForConfirmingNewPIN:(id)arg1;
- (void)setPromptTextForNewPIN:(id)arg1;
- (void)setPromptTextForOldPIN:(id)arg1;
- (void)resetWithErrorPrompt:(id)arg1;
- (id)initForChangePINWithMinLength:(unsigned int)arg1 maxLength:(unsigned int)arg2 confirmPIN:(BOOL)arg3;
- (id)initForNewPINWithMinLength:(unsigned int)arg1 maxLength:(unsigned int)arg2 confirmPIN:(BOOL)arg3;
- (void)simpleNumberPadDeletePressed:(id)arg1;
- (void)simpleNumberPad:(id)arg1 buttonPressedWithCharacter:(id)arg2;
- (id)promptTextForSavingPIN;
- (id)promptTextForConfirmingNewPIN;
- (id)promptTextForNewPIN;
- (id)promptTextForOldPIN;
- (unsigned int)minPINLength;
- (void)_updateStatusLabel;
- (id)numberPad;
- (void)_updateNavBarButtons;
- (void)_updateDeleteAllowed;
- (unsigned int)maxPINLength;
- (id)unconfirmedPIN;
- (id)oldPIN;
- (void)setUnconfirmedPIN:(id)arg1;
- (BOOL)confirmPIN;
- (void)setOldPIN:(id)arg1;
- (void)_setPromptText:(id)arg1 oldPromptTextPointer:(id*)arg2;
- (void)resetWithErrorPrompt:(id)arg1 title:(id)arg2;
- (void)_updateUIForStateChange;
- (int)initialState;
- (void)setPasscodeView:(id)arg1;
- (void)setStatusLabel:(id)arg1;
- (id)customBackgroundView;
- (void)setNumberPad:(id)arg1;
- (void)setInitialState:(int)arg1;
- (id)_initForMinLength:(unsigned int)arg1 maxLength:(unsigned int)arg2 confirmPIN:(BOOL)arg3;
- (void)setConfirmPIN:(BOOL)arg1;
- (void)setMaxPINLength:(unsigned int)arg1;
- (void)setMinPINLength:(unsigned int)arg1;
- (void)_cancelButtonTapped;
- (void)_doneButtonTapped;
- (id)passcodeView;
- (id)statusLabel;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)setState:(int)arg1;
- (int)state;
- (void)loadView;
- (BOOL)wantsFullScreenLayout;

@end
