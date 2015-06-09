/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UINavigationInteractiveTransition : _UINavigationInteractiveTransitionBase {
    UIScreenEdgePanGestureRecognizer * _edgePanRecognizer;
}

@property (nonatomic, readonly) UIScreenEdgePanGestureRecognizer *screenEdgePanGestureRecognizer;

- (void).cxx_destruct;
- (void)_configureNavigationGesture;
- (BOOL)_gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (void)dealloc;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (id)gestureRecognizerView;
- (id)initWithViewController:(id)arg1 animator:(id)arg2;
- (id)screenEdgePanGestureRecognizer;
- (void)setNotInteractiveTransition;
- (void)startInteractiveTransition;

@end
