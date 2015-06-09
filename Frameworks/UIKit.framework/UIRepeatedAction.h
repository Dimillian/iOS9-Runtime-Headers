/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIRepeatedAction : NSObject {
    BOOL  _didCompleteInvocationDelay;
    BOOL  _didCompletePreInvocationDelay;
    BOOL  _disableRepeat;
    NSInvocation * _invocation;
    float  _invocationDelay;
    float  _preInvocationDelay;
    float  _repeatedDelay;
    BOOL  _rescheduleAfterNextFire;
    NSTimer * _timer;
}

@property (nonatomic) BOOL disableRepeat;
@property (nonatomic, retain) NSInvocation *invocation;
@property (nonatomic) float invocationDelay;
@property (nonatomic) float preInvocationDelay;
@property (nonatomic) float repeatedDelay;
@property (nonatomic, retain) NSTimer *timer;

+ (id)_invocationForTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3;
+ (id)actionWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3;

- (void).cxx_destruct;
- (void)_invocationTimerFire;
- (void)_preInvocationTimerFire;
- (void)_repeatedTimerFire;
- (void)dealloc;
- (BOOL)disableRepeat;
- (id)initWithInvocation:(id)arg1;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3;
- (void)invalidate;
- (id)invocation;
- (float)invocationDelay;
- (void)invoke;
- (float)preInvocationDelay;
- (float)repeatedDelay;
- (void)reset;
- (void)schedule;
- (void)scheduleWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3;
- (void)setDisableRepeat:(BOOL)arg1;
- (void)setInvocation:(id)arg1;
- (void)setInvocationDelay:(float)arg1;
- (void)setPreInvocationDelay:(float)arg1;
- (void)setRepeatedDelay:(float)arg1;
- (void)setTimer:(id)arg1;
- (id)timer;

@end
