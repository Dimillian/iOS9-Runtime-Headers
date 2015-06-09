/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UISystemGestureGateGestureRecognizer : UIGestureRecognizer {
    NSTimer * _delayTimeoutTimer;
    double  _lastTouchTime;
    unsigned int  _systemGesturesRecognitionPossible;
    unsigned int  _waitingForSystemGestureStateNotification;
}

- (int)_gateGestureType;
- (id)_gateGestureTypeString;
- (void)_resetGestureRecognizer;
- (BOOL)_shouldBeRequiredToFailByGestureRecognizer:(id)arg1;
- (void)_systemGestureStateChanged:(id)arg1;
- (void)_timeOut;
- (BOOL)canBePreventedByGestureRecognizer:(id)arg1;
- (BOOL)canPreventGestureRecognizer:(id)arg1;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (id)initWithWindow:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end
