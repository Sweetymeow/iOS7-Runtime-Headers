/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOUIActionCapture : PBCodable <NSCopying> {
    double _duration;
    int _actionType;
    int _sequenceNumber;
    struct { 
        unsigned int duration : 1; 
        unsigned int actionType : 1; 
        unsigned int sequenceNumber : 1; 
    } _has;
}

@property BOOL hasActionType;
@property int actionType;
@property BOOL hasDuration;
@property double duration;
@property BOOL hasSequenceNumber;
@property int sequenceNumber;


- (void)setHasDuration:(BOOL)arg1;
- (void)setHasActionType:(BOOL)arg1;
- (BOOL)hasDuration;
- (void)setActionType:(int)arg1;
- (int)actionType;
- (BOOL)hasActionType;
- (void)setHasSequenceNumber:(BOOL)arg1;
- (BOOL)hasSequenceNumber;
- (void)copyTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (int)sequenceNumber;
- (void)setDuration:(double)arg1;
- (void)setSequenceNumber:(int)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)duration;
- (id)dictionaryRepresentation;

@end
