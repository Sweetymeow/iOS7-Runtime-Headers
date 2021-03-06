/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSString;

@interface GEOTrafficIncident : PBCodable <NSCopying> {
    double _endTime;
    double _lastUpdated;
    double _startTime;
    long long _uID;
    NSString *_info;
    NSString *_location;
    NSString *_title;
    int _type;
    int _vertexCount;
    int _vertexOffset;
    struct { 
        unsigned int endTime : 1; 
        unsigned int lastUpdated : 1; 
        unsigned int startTime : 1; 
        unsigned int uID : 1; 
        unsigned int type : 1; 
        unsigned int vertexCount : 1; 
        unsigned int vertexOffset : 1; 
    } _has;
}

@property BOOL hasUID;
@property long long uID;
@property(readonly) BOOL hasTitle;
@property(retain) NSString * title;
@property(readonly) BOOL hasInfo;
@property(retain) NSString * info;
@property(readonly) BOOL hasLocation;
@property(retain) NSString * location;
@property BOOL hasVertexOffset;
@property int vertexOffset;
@property BOOL hasVertexCount;
@property int vertexCount;
@property BOOL hasStartTime;
@property double startTime;
@property BOOL hasEndTime;
@property double endTime;
@property BOOL hasLastUpdated;
@property double lastUpdated;
@property BOOL hasType;
@property int type;


- (void)setHasLastUpdated:(BOOL)arg1;
- (void)setHasEndTime:(BOOL)arg1;
- (void)setHasStartTime:(BOOL)arg1;
- (void)setHasVertexCount:(BOOL)arg1;
- (void)setHasVertexOffset:(BOOL)arg1;
- (void)setLastUpdated:(double)arg1;
- (double)lastUpdated;
- (BOOL)hasLastUpdated;
- (BOOL)hasEndTime;
- (BOOL)hasStartTime;
- (BOOL)hasVertexCount;
- (BOOL)hasVertexOffset;
- (BOOL)hasInfo;
- (BOOL)hasTitle;
- (void)setVertexCount:(int)arg1;
- (void)setVertexOffset:(int)arg1;
- (int)vertexOffset;
- (BOOL)hasLocation;
- (void)setHasUID:(BOOL)arg1;
- (void)setUID:(long long)arg1;
- (BOOL)hasUID;
- (void)setHasType:(BOOL)arg1;
- (double)endTime;
- (void)setEndTime:(double)arg1;
- (long long)uID;
- (BOOL)hasType;
- (void)copyTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)location;
- (void)setTitle:(id)arg1;
- (id)title;
- (int)vertexCount;
- (void)setType:(int)arg1;
- (void)setLocation:(id)arg1;
- (void)setInfo:(id)arg1;
- (id)info;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)startTime;
- (void)setStartTime:(double)arg1;
- (int)type;
- (id)dictionaryRepresentation;

@end
