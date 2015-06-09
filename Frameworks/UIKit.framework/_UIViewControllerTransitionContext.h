/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIViewControllerTransitionContext : NSObject <UIViewControllerContextTransitioningEx> {
    BOOL  __allowUserInteraction;
    <UIViewControllerAnimatedTransitioning> * __animator;
    _UIViewControllerTransitionCoordinator * __auxContext;
    int  __completionCurve;
    id /* block */  __completionHandler;
    float  __completionVelocity;
    NSArray * __containerViews;
    id /* block */  __didCompleteHandler;
    double  __duration;
    id /* block */  __interactiveUpdateHandler;
    <UIViewControllerInteractiveTransitioning> * __interactor;
    BOOL  __isPresentation;
    float  __percentOffset;
    id /* block */  __postInteractiveCompletionHandler;
    int  __state;
    id /* block */  __willCompleteHandler;
    UIView * _containerView;
    NSArray * _disabledViews;
    BOOL  _initiallyInteractive;
    BOOL  _isAnimated;
    BOOL  _isCurrentlyInteractive;
    int  _presentationStyle;
    float  _previousPercentComplete;
    BOOL  _rotating;
    struct { 
        unsigned int interactorImplementsCompletionSpeed : 1; 
        unsigned int interactorImplementsCompletionCurve : 1; 
        unsigned int transitionWasCancelled : 1; 
        unsigned int transitionIsCompleting : 1; 
    }  _transitionContextFlags;
}

@property (getter=_allowUserInteraction, setter=_setAllowUserInteraction:, nonatomic) BOOL _allowUserInteraction;
@property (setter=_setAnimator:, nonatomic) <UIViewControllerAnimatedTransitioning> *_animator;
@property (setter=_setAuxContext:, nonatomic, retain) _UIViewControllerTransitionCoordinator *_auxContext;
@property (setter=_setCompletionCurve:, nonatomic) int _completionCurve;
@property (setter=_setCompletionHandler:, nonatomic, copy) id /* block */ _completionHandler;
@property (setter=_setCompletionVelocity:, nonatomic) float _completionVelocity;
@property (setter=_setContainerViews:, nonatomic, retain) NSArray *_containerViews;
@property (setter=_setDidCompleteHandler:, nonatomic, copy) id /* block */ _didCompleteHandler;
@property (setter=_setDuration:, nonatomic) double _duration;
@property (setter=_setInteractiveUpdateHandler:, nonatomic, copy) id /* block */ _interactiveUpdateHandler;
@property (setter=_setInteractor:, nonatomic) <UIViewControllerInteractiveTransitioning> *_interactor;
@property (setter=_setIsPresentation:, nonatomic) BOOL _isPresentation;
@property (setter=_setPercentOffset:, nonatomic) float _percentOffset;
@property (setter=_setPostInteractiveCompletionHandler:, nonatomic, copy) id /* block */ _postInteractiveCompletionHandler;
@property (setter=_setState:, nonatomic) int _state;
@property (setter=_setTransitionIsCompleting:, nonatomic) BOOL _transitionIsCompleting;
@property (setter=_setWillCompleteHandler:, nonatomic, copy) id /* block */ _willCompleteHandler;
@property (getter=_affineTransform, nonatomic, readonly) struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; } affineTransform;
@property (setter=_setContainerView:, nonatomic) UIView *containerView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (setter=_setInitiallyInteractive:, nonatomic) BOOL initiallyInteractive;
@property (setter=_setIsAnimated:, nonatomic) BOOL isAnimated;
@property (setter=_setIsCurrentlyInteractive:, nonatomic) BOOL isCurrentlyInteractive;
@property (setter=_setPresentationStyle:, nonatomic) int presentationStyle;
@property (getter=_isRotating, setter=_setRotating:, nonatomic) BOOL rotating;
@property (readonly) Class superclass;

+ (id)_associatedTransitionContextForObject:(id)arg1;

- (void).cxx_destruct;
- (void)__runAlongsideAnimations;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })_affineTransform;
- (BOOL)_allowUserInteraction;
- (id)_animator;
- (id)_auxContext;
- (int)_completionCurve;
- (id /* block */)_completionHandler;
- (float)_completionVelocity;
- (id)_containerViews;
- (id /* block */)_didCompleteHandler;
- (void)_disableInteractionForViews:(id)arg1;
- (double)_duration;
- (void)_enableInteractionForDisabledViews;
- (id /* block */)_interactiveUpdateHandler;
- (void)_interactivityDidChange:(BOOL)arg1;
- (id)_interactor;
- (BOOL)_isPresentation;
- (BOOL)_isRotating;
- (float)_percentOffset;
- (id /* block */)_postInteractiveCompletionHandler;
- (float)_previousPercentComplete;
- (void)_runAlongsideCompletions;
- (void)_setAllowUserInteraction:(BOOL)arg1;
- (void)_setAnimator:(id)arg1;
- (void)_setAuxContext:(id)arg1;
- (void)_setCompletionCurve:(int)arg1;
- (void)_setCompletionHandler:(id /* block */)arg1;
- (void)_setCompletionVelocity:(float)arg1;
- (void)_setContainerView:(id)arg1;
- (void)_setContainerViews:(id)arg1;
- (void)_setDidCompleteHandler:(id /* block */)arg1;
- (void)_setDuration:(double)arg1;
- (void)_setInitiallyInteractive:(BOOL)arg1;
- (void)_setInteractiveUpdateHandler:(id /* block */)arg1;
- (void)_setInteractor:(id)arg1;
- (void)_setIsAnimated:(BOOL)arg1;
- (void)_setIsCurrentlyInteractive:(BOOL)arg1;
- (void)_setIsPresentation:(BOOL)arg1;
- (void)_setPercentOffset:(float)arg1;
- (void)_setPostInteractiveCompletionHandler:(id /* block */)arg1;
- (void)_setPresentationStyle:(int)arg1;
- (void)_setPreviousPercentComplete:(float)arg1;
- (void)_setRotating:(BOOL)arg1;
- (void)_setState:(int)arg1;
- (void)_setTransitionIsCompleting:(BOOL)arg1;
- (void)_setTransitionIsInFlight:(BOOL)arg1;
- (void)_setWillCompleteHandler:(id /* block */)arg1;
- (int)_state;
- (id)_transitionCoordinator;
- (BOOL)_transitionIsCompleting;
- (BOOL)_transitionIsInFlight;
- (void)_updateInteractiveTransitionWithoutTrackingPercentComplete:(float)arg1;
- (id /* block */)_willCompleteHandler;
- (void)cancelInteractiveTransition;
- (void)completeTransition:(BOOL)arg1;
- (id)containerView;
- (void)dealloc;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })finalFrameForViewController:(id)arg1;
- (void)finishInteractiveTransition;
- (id)init;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })initialFrameForViewController:(id)arg1;
- (BOOL)initiallyInteractive;
- (BOOL)isAnimated;
- (BOOL)isCurrentlyInteractive;
- (BOOL)isInteractive;
- (int)presentationStyle;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })targetTransform;
- (BOOL)transitionWasCancelled;
- (void)updateInteractiveTransition:(float)arg1;
- (id)viewControllerForKey:(id)arg1;
- (id)viewForKey:(id)arg1;

@end
