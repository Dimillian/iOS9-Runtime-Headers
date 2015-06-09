/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBRenderConfig : NSObject <NSCopying> {
    float  _blurRadius;
    float  _blurSaturation;
    int  _forceQuality;
    float  _keycapOpacity;
    BOOL  _lightKeyboard;
    float  _lightKeycapOpacity;
    BOOL  _useEmojiStyles;
}

@property (nonatomic, readonly) int backdropStyle;
@property (nonatomic) float blurRadius;
@property (nonatomic) float blurSaturation;
@property (nonatomic) int forceQuality;
@property (nonatomic) float keycapOpacity;
@property (nonatomic) BOOL lightKeyboard;
@property (nonatomic) float lightKeycapOpacity;
@property (nonatomic, readonly) BOOL whiteText;

+ (int)backdropStyleForStyle:(int)arg1 quality:(int)arg2;
+ (id)configForAppearance:(int)arg1 inputMode:(id)arg2;
+ (id)darkConfig;
+ (id)defaultConfig;
+ (id)defaultEmojiConfig;
+ (id)lowQualityDarkConfig;

- (int)backdropStyle;
- (float)blurRadius;
- (float)blurSaturation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (int)forceQuality;
- (BOOL)isEqual:(id)arg1;
- (float)keycapOpacity;
- (BOOL)lightKeyboard;
- (float)lightKeycapOpacity;
- (void)setBlurRadius:(float)arg1;
- (void)setBlurSaturation:(float)arg1;
- (void)setForceQuality:(int)arg1;
- (void)setKeycapOpacity:(float)arg1;
- (void)setLightKeyboard:(BOOL)arg1;
- (void)setLightKeycapOpacity:(float)arg1;
- (BOOL)whiteText;

@end
