/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIAnimator : NSObject {
    NSMutableArray * _animations;
    /* Warning: unhandled array encoding: '[3@]' */ id  _heartbeat;
    int  _heartbeatClientCount;
    double  _lastUpdateTime;
}

+ (void)disableAnimation;
+ (void)enableAnimation;
+ (id)sharedAnimator;

- (void).cxx_destruct;
- (void)addAnimation:(id)arg1 withDuration:(double)arg2 start:(BOOL)arg3;
- (void)addAnimations:(id)arg1 withDuration:(double)arg2 start:(BOOL)arg3;
- (void)dealloc;
- (float)fractionForAnimation:(id)arg1;
- (void)removeAnimationsForTarget:(id)arg1;
- (void)removeAnimationsForTarget:(id)arg1 ofKind:(Class)arg2;
- (void)startAnimation:(id)arg1;
- (void)stopAnimation:(id)arg1;

// UIAnimator (Static)

- (void)_LCDHeartbeatCallback:(id)arg1;
- (void)_TVHeartbeatCallback:(id)arg1;
- (void)_TimerHeartbeatCallback:(id)arg1;
- (void)_addAnimation:(id)arg1 withDuration:(double)arg2 start:(BOOL)arg3 startTime:(double)arg4;
- (void)_advanceAnimationsOfType:(int)arg1 withTimestamp:(double)arg2;
- (BOOL)_isRunningAnimation:(id)arg1;
- (void)_startAnimation:(id)arg1 withStartTime:(double)arg2;

@end
