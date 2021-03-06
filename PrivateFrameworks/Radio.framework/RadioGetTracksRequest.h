/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/Radio.framework/Radio
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class RadioStation, NSArray, SSURLConnectionRequest;

@interface RadioGetTracksRequest : RadioRequest  {
    unsigned long long _globalVersion;
    BOOL _includeCleanTracksOnly;
    unsigned int _numberOfTracks;
    BOOL _replaceExistingTracks;
    SSURLConnectionRequest *_request;
    RadioStation *_station;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _storeIdentifiersBlock;

    NSArray *_tracksToRemove;
}

@property(copy) id storeIdentifiersBlock;
@property unsigned int numberOfTracks;
@property BOOL includeCleanTracksOnly;
@property BOOL replaceExistingTracks;
@property(copy) NSArray * tracksToRemove;


- (void)setTracksToRemove:(id)arg1;
- (id)tracksToRemove;
- (void)setReplaceExistingTracks:(BOOL)arg1;
- (BOOL)replaceExistingTracks;
- (unsigned int)numberOfTracks;
- (id)storeIdentifiersBlock;
- (void)startWithGetTracksCompletionHandler:(id)arg1;
- (BOOL)includeCleanTracksOnly;
- (void)setIncludeCleanTracksOnly:(BOOL)arg1;
- (void)setNumberOfTracks:(unsigned int)arg1;
- (id)initWithStation:(id)arg1 globalVersion:(unsigned long long)arg2;
- (void)startWithCompletionHandler:(id)arg1;
- (void)setStoreIdentifiersBlock:(id)arg1;
- (id)init;
- (void).cxx_destruct;
- (void)cancel;

@end
