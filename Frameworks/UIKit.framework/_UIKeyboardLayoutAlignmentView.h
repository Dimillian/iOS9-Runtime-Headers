/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIKeyboardLayoutAlignmentView : UIView {
    BOOL  _automaticKeyboardFrameTrackingDisabled;
    NSNotification * _keyboardChangeNotificationForUpdateConstraints;
    NSLayoutConstraint * bottomConstraint;
    NSLayoutConstraint * disambiguatingLeftConstraint;
    NSLayoutConstraint * heightConstraint;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  lastKnownKeyboardRect;
    NSLayoutConstraint * widthConstraint;
}

@property (nonatomic) BOOL automaticKeyboardFrameTrackingDisabled;

- (void).cxx_destruct;
- (void)_addConstraints;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameInBoundsForKeyboardFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_keyboardChanged:(id)arg1;
- (void)_removeConstraints;
- (void)_startObservingKeyboardNotificationsForScreen:(id)arg1;
- (void)_stopObservingKeyboardNotifications;
- (void)_updateConstraintsToMatchKeyboardFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)automaticKeyboardFrameTrackingDisabled;
- (void)dealloc;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setAutomaticKeyboardFrameTrackingDisabled:(BOOL)arg1;
- (void)updateConstraints;
- (void)willMoveToWindow:(id)arg1;

@end
