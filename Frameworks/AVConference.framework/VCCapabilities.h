/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@interface VCCapabilities : NSObject <NSCoding> {
    BOOL isAudioEnabled;
    BOOL isAudioPausedToStart;
    BOOL isVideoEnabled;
    BOOL isVideoPausedToStart;
    BOOL isDuplexVideoOnly;
    BOOL isDuplexAudioOnly;
    BOOL isKeyExchangeEnabled;
    BOOL isRelayEnabled;
    BOOL isRelayForced;
    BOOL requiresWifi;
    BOOL isDTLSEnabled;
    unsigned int preferredAudioCodec;
    unsigned int actualAudioCodec;
    unsigned int preferredVideoCodec;
    unsigned int actualVideoCodec;
}

@property BOOL isAudioEnabled;
@property BOOL isAudioPausedToStart;
@property BOOL isVideoEnabled;
@property BOOL isVideoPausedToStart;
@property BOOL isDuplexVideoOnly;
@property BOOL isDuplexAudioOnly;
@property BOOL isKeyExchangeEnabled;
@property BOOL isRelayEnabled;
@property BOOL isRelayForced;
@property BOOL requiresWifi;
@property BOOL isDTLSEnabled;
@property unsigned int preferredAudioCodec;
@property unsigned int actualAudioCodec;
@property unsigned int preferredVideoCodec;
@property unsigned int actualVideoCodec;

+ (id)VideoOnlyVCCapabilities;
+ (id)AudioOnlyVCCapabilities;

- (void)setIsRelayForced:(BOOL)arg1;
- (void)setIsKeyExchangeEnabled:(BOOL)arg1;
- (void)setIsRelayEnabled:(BOOL)arg1;
- (void)setIsAudioPausedToStart:(BOOL)arg1;
- (unsigned int)actualVideoCodec;
- (void)setPreferredVideoCodec:(unsigned int)arg1;
- (unsigned int)preferredVideoCodec;
- (unsigned int)actualAudioCodec;
- (id)newEncodedDictionary;
- (void)decodeFromNSDictionary:(id)arg1;
- (void)setIsDuplexVideoOnly:(BOOL)arg1;
- (void)setIsVideoPausedToStart:(BOOL)arg1;
- (void)setIsDuplexAudioOnly:(BOOL)arg1;
- (void)setActualVideoCodec:(unsigned int)arg1;
- (BOOL)isDuplexVideoOnly;
- (BOOL)isDuplexAudioOnly;
- (void)setActualAudioCodec:(unsigned int)arg1;
- (BOOL)isRelayEnabled;
- (BOOL)isRelayForced;
- (BOOL)isVideoPausedToStart;
- (BOOL)isAudioPausedToStart;
- (void)setIsDTLSEnabled:(BOOL)arg1;
- (BOOL)isAudioEnabled;
- (BOOL)isKeyExchangeEnabled;
- (BOOL)isDTLSEnabled;
- (void)setPreferredAudioCodec:(unsigned int)arg1;
- (unsigned int)preferredAudioCodec;
- (id)initWithEncodedDictionary:(id)arg1;
- (BOOL)isVideoEnabled;
- (void)setIsVideoEnabled:(BOOL)arg1;
- (void)setIsAudioEnabled:(BOOL)arg1;
- (void)setRequiresWifi:(BOOL)arg1;
- (BOOL)requiresWifi;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
