/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIButtonLabel : UILabel {
    UIButton * _button;
    BOOL  _reverseShadow;
}

+ (id)_defaultAttributes;

- (void).cxx_destruct;
- (id)_defaultAttributes;
- (id)_initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 button:(id)arg2;
- (void)_setMinimumFontSize:(float)arg1;
- (void)_setWantsAutolayout;
- (BOOL)_shouldAnimatePropertyWithKey:(id)arg1;
- (struct CGSize { float x1; float x2; })intrinsicContentSize;
- (void)invalidateIntrinsicContentSize;
- (void)setAdjustsFontSizeToFitWidth:(BOOL)arg1;
- (void)setFont:(id)arg1;
- (void)setLineBreakMode:(int)arg1;
- (void)setMinimumScaleFactor:(float)arg1;
- (void)setReverseShadow:(BOOL)arg1;
- (void)setShadowOffset:(struct CGSize { float x1; float x2; })arg1;
- (void)setTextAlignment:(int)arg1;
- (struct CGSize { float x1; float x2; })shadowOffset;

@end
