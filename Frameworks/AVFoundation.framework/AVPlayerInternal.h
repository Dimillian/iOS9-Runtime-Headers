/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVPlayerInternal : NSObject {
    BOOL  allowsOutOfBandTextTrackRendering;
    AVAudioSessionMediaPlayerOnly * audioSessionMediaPlayerOnly;
    BOOL  autoSwitchStreamVariants;
    NSHashTable * avPlayerLayers;
    struct CGSize { 
        float width; 
        float height; 
    }  cachedDisplaySize;
    NSDictionary * cachedFigMediaSelectionCriteriaProperty;
    NSMutableSet * closedCaptionLayers;
    AVPlayerItem * currentItem;
    <AVCallbackCancellation> * currentItemPreferredPixelBufferAttributesCallbackInvoker;
    NSObject<OS_dispatch_queue> * currentItemPropertyUpdateQueue;
    <AVCallbackCancellation> * currentItemSuppressesVideoLayersCallbackInvoker;
    NSArray * displaysUsedForPlayback;
    NSError * error;
    NSArray * expectedAssetTypes;
    NSString * externalPlaybackVideoGravity;
    NSObject<OS_dispatch_queue> * figConfigurationQueue;
    struct OpaqueCMClock { } * figMasterClock;
    struct OpaqueFigPlaybackItem { } * figPlaybackItemToIdentifyNextCurrentItem;
    struct OpaqueFigPlayer { } * figPlayer;
    BOOL  hadAssociatedOnscreenPlayerLayerWhenSuspended;
    BOOL  hostApplicationInForeground;
    BOOL  iapdExtendedModeIsActive;
    NSMutableSet * items;
    NSArray * itemsInFigPlayQueue;
    NSObject<OS_dispatch_queue> * ivarAccessQueue;
    AVPlayerItem * lastItem;
    NSObject<OS_dispatch_queue> * layersQ;
    BOOL  logPerformanceData;
    BOOL  needsToCreateFigPlayer;
    int  nextPrerollIDToGenerate;
    AVOutputContext * outputContext;
    NSMutableDictionary * pendingFigPlayerProperties;
    int  pendingPrerollID;
    AVPixelBufferAttributeMediator * pixelBufferAttributeMediator;
    BOOL  preparesItemsForPlaybackAsynchronously;
    id /* block */  prerollCompletionHandler;
    struct OpaqueFigSimpleMutex { } * prerollIDMutex;
    AVPropertyStorage * propertyStorage;
    struct OpaqueCMTimebase { } * proxyTimebase;
    BOOL  reevaluateBackgroundPlayback;
    NSObject<OS_dispatch_queue> * stateDispatchQueue;
    int  status;
    NSMutableSet * subtitleLayers;
    NSDictionary * vibrationPattern;
    struct __CFDictionary { } * videoLayers;
    AVWeakReference * weakReference;
}

@end
