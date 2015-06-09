/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetWriterInputNoMorePassesHelper : AVAssetWriterInputHelper {
    AVAssetWriterInputWritingHelper * _writingHelper;
}

- (BOOL)appendPixelBuffer:(struct __CVBuffer { }*)arg1 withPresentationTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (int)appendSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 error:(id*)arg2;
- (BOOL)canPerformMultiplePasses;
- (id)currentPassDescription;
- (void)dealloc;
- (id)initWithConfigurationState:(id)arg1;
- (id)initWithWritingHelper:(id)arg1;
- (BOOL)isReadyForMoreMediaData;
- (void)markAsFinished;
- (void)markCurrentPassAsFinished;
- (struct __CVPixelBufferPool { }*)pixelBufferPool;
- (void)requestMediaDataWhenReadyOnQueue:(id)arg1 usingBlock:(id /* block */)arg2;
- (int)status;

@end
