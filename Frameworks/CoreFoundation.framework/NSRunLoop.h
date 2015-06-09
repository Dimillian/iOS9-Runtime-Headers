/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface NSRunLoop : NSObject {
    id  _dperf;
    id  _info;
    id  _perft;
    id  _ports;
    void * _reserved;
    id  _rl;
}

// Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/Foundation.framework/Foundation

// NSRunLoop (NSOrderedPerforming)

- (void)cancelPerformSelector:(SEL)arg1 target:(id)arg2 argument:(id)arg3;
- (void)cancelPerformSelectorsWithTarget:(id)arg1;
- (void)performSelector:(SEL)arg1 target:(id)arg2 argument:(id)arg3 order:(unsigned int)arg4 modes:(id)arg5;

// NSRunLoop (NSRunLoop)

+ (id)_new:(id)arg1;
+ (id)currentRunLoop;
+ (id)mainRunLoop;

- (void)_addPort:(id)arg1 forMode:(id)arg2;
- (BOOL)_containsPort:(id)arg1 forMode:(id)arg2;
- (void)_enumerateInfoPairsWithBlock:(id /* block */)arg1;
- (void)_invalidateTimers;
- (void)_portInvalidated:(id)arg1;
- (void)_removePort:(id)arg1 forMode:(id)arg2;
- (void)_wakeup;
- (void)acceptInputForMode:(id)arg1 beforeDate:(id)arg2;
- (void)addPort:(id)arg1 forMode:(id)arg2;
- (void)addTimer:(id)arg1 forMode:(id)arg2;
- (id)allModes;
- (BOOL)containsPort:(id)arg1 forMode:(id)arg2;
- (BOOL)containsTimer:(id)arg1 forMode:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentMode;
- (void)dealloc;
- (id)description;
- (struct __CFRunLoop { }*)getCFRunLoop;
- (id)init;
- (id)limitDateForMode:(id)arg1;
- (id)portsForMode:(id)arg1;
- (void)removePort:(id)arg1 forMode:(id)arg2;
- (void)removeTimer:(id)arg1 forMode:(id)arg2;
- (void)run;
- (BOOL)runBeforeDate:(id)arg1;
- (BOOL)runMode:(id)arg1 beforeDate:(id)arg2;
- (BOOL)runMode:(id)arg1 untilDate:(id)arg2;
- (void)runUntilDate:(id)arg1;
- (id)timersForMode:(id)arg1;

@end
