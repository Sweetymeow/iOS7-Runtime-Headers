/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CHDDataValuesCollection : NSObject  {
    struct __CFData { } *mPackedValues;
    unsigned int mDataValueCount;
    struct __CFDictionary { } *mIndexToDataValueMap;
    boolmContainsStringValue;
}


- (bool)containsStringValue;
- (id)dataValueWithIndex:(unsigned int)arg1;
- (bool)addDataValue:(id)arg1;
- (void)resetWithDataPointCount:(unsigned int)arg1;
- (struct CHDDataPoint { unsigned int x1; struct EDValue { int x_2_1_1; union { boolx_2_2_1; double x_2_2_2; id x_2_2_3; unsigned int x_2_2_4; int x_2_2_5; } x_2_1_2; } x2; unsigned int x3; }*)dataPointWithIndex:(unsigned int)arg1;
- (void)setupBufferForValues:(unsigned int)arg1;
- (id)initWithDataPointCount:(unsigned int)arg1;
- (struct CHDDataPoint { unsigned int x1; struct EDValue { int x_2_1_1; union { boolx_2_2_1; double x_2_2_2; id x_2_2_3; unsigned int x_2_2_4; int x_2_2_5; } x_2_1_2; } x2; unsigned int x3; }*)dataPointAtIndex:(unsigned int)arg1;
- (void)finishReading;
- (bool)addDataPoint:(struct CHDDataPoint { unsigned int x1; struct EDValue { int x_2_1_1; union { boolx_2_2_1; double x_2_2_2; id x_2_2_3; unsigned int x_2_2_4; int x_2_2_5; } x_2_1_2; } x2; unsigned int x3; }*)arg1;
- (id)dataValueAtIndex:(unsigned int)arg1;
- (id)init;
- (unsigned int)count;
- (void)dealloc;
- (void)cleanup;

@end
