/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetReader : NSObject {
    AVAssetReaderInternal * _priv;
}

@property (nonatomic, readonly, retain) AVAsset *asset;
@property (readonly) NSError *error;
@property (getter=_figAssetReader, nonatomic, readonly) struct OpaqueFigAssetReader { }*figAssetReader;
@property (nonatomic, readonly) NSArray *outputs;
@property (readonly) int status;
@property (nonatomic) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } timeRange;

+ (id)_errorForOSStatus:(long)arg1;
+ (id)assetReaderWithAsset:(id)arg1 error:(id*)arg2;
+ (void)initialize;

- (BOOL)_canAddOutput:(id)arg1 exceptionReason:(id*)arg2;
- (struct OpaqueFigAssetReader { }*)_figAssetReader;
- (void)_outputDidFinish:(id)arg1;
- (void)_tearDownFigAssetReader;
- (void)_transitionToStatus:(int)arg1 failureError:(id)arg2;
- (void)addOutput:(id)arg1;
- (id)asset;
- (BOOL)canAddOutput:(id)arg1;
- (void)cancelReading;
- (void)dealloc;
- (id)description;
- (id)error;
- (void)finalize;
- (id)init;
- (id)initWithAsset:(id)arg1 error:(id*)arg2;
- (id)outputs;
- (void)setTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (BOOL)startReading;
- (int)status;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })timeRange;

@end
