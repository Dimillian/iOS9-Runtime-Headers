/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureDevice : NSObject {
    AVCaptureDeviceInternal * _internal;
}

@property (nonatomic, retain) AVCaptureDeviceFormat *activeFormat;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } activeVideoMaxFrameDuration;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } activeVideoMinFrameDuration;
@property (getter=isConnected, nonatomic, readonly) BOOL connected;
@property (nonatomic, readonly) NSArray *formats;
@property (nonatomic, readonly) NSString *localizedName;
@property (nonatomic, readonly) NSString *modelID;
@property (nonatomic, readonly) NSString *uniqueID;

+ (id)_devices;
+ (int)authorizationStatusForMediaType:(id)arg1;
+ (id)defaultDeviceWithMediaType:(id)arg1;
+ (id)deviceWithUniqueID:(id)arg1;
+ (id)devices;
+ (id)devicesWithMediaType:(id)arg1;
+ (void)initialize;
+ (void)requestAccessForMediaType:(id)arg1 completionHandler:(id /* block */)arg2;

- (id)AVVideoSettingsForSessionPreset:(id)arg1;
- (float)ISO;
- (float)ISODigitalThreshold;
- (void)_setActiveVideoMaxFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)_setActiveVideoMinFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)_setStillImageStabilizationAutomaticallyEnabled:(BOOL)arg1;
- (void)_setVideoHDREnabled:(BOOL)arg1;
- (BOOL)_startUsingDevice:(id*)arg1;
- (void)_stopUsingDevice;
- (id)activeFormat;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })activeVideoMaxFrameDuration;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })activeVideoMinFrameDuration;
- (int)autoFocusRangeRestriction;
- (BOOL)automaticallyAdjustsImageControlMode;
- (BOOL)automaticallyAdjustsVideoHDREnabled;
- (BOOL)automaticallyEnablesLowLightBoostWhenAvailable;
- (id)availableBoxedMetadataFormatDescriptions;
- (BOOL)cachesFigCaptureSourceConfigurationChanges;
- (void)cancelVideoZoomRamp;
- (struct { float x1; float x2; })chromaticityValuesForDeviceWhiteBalanceGains:(struct { float x1; float x2; float x3; })arg1;
- (void)close;
- (float)contrast;
- (void)dealloc;
- (id)description;
- (struct OpaqueCMClock { }*)deviceClock;
- (int)deviceSourceOrigin;
- (struct { float x1; float x2; float x3; })deviceWhiteBalanceGains;
- (struct { float x1; float x2; float x3; })deviceWhiteBalanceGainsForChromaticityValues:(struct { float x1; float x2; })arg1;
- (struct { float x1; float x2; float x3; })deviceWhiteBalanceGainsForTemperatureAndTintValues:(struct { float x1; float x2; })arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })exposureDuration;
- (int)exposureMode;
- (struct CGPoint { float x1; float x2; })exposurePointOfInterest;
- (float)exposureTargetBias;
- (float)exposureTargetOffset;
- (BOOL)eyeClosedDetectionEnabled;
- (BOOL)eyeDetectionEnabled;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })faceRectangle;
- (int)faceRectangleAngle;
- (int)flashMode;
- (int)focusMode;
- (struct CGPoint { float x1; float x2; })focusPointOfInterest;
- (id)formats;
- (struct { float x1; float x2; float x3; })grayWorldDeviceWhiteBalanceGains;
- (BOOL)hasFlash;
- (BOOL)hasMediaType:(id)arg1;
- (BOOL)hasTorch;
- (int)imageControlMode;
- (id)init;
- (BOOL)isActiveVideoMaxFrameDurationSet;
- (BOOL)isActiveVideoMinFrameDurationSet;
- (BOOL)isAdjustingExposure;
- (BOOL)isAdjustingFocus;
- (BOOL)isAdjustingWhiteBalance;
- (BOOL)isAutoFocusRangeRestrictionSupported;
- (BOOL)isConnected;
- (BOOL)isExposureModeSupported:(int)arg1;
- (BOOL)isExposurePointOfInterestSupported;
- (BOOL)isEyeClosedDetectionSupported;
- (BOOL)isEyeDetectionSupported;
- (BOOL)isFaceDetectionDrivenImageProcessingEnabled;
- (BOOL)isFaceDetectionDuringVideoPreviewSupported;
- (BOOL)isFaceDetectionSupported;
- (BOOL)isFlashActive;
- (BOOL)isFlashAvailable;
- (BOOL)isFlashModeSupported:(int)arg1;
- (BOOL)isFocusModeSupported:(int)arg1;
- (BOOL)isFocusPointOfInterestSupported;
- (BOOL)isHDRSupported;
- (BOOL)isHighDynamicRangeScene;
- (BOOL)isHighDynamicRangeSceneDetectionEnabled;
- (BOOL)isHighDynamicRangeSceneDetectionSupported;
- (BOOL)isImageControlModeSupported:(int)arg1;
- (BOOL)isInUseByAnotherApplication;
- (BOOL)isLensStabilizationSupported;
- (BOOL)isLockedForConfiguration;
- (BOOL)isLowLightBoostEnabled;
- (BOOL)isLowLightBoostSupported;
- (BOOL)isMachineReadableCodeDetectionSupported;
- (BOOL)isOpen;
- (BOOL)isRampingVideoZoom;
- (BOOL)isRawStillImageCaptureSupported;
- (BOOL)isSmileDetectionSupported;
- (BOOL)isSmoothAutoFocusEnabled;
- (BOOL)isSmoothAutoFocusSupported;
- (BOOL)isSubjectAreaChangeMonitoringEnabled;
- (BOOL)isTorchActive;
- (BOOL)isTorchAvailable;
- (BOOL)isTorchModeSupported:(int)arg1;
- (BOOL)isVideoHDREnabled;
- (BOOL)isVideoStabilizationSupported;
- (BOOL)isWhiteBalanceModeSupported:(int)arg1;
- (float)lensAperture;
- (float)lensPosition;
- (id)localizedName;
- (BOOL)lockForConfiguration:(id*)arg1;
- (float)maxExposureTargetBias;
- (struct { int x1; int x2; })maxH264PhotoDimensions;
- (struct { int x1; int x2; })maxH264VideoDimensions;
- (float)maxWhiteBalanceGain;
- (float)minExposureTargetBias;
- (id)modelID;
- (BOOL)open:(id*)arg1;
- (int)position;
- (BOOL)providesStortorgetMetadata;
- (void)rampToVideoZoomFactor:(float)arg1 withRate:(float)arg2;
- (float)saturation;
- (void)setActiveFormat:(id)arg1;
- (void)setActiveVideoMaxFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setActiveVideoMinFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setAutoFocusRangeRestriction:(int)arg1;
- (void)setAutomaticallyAdjustsImageControlMode:(BOOL)arg1;
- (void)setAutomaticallyAdjustsVideoHDREnabled:(BOOL)arg1;
- (void)setAutomaticallyEnablesLowLightBoostWhenAvailable:(BOOL)arg1;
- (void)setCachesFigCaptureSourceConfigurationChanges:(BOOL)arg1;
- (void)setContrast:(float)arg1;
- (void)setExposureMode:(int)arg1;
- (void)setExposureModeCustomWithDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 ISO:(float)arg2 completionHandler:(id /* block */)arg3;
- (void)setExposurePointOfInterest:(struct CGPoint { float x1; float x2; })arg1;
- (void)setExposureTargetBias:(float)arg1 completionHandler:(id /* block */)arg2;
- (void)setEyeClosedDetectionEnabled:(BOOL)arg1;
- (void)setEyeDetectionEnabled:(BOOL)arg1;
- (void)setFaceDetectionDrivenImageProcessingEnabled:(BOOL)arg1;
- (void)setFlashMode:(int)arg1;
- (void)setFocusMode:(int)arg1;
- (void)setFocusModeLockedWithLensPosition:(float)arg1 completionHandler:(id /* block */)arg2;
- (void)setFocusPointOfInterest:(struct CGPoint { float x1; float x2; })arg1;
- (void)setHighDynamicRangeSceneDetectionEnabled:(BOOL)arg1;
- (void)setImageControlMode:(int)arg1;
- (void)setProvidesStortorgetMetadata:(BOOL)arg1;
- (void)setSaturation:(float)arg1;
- (void)setSmileDetectionEnabled:(BOOL)arg1;
- (void)setSmoothAutoFocusEnabled:(BOOL)arg1;
- (void)setSubjectAreaChangeMonitoringEnabled:(BOOL)arg1;
- (void)setTorchMode:(int)arg1;
- (BOOL)setTorchModeOnWithLevel:(float)arg1 error:(id*)arg2;
- (void)setVideoHDREnabled:(BOOL)arg1;
- (void)setVideoZoomFactor:(float)arg1;
- (void)setWhiteBalanceMode:(int)arg1;
- (void)setWhiteBalanceModeLockedWithDeviceWhiteBalanceGains:(struct { float x1; float x2; float x3; })arg1 completionHandler:(id /* block */)arg2;
- (BOOL)smileDetectionEnabled;
- (BOOL)startUsingDevice:(id*)arg1;
- (void)stopUsingDevice;
- (id)supportedMetadataObjectIdentifiers;
- (BOOL)supportsAVCaptureSessionPreset:(id)arg1;
- (struct { float x1; float x2; })temperatureAndTintValuesForDeviceWhiteBalanceGains:(struct { float x1; float x2; float x3; })arg1;
- (float)torchLevel;
- (int)torchMode;
- (id)uniqueID;
- (void)unlockForConfiguration;
- (float)videoZoomFactor;
- (int)whiteBalanceMode;

@end
