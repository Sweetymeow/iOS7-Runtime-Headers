/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/FaceCore.framework/FaceCore
 */

@class NSData, NSDictionary;

@interface FCRFace : NSObject  {
    struct { 
        struct CGPoint { 
            float x; 
            float y; 
        } center; 
        struct CGRect { 
            struct CGPoint { 
                float x; 
                float y; 
            } origin; 
            struct CGSize { 
                float width; 
                float height; 
            } size; 
        } bounds; 
    } face;
    struct { 
        struct CGPoint { 
            float x; 
            float y; 
        } center; 
        struct CGRect { 
            struct CGPoint { 
                float x; 
                float y; 
            } origin; 
            struct CGSize { 
                float width; 
                float height; 
            } size; 
        } bounds; 
    } leftEye;
    struct { 
        struct CGPoint { 
            float x; 
            float y; 
        } center; 
        struct CGRect { 
            struct CGPoint { 
                float x; 
                float y; 
            } origin; 
            struct CGSize { 
                float width; 
                float height; 
            } size; 
        } bounds; 
    } rightEye;
    struct { 
        struct CGPoint { 
            float x; 
            float y; 
        } center; 
        struct CGRect { 
            struct CGPoint { 
                float x; 
                float y; 
            } origin; 
            struct CGSize { 
                float width; 
                float height; 
            } size; 
        } bounds; 
    } mouth;
    float faceSize;
    float faceAngle;
    int trackID;
    unsigned int trackDuration;
    NSData *faceprint;
    int faceType;
    NSDictionary *faceLandmarkPoints;
    NSDictionary *expressionFeatures;
}

@property struct { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_2_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_2_1_2; } x2; } face;
@property struct { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_2_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_2_1_2; } x2; } leftEye;
@property struct { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_2_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_2_1_2; } x2; } rightEye;
@property struct { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_2_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_2_1_2; } x2; } mouth;
@property float faceSize;
@property float faceAngle;
@property int trackID;
@property unsigned int trackDuration;
@property(retain) NSData * faceprint;
@property int faceType;
@property(retain) NSDictionary * faceLandmarkPoints;
@property(retain) NSDictionary * expressionFeatures;
@property(readonly) BOOL hasLeftEyeBounds;
@property(readonly) BOOL hasRightEyeBounds;
@property(readonly) BOOL hasMouthBounds;


- (void)setTrackID:(int)arg1;
- (int)trackID;
- (void)setTrackDuration:(unsigned int)arg1;
- (unsigned int)trackDuration;
- (void)setRightEye:(struct { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_2_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_2_1_2; } x2; })arg1;
- (struct { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_2_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_2_1_2; } x2; })rightEye;
- (void)setMouth:(struct { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_2_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_2_1_2; } x2; })arg1;
- (struct { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_2_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_2_1_2; } x2; })mouth;
- (void)setLeftEye:(struct { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_2_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_2_1_2; } x2; })arg1;
- (struct { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_2_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_2_1_2; } x2; })leftEye;
- (void)setFaceprint:(id)arg1;
- (id)faceprint;
- (void)setFaceType:(int)arg1;
- (int)faceType;
- (void)setFaceSize:(float)arg1;
- (float)faceSize;
- (void)setFaceLandmarkPoints:(id)arg1;
- (id)faceLandmarkPoints;
- (void)setFace:(struct { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_2_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_2_1_2; } x2; })arg1;
- (struct { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_2_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_2_1_2; } x2; })face;
- (void)setFaceAngle:(float)arg1;
- (float)faceAngle;
- (void)setExpressionFeatures:(id)arg1;
- (id)expressionFeatures;
- (BOOL)hasMouthBounds;
- (BOOL)hasRightEyeBounds;
- (BOOL)hasLeftEyeBounds;
- (void)dealloc;

@end
