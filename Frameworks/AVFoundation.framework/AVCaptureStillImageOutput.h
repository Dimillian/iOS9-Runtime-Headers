/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureStillImageOutput : AVCaptureOutput {
    AVCaptureStillImageOutputInternal * _internal;
}

@property (nonatomic) BOOL automaticallyEnablesStillImageStabilizationWhenAvailable;
@property (nonatomic, readonly) NSArray *availableImageDataCVPixelFormatTypes;
@property (nonatomic, readonly) NSArray *availableImageDataCodecTypes;
@property (getter=isCapturingStillImage, readonly) BOOL capturingStillImage;
@property (getter=isHighResolutionStillImageOutputEnabled, nonatomic) BOOL highResolutionStillImageOutputEnabled;
@property (nonatomic, copy) NSDictionary *outputSettings;
@property (getter=isStillImageStabilizationActive, nonatomic, readonly) BOOL stillImageStabilizationActive;
@property (getter=isStillImageStabilizationSupported, nonatomic, readonly) BOOL stillImageStabilizationSupported;

+ (struct CGImage { }*)cgImageForBGRASurface:(void*)arg1 size:(unsigned long)arg2;
+ (void)initialize;
+ (id)jpegStillImageNSDataRepresentation:(struct opaqueCMSampleBuffer { }*)arg1;
+ (id)jpegStillImageNSDataRepresentationForSurface:(void*)arg1 size:(unsigned long)arg2 metadata:(id)arg3;
+ (unsigned long)maxStillImageJPEGDataSize;

- (int)HDRMode;
- (BOOL)_bracketedSettingsAreValid:(id)arg1 fromConnection:(id)arg2 exceptionReason:(id*)arg3;
- (id)_figCaptureStillImageSettingsForBracketedCaptureSettingsArray:(id)arg1 fromConnection:(id)arg2;
- (id)_figCaptureStillImageSettingsForConnection:(id)arg1;
- (BOOL)_preparedForBracketedCaptureWithSettings:(id)arg1;
- (void)_setStillImageStabilizationAutomaticallyEnabled:(BOOL)arg1;
- (void)_updateLensStabilizationDuringBracketedCaptureSupportedForDevice:(id)arg1;
- (void)_updateMaxBracketedStillImageCaptureCountForSourceFormat:(id)arg1;
- (id)addConnection:(id)arg1 error:(id*)arg2;
- (void)attachSafelyToFigCaptureSession:(struct OpaqueFigCaptureSession { }*)arg1;
- (BOOL)automaticallyEnablesStillImageStabilizationWhenAvailable;
- (id)availableImageDataCVPixelFormatTypes;
- (id)availableImageDataCodecTypes;
- (BOOL)canAddConnectionForMediaType:(id)arg1;
- (void)captureStillImageAsynchronouslyFromConnection:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)captureStillImageBracketAsynchronouslyFromConnection:(id)arg1 withSettingsArray:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)captureStillImageSurfaceAsynchronouslyFromConnection:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)clearPreparedBracketIfNeeded;
- (id)connectionMediaTypes;
- (void)dealloc;
- (void)detachSafelyFromFigCaptureSession:(struct OpaqueFigCaptureSession { }*)arg1;
- (id)firstActiveConnection;
- (void)handleNotification:(id)arg1 payload:(id)arg2;
- (void)handleNotificationForPrepareRequest:(id)arg1 withPayload:(id)arg2;
- (void)handleNotificationForRequest:(id)arg1 withPayload:(id)arg2 imageIsEV0:(BOOL*)arg3;
- (BOOL)highResolutionStillImageOutputEnabledChangeCausesCaptureSessionRestart;
- (unsigned long)imageDataFormatType;
- (id)init;
- (BOOL)isCapturingStillImage;
- (BOOL)isEV0CaptureEnabled;
- (BOOL)isHDRCaptureEnabled;
- (BOOL)isHDRSupported;
- (BOOL)isHighResolutionStillImageOutputEnabled;
- (BOOL)isLensStabilizationDuringBracketedCaptureEnabled;
- (BOOL)isLensStabilizationDuringBracketedCaptureSupported;
- (BOOL)isNoiseReductionEnabled;
- (BOOL)isRawCaptureEnabled;
- (BOOL)isRawCaptureSupported;
- (BOOL)isStillImageStabilizationActive;
- (BOOL)isStillImageStabilizationSupported;
- (unsigned int)maxBracketedCaptureStillImageCount;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)outputSettings;
- (struct CGSize { float x1; float x2; })outputSizeForSourceFormat:(id)arg1;
- (void)prepareToCaptureStillImageBracketFromConnection:(id)arg1 withSettingsArray:(id)arg2 completionHandler:(id /* block */)arg3;
- (struct CGSize { float x1; float x2; })previewImageSize;
- (void)removeConnection:(id)arg1;
- (BOOL)resumeVideoProcessing;
- (void)setAutomaticallyEnablesStillImageStabilizationWhenAvailable:(BOOL)arg1;
- (void)setEV0CaptureEnabled:(BOOL)arg1;
- (void)setHDRCaptureEnabled:(BOOL)arg1;
- (void)setHDRMode:(int)arg1;
- (void)setHighResolutionStillImageOutputEnabled:(BOOL)arg1;
- (void)setLensStabilizationDuringBracketedCaptureEnabled:(BOOL)arg1;
- (void)setNoiseReductionEnabled:(BOOL)arg1;
- (void)setOutputSettings:(id)arg1;
- (void)setPreviewImageSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setRawCaptureEnabled:(BOOL)arg1;
- (void)setShutterSound:(unsigned long)arg1;
- (void)setSquareCropEnabled:(BOOL)arg1;
- (void)setSuspendsVideoProcessingDuringStillImageCapture:(BOOL)arg1;
- (unsigned long)shutterSound;
- (BOOL)squareCropEnabled;
- (BOOL)suspendsVideoProcessingDuringStillImageCapture;
- (void)updateSISSupportedForSourceDevice:(id)arg1;

@end
