/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSCFTimer : NSTimer

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;

- (unsigned long)_cfTypeID;
- (BOOL)allowsWeakReference;
- (void)finalize;
- (void)fire;
- (id)fireDate;
- (unsigned int)hash;
- (id)init;
- (id)initWithFireDate:(id)arg1 interval:(double)arg2 target:(id)arg3 selector:(SEL)arg4 userInfo:(id)arg5 repeats:(BOOL)arg6;
- (void)invalidate;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isValid;
- (oneway void)release;
- (id)retain;
- (unsigned int)retainCount;
- (BOOL)retainWeakReference;
- (void)setFireDate:(id)arg1;
- (void)setTolerance:(double)arg1;
- (double)timeInterval;
- (double)tolerance;
- (id)userInfo;

@end
