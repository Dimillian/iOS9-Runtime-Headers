/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetExportSessionInternal : NSObject {
    NSString * actualOutputFileType;
    AVAsset * asset;
    AVAudioMix * audioMix;
    NSString * audioTimePitchAlgorithm;
    BOOL  canUseFastFrameRateConversion;
    NSObject<OS_dispatch_semaphore> * canUseFastFrameRateConversionSemaphore;
    NSArray * compatibleFileTypes;
    long  compatibleFileTypesDispatchOncePredicate;
    AVCustomVideoCompositorSession * customVideoCompositorSession;
    NSURL * directoryForTemporaryFiles;
    NSError * error;
    void * figVideoCompositor;
    AVAssetTrack * firstVideoTrack;
    id /* block */  handler;
    long long  maxFileSize;
    NSArray * metadata;
    AVMetadataItemFilter * metadataItemFilter;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  minVideoFrameDuration;
    BOOL  optimizeForNetworkUse;
    BOOL  outputFileCreatedByRemaker;
    NSString * outputFileType;
    NSURL * outputURL;
    NSString * preset;
    NSString * preset16x9;
    float  progress;
    NSObject<OS_dispatch_queue> * readWriteQueue;
    struct OpaqueFigRemaker { } * remaker;
    NSObject<OS_dispatch_queue> * remakerNotificationSerializationQueue;
    int  status;
    struct { 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } start; 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } duration; 
    }  timeRange;
    BOOL  useMultiPass;
    AVVideoComposition * videoComposition;
    NSString * videoFrameRateConversionAlgorithm;
    BOOL  waitingForFastFrameRateResponse;
    AVWeakReference * weakReference;
}

@end
