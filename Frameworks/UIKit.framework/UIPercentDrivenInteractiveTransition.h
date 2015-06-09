/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPercentDrivenInteractiveTransition : NSObject <UIViewControllerInteractiveTransitioning> {
    NSString * __originalFillMode;
    BOOL  __transitionInterrupted;
    NSUUID * __uuid;
    int  _completionCurve;
    float  _completionSpeed;
    BOOL  _didCommitAnimations;
    float  _duration;
}

@property (setter=_setOriginalFillMode:, nonatomic, retain) NSString *_originalFillMode;
@property (getter=_isTransitionInterrupted, setter=_setTransitionInterrupted:, nonatomic) BOOL _transitionInterrupted;
@property (setter=_setUuid:, nonatomic, retain) NSUUID *_uuid;
@property (nonatomic) int completionCurve;
@property (nonatomic) float completionSpeed;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) float duration;
@property (readonly) unsigned int hash;
@property (readonly) float percentComplete;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)_isTransitionInterrupted;
- (id)_originalFillMode;
- (void)_resetInteractionController;
- (void)_setDuration:(float)arg1;
- (void)_setOriginalFillMode:(id)arg1;
- (void)_setTransitionInterrupted:(BOOL)arg1;
- (void)_setUuid:(id)arg1;
- (void)_stopInteractiveTransition;
- (void)_stopInteractiveTransition:(id)arg1;
- (void)_updateInteractiveTransition:(id)arg1 percent:(float)arg2 isFinished:(BOOL)arg3 didComplete:(BOOL)arg4;
- (id)_uuid;
- (void)cancelInteractiveTransition;
- (int)completionCurve;
- (float)completionSpeed;
- (float)duration;
- (void)finishInteractiveTransition;
- (id)init;
- (float)percentComplete;
- (void)setCompletionCurve:(int)arg1;
- (void)setCompletionSpeed:(float)arg1;
- (void)startInteractiveTransition:(id)arg1;
- (void)startInteractiveTransition:(id)arg1 containerViews:(id)arg2 animation:(id /* block */)arg3;
- (void)updateInteractiveTransition:(float)arg1;

@end
