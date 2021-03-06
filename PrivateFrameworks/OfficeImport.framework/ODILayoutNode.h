/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class ODDPoint, ODDShape, NSMutableArray, ODDAlgorithm;

@interface ODILayoutNode : NSObject  {
    ODDPoint *mPoint;
    ODDAlgorithm *mAlgorithm;
    ODDShape *mShape;
    NSMutableArray *mChildren;
}


- (void)processShape:(id)arg1 state:(struct ODILayoutNodeState { id x1; BOOL x2; }*)arg2;
- (void)processAlgorithm:(id)arg1 state:(struct ODILayoutNodeState { id x1; BOOL x2; }*)arg2;
- (void)processForEach:(id)arg1 state:(struct ODILayoutNodeState { id x1; BOOL x2; }*)arg2;
- (void)processChoose:(id)arg1 state:(struct ODILayoutNodeState { id x1; BOOL x2; }*)arg2;
- (void)processLayoutNode:(id)arg1 state:(struct ODILayoutNodeState { id x1; BOOL x2; }*)arg2;
- (void)processLayoutObjects:(id)arg1 state:(struct ODILayoutNodeState { id x1; BOOL x2; }*)arg2;
- (id)initWithLayoutNode:(id)arg1 point:(id)arg2;
- (id)initWithLayoutNode:(id)arg1 state:(struct ODILayoutNodeState { id x1; BOOL x2; }*)arg2;
- (void)dealloc;

@end
