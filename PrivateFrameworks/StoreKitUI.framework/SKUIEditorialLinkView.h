/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class UIColor, SKUIEditorialLinkLayout, <SKUIEditorialLinkViewDelegate>, NSMutableArray;

@interface SKUIEditorialLinkView : UIView  {
    NSMutableArray *_buttons;
    <SKUIEditorialLinkViewDelegate> *_delegate;
    UIColor *_highlightedTextColor;
    int _horizontalAlignment;
    SKUIEditorialLinkLayout *_layout;
    UIColor *_textColor;
}

@property <SKUIEditorialLinkViewDelegate> * delegate;
@property int horizontalAlignment;
@property(retain) SKUIEditorialLinkLayout * linkLayout;


- (id)linkLayout;
- (void)setLinkLayout:(id)arg1;
- (void)_linkButtonAction:(id)arg1;
- (void)setColoringWithColorScheme:(id)arg1;
- (void)setHorizontalAlignment:(int)arg1;
- (int)horizontalAlignment;
- (void)setBackgroundColor:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (id)delegate;
- (id)_newButton;
- (void)tintColorDidChange;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)layoutSubviews;

@end
