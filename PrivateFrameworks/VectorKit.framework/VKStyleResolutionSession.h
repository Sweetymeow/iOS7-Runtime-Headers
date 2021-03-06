/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class NSMutableDictionary, VKStylesheet, NSMapTable;

@interface VKStyleResolutionSession : NSObject  {
    VKStylesheet *_stylesheet;
    NSMapTable *_attrToStyle;
    NSMapTable *_genericShieldAttrToStyle;
    NSMapTable *_styleToGroup;
    NSMutableDictionary *_localeToAttrToStyle;
    int _vectorType;
}


- (void)removeFeature:(struct { id x1; char *x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned long long x8; BOOL x9; unsigned long long x10; float x11; id x12; int x13; }*)arg1;
- (void)evaluateFeatureAttributes:(id)arg1 updateGroup:(id)arg2;
- (id)evaluateFeature:(struct { id x1; char *x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned long long x8; BOOL x9; unsigned long long x10; float x11; id x12; int x13; }*)arg1 createNewGroup:(id)arg2 appendToGroup:(id)arg3;
- (id)evaluateFeature:(struct { id x1; char *x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned long long x8; BOOL x9; unsigned long long x10; float x11; id x12; int x13; }*)arg1;
- (BOOL)usesStyleSheet:(id)arg1 vectorType:(int)arg2;
- (id)initWithStylesheet:(id)arg1 vectorType:(int)arg2;
- (id)_attrToStyleTableForLocale:(id)arg1;
- (id)evaluateFeature:(struct { id x1; char *x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned long long x8; BOOL x9; unsigned long long x10; float x11; id x12; int x13; }*)arg1 locale:(id)arg2;
- (id)allGroups;
- (void)dealloc;

@end
