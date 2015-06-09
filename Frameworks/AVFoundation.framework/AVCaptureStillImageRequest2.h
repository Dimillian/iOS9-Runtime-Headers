/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureStillImageRequest2 : NSObject {
    unsigned int  _callbacksFired;
    AVWeakReferencingDelegateStorage * _delegateStorage;
    unsigned int  _firedCallbackFlags;
    AVCaptureStillImageOutput2ResolvedSettings * _resolvedSettings;
    AVCaptureStillImageSettings2 * _unresolvedSettings;
}

@property (readonly) AVWeakReferencingDelegateStorage *delegateStorage;
@property (nonatomic) unsigned int firedCallbackFlags;
@property (nonatomic, retain) AVCaptureStillImageOutput2ResolvedSettings *resolvedSettings;
@property (readonly) AVCaptureStillImageSettings2 *unresolvedSettings;

+ (id)requestWithDelegate:(id)arg1 settings:(id)arg2;

- (void)dealloc;
- (id)delegateStorage;
- (unsigned int)firedCallbackFlags;
- (id)initWithDelegate:(id)arg1 settings:(id)arg2;
- (id)resolvedSettings;
- (void)setFiredCallbackFlags:(unsigned int)arg1;
- (void)setResolvedSettings:(id)arg1;
- (id)unresolvedSettings;

@end
