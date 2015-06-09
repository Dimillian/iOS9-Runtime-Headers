/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UINavigationTransitionView : UIView <NSCoding> {
    id  _delegate;
    UIResponder * _firstResponderToRestore;
    UIView * _fromView;
    float  _fromViewAlpha;
    unsigned int  _isTransitioning;
    UIWindow * _originalWindow;
    unsigned int  _popoverWillCleanUpNavigationTransition;
    UIView * _toView;
    int  _transition;
    unsigned int  _usesRoundedCorners;
}

@property (nonatomic) id delegate;
@property (readonly) UIView *fromView;
@property (readonly) BOOL isTransitioning;
@property (nonatomic) BOOL popoverWillCleanUpNavigationTransition;
@property (nonatomic) BOOL usesRoundedCorners;

+ (double)defaultDurationForTransition:(int)arg1;

- (void).cxx_destruct;
- (void)_cleanupTransition;
- (void)_cleanupTransitionFromPopover;
- (BOOL)_isTransitioningFromView:(id)arg1;
- (void)_navigationTransitionDidStop;
- (void)_notifyDelegateTransitionDidStopWithContext:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)encodeWithCoder:(id)arg1;
- (id)fromView;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isTransitioning;
- (BOOL)popoverWillCleanUpNavigationTransition;
- (void)setDelegate:(id)arg1;
- (void)setPopoverWillCleanUpNavigationTransition:(BOOL)arg1;
- (void)setUsesRoundedCorners:(BOOL)arg1;
- (BOOL)transition:(int)arg1 fromView:(id)arg2 toView:(id)arg3;
- (BOOL)transition:(int)arg1 toView:(id)arg2;
- (BOOL)usesRoundedCorners;

@end
