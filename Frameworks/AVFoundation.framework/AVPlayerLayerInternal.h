/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVPlayerLayerInternal : NSObject {
    AVPlayer * _player;
    AVPlayerLayer * associatedPlayerLayerForPIP;
    BOOL  canEnterPIPMode;
    CALayer * closedCaptionLayer;
    BOOL  hasPlayerToObserve;
    BOOL  isObservingPlayer;
    BOOL  isPIPModeEnabled;
    BOOL  isPresentationLayer;
    BOOL  isReadyForDisplay;
    struct OpaqueFigSimpleMutex { } * isReadyForDisplayMutex;
    AVPlayerItem * itemMarkedReadyForDisplay;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  latestPlayerLayerBoundsAtRendering;
    struct CGSize { 
        float width; 
        float height; 
    }  latestPresentationSizeAtRendering;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  latestSubtitleLayoutAtRendering;
    CALayer * maskLayer;
    NSDictionary * pixelBufferAttributes;
    struct CGSize { 
        float width; 
        float height; 
    }  presentationSize;
    NSObject<OS_dispatch_queue> * serialQueue;
    BOOL  shouldObservePlayer;
    NSString * subtitleGravity;
    FigSubtitleCALayer * subtitleLayer;
    NSString * videoGravity;
    CALayer * videoLayer;
    BOOL  willManageVideoLayerAsSwappedLayer;
}

@end
