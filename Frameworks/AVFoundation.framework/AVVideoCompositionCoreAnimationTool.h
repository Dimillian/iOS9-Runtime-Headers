/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVVideoCompositionCoreAnimationTool : NSObject {
    AVVideoCompositionCoreAnimationToolInternal * _videoCompositionTool;
}

+ (id)videoCompositionCoreAnimationToolWithAdditionalLayer:(id)arg1 asTrackID:(int)arg2;
+ (id)videoCompositionCoreAnimationToolWithPostProcessingAsVideoLayer:(id)arg1 inLayer:(id)arg2;
+ (id)videoCompositionCoreAnimationToolWithPostProcessingAsVideoLayers:(id)arg1 inLayer:(id)arg2;

- (int)_auxiliaryTrackID;
- (id)_auxiliaryTrackLayer;
- (BOOL)_hasLayerAsAuxiliaryTrack;
- (BOOL)_hasPostProcessingLayers;
- (id)_postProcessingRootLayer;
- (id)_postProcessingVideoLayers;
- (void)dealloc;
- (void)finalize;
- (id)initWithMagicTrackID:(int)arg1 animationLayer:(id)arg2 videoLayers:(id)arg3;

@end
