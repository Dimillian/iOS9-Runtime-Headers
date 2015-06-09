/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetMediaSelectionGroup : AVMediaSelectionGroup {
    AVAsset * _asset;
    AVMediaSelectionOption * _defaultOption;
    NSDictionary * _dictionary;
    BOOL  _isStreamingGroup;
    NSArray * _options;
}

- (BOOL)_isStreamingGroup;
- (id)_optionWithID:(id)arg1 displaysNonForcedSubtitles:(BOOL)arg2;
- (id)_optionWithID:(id)arg1 identifier:(id)arg2 source:(id)arg3 displaysNonForcedSubtitles:(BOOL)arg4;
- (id)asset;
- (void)dealloc;
- (id)defaultOption;
- (id)dictionary;
- (unsigned int)hash;
- (id)init;
- (id)initWithAsset:(id)arg1 dictionary:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)mediaSelectionOptionWithPropertyList:(id)arg1;
- (id)options;

@end
