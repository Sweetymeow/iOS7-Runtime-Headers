/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUIColorScheme, UIColor;

@interface SKUIProductImageDataConsumer : SKUIImageDataConsumer <NSCopying> {
    UIColor *_backgroundColor;
    struct CGSize { 
        float width; 
        float height; 
    } _iconSize;
    SKUIColorScheme *_colorScheme;
}

@property(readonly) struct CGSize { float x1; float x2; } iconSize;
@property(retain) UIColor * backgroundColor;
@property(retain) SKUIColorScheme * colorScheme;

+ (id)purchasedConsumer;
+ (id)updatesConsumer;
+ (id)swooshConsumer;
+ (id)productPageConsumer;
+ (id)wishlistConsumer;
+ (id)gridConsumer;
+ (id)chartsConsumer;
+ (id)lockupConsumerWithSize:(int)arg1 itemKind:(int)arg2;
+ (id)giftThemeLetterboxConsumer;
+ (id)giftThemePosterConsumer;
+ (id)giftThemeConsumer;
+ (id)giftResultConsumer;
+ (id)giftComposeLetterboxConsumer;
+ (id)giftComposePosterConsumer;
+ (id)giftComposeConsumer;
+ (id)consumerWithSize:(struct CGSize { float x1; float x2; })arg1;
+ (id)cardConsumer;
+ (id)smartBannerConsumer;

- (id)imageForSize:(struct CGSize { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })iconSize;
- (id)imageForColor:(id)arg1;
- (id)imageForImage:(id)arg1;
- (void)setColorScheme:(id)arg1;
- (id)colorScheme;
- (void)setBackgroundColor:(id)arg1;
- (id)backgroundColor;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
