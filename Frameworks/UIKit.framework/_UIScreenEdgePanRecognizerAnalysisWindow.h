/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIScreenEdgePanRecognizerAnalysisWindow : UIWindow {
    UIView * _backgroundView;
    NSMutableArray * _failureMessageLabels;
    long  _maximumVisibleOverlayItems;
    UIDelayedAction * _messageFadeAction;
    _UIScreenEdgePanRecognizer * _recognizer;
}

@property (nonatomic) long maximumVisibleOverlayItems;
@property (nonatomic) _UIScreenEdgePanRecognizer *recognizer;

- (void).cxx_destruct;
- (BOOL)_isWindowServerHostingManaged;
- (void)dealloc;
- (void)dismissMessages;
- (void)fadeOldestMessage;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (long)maximumVisibleOverlayItems;
- (void)pushFailureMessage:(id)arg1 toVisualOverlay:(BOOL)arg2;
- (void)pushMessage:(id)arg1 toVisualOverlay:(BOOL)arg2;
- (void)pushStatusMessage:(id)arg1 toVisualOverlay:(BOOL)arg2;
- (id)recognizer;
- (void)setMaximumVisibleOverlayItems:(long)arg1;
- (void)setRecognizer:(id)arg1;

@end
