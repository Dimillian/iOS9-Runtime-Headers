/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVFlashlight : NSObject {
    AVFlashlightInternal * _internal;
}

@property (getter=isAvailable, nonatomic, readonly) BOOL available;
@property (nonatomic, readonly) float flashlightLevel;
@property (getter=isOverheated, nonatomic, readonly) BOOL overheated;

+ (BOOL)hasFlashlight;
+ (void)initialize;

- (void)_handleNotification:(id)arg1 payload:(id)arg2;
- (void)_setupFlashlight;
- (void)_teardownFlashlight;
- (void)dealloc;
- (float)flashlightLevel;
- (id)init;
- (BOOL)isAvailable;
- (BOOL)isOverheated;
- (BOOL)setFlashlightLevel:(float)arg1 withError:(id*)arg2;
- (void)turnPowerOff;
- (BOOL)turnPowerOnWithError:(id*)arg1;

@end
