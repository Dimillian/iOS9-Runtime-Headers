/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIDelayedPresentationContext : NSObject {
    id /* block */  _cancellationHandler;
    BOOL  _enableUserInteraction;
    NSInvocation * _presentInvocation;
    int  _reqcnt;
    double  _timeout;
    NSObject<OS_dispatch_source> * _timerSource;
}

@property (nonatomic, copy) id /* block */ cancellationHandler;
@property (nonatomic, retain) NSInvocation *presentInvocation;

- (void).cxx_destruct;
- (void)beginDelayedPresentation;
- (void)cancelDelayedPresentation:(BOOL)arg1;
- (id /* block */)cancellationHandler;
- (int)decrementRequestCount;
- (id)delayingController;
- (void)finishDelayedPresentation:(id)arg1;
- (int)incrementRequestCount;
- (id)initWithTimeout:(double)arg1 cancellationHandler:(id /* block */)arg2;
- (id)invocationTarget;
- (id)presentInvocation;
- (int)requestCount;
- (void)setCancellationHandler:(id /* block */)arg1;
- (void)setPresentInvocation:(id)arg1;

@end
