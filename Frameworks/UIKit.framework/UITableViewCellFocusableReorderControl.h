/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITableViewCellFocusableReorderControl : UITableViewCellReorderControl {
    BOOL  _cellHasReorderingAppearance;
    UITapGestureRecognizer * _downArrowButtonRecognizer;
    UIPanGestureRecognizer * _panRecognizer;
    UITapGestureRecognizer * _upArrowButtonRecognizer;
}

- (void).cxx_destruct;
- (void)_arrowButton:(int)arg1;
- (void)_beginIndirectTracking;
- (void)_downArrowButton:(id)arg1;
- (void)_endIndirectTracking;
- (void)_panRecognizer:(id)arg1;
- (BOOL)_shouldHandlePressEvent:(id)arg1;
- (void)_upArrowButton:(id)arg1;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)initWithTableViewCell:(id)arg1;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (BOOL)wantsMaskingWhileAnimatingDisabled;

@end
