/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UILegibilityCachedShadow : NSObject {
    _UILegibilitySettings * _settings;
    UIImage * _shadow;
    float  _strength;
}

@property (nonatomic, retain) _UILegibilitySettings *settings;
@property (nonatomic, retain) UIImage *shadow;
@property (nonatomic) float strength;

- (void)dealloc;
- (BOOL)isEqual:(id)arg1;
- (BOOL)matchesSettings:(id)arg1 strength:(float)arg2;
- (void)setSettings:(id)arg1;
- (void)setShadow:(id)arg1;
- (void)setStrength:(float)arg1;
- (id)settings;
- (id)shadow;
- (float)strength;

@end
