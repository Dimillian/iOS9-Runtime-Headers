/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIAlertControllerTVBackgroundView : UIView <UIAlertControllerBackgroundView> {
    NSMutableDictionary * _alphas;
    UIView * _backgroundView;
    BOOL  _isHighlighted;
    BOOL  _isPressed;
    BOOL  _shouldShowShadow;
    BOOL  _shouldUseTintColorAsBackgroundColor;
}

@property float cornerRadius;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL shouldShowShadow;
@property (nonatomic) BOOL shouldUseTintColorAsBackgroundColor;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (float)_alphaForHighlighted:(BOOL)arg1 pressed:(BOOL)arg2;
- (float)alphaForState:(unsigned int)arg1;
- (float)cornerRadius;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setAlpha:(float)arg1 forState:(unsigned int)arg2;
- (void)setCornerRadius:(float)arg1;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setPressed:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setShouldShowShadow:(BOOL)arg1;
- (void)setShouldUseTintColorAsBackgroundColor:(BOOL)arg1;
- (BOOL)shouldShowShadow;
- (BOOL)shouldUseTintColorAsBackgroundColor;
- (void)tintColorDidChange;

@end
