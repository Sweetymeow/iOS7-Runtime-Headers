/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSOperationQueue, SKUIClientContext, SKUICountdown, UIImageView, UILabel, NSTimer, SKUICountdownViewTimerTarget, NSMutableArray, NSNumberFormatter, UIImage;

@interface SKUICountdownView : UIView  {
    SKUIClientContext *_clientContext;
    SKUICountdown *_countdown;
    NSTimer *_timer;
    SKUICountdownViewTimerTarget *_timerTarget;
    UILabel *_dateDescriptionLabelDay;
    UILabel *_dateDescriptionLabelHour;
    UILabel *_dateDescriptionLabelMinute;
    UILabel *_dateDescriptionLabelSecond;
    UILabel *_dateLabelDay;
    UILabel *_dateLabelHour;
    UILabel *_dateLabelMinute;
    UILabel *_dateLabelSecond;
    NSMutableArray *_dateFlapLabels;
    NSMutableArray *_numberFlapLabels;
    NSMutableArray *_numberSeparatorLabels;
    UIImageView *_imageView;
    UILabel *_numberLabel;
    NSNumberFormatter *_numberFormatter;
    NSOperationQueue *_operationQueue;
    float _factor;
}

@property(readonly) SKUICountdown * countdown;
@property(readonly) SKUIClientContext * clientContext;
@property(retain) UIImage * backgroundImage;


- (id)countdown;
- (id)initWithCountdown:(id)arg1 clientContext:(id)arg2;
- (id)_newDateLabel;
- (id)_newDateDescriptionLabel;
- (void)_currentRemainingDays:(int*)arg1 hours:(int*)arg2 minutes:(int*)arg3 seconds:(int*)arg4;
- (id)_newFlapLabelWithPosition:(int)arg1;
- (id)_newNumberSeparatorLabel;
- (long long)_currentValue;
- (void)_reloadTime;
- (void)_reloadDateDescriptions:(BOOL)arg1;
- (void)_reloadTimeFlapped;
- (void)_reloadNumber;
- (void)_reloadNumberFlapped;
- (void)_reload;
- (void)_setCountdownWithResponse:(id)arg1 error:(id)arg2;
- (id)clientContext;
- (void)_reloadFontSizes;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (void)setBackgroundImage:(id)arg1;
- (id)backgroundImage;
- (void)layoutSubviews;
- (void)stop;
- (void)start;

@end
