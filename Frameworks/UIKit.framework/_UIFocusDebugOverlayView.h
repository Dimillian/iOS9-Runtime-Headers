/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIFocusDebugOverlayView : UIView {
    UIColor * _borderColor;
    UIView * _highlightView;
    UIColor * _overlayColor;
}

@property (nonatomic, copy) UIColor *borderColor;
@property (nonatomic, retain) UIView *highlightView;
@property (nonatomic, copy) UIColor *overlayColor;

- (void).cxx_destruct;
- (id)_focusItemsOverlayCreateIfNecessary:(BOOL)arg1;
- (void)_highlightFocusableFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 relativeToView:(id)arg2 withBackgroundColor:(id)arg3;
- (void)_removeFocusItemOverlayViews;
- (void)_unhighlightFocusableFrame;
- (id)borderColor;
- (void)doesNotRecognizeSelector:(SEL)arg1;
- (id)highlightView;
- (id)initWithView:(id)arg1;
- (id)overlayColor;
- (void)setBorderColor:(id)arg1;
- (void)setHighlightView:(id)arg1;
- (void)setOverlayColor:(id)arg1;

@end
