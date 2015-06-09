/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSThread : NSObject {
    unsigned char  _bytes;
    id  _private;
}

@property (getter=isCancelled, readonly) BOOL cancelled;
@property (getter=isExecuting, readonly) BOOL executing;
@property (getter=isFinished, readonly) BOOL finished;
@property (readonly) BOOL isMainThread;
@property (copy) NSString *name;
@property int qualityOfService;
@property unsigned int stackSize;
@property (readonly, retain) NSMutableDictionary *threadDictionary;
@property double threadPriority;

+ (id)callStackReturnAddresses;
+ (id)callStackSymbols;
+ (id)currentThread;
+ (void)detachNewThreadSelector:(SEL)arg1 toTarget:(id)arg2 withObject:(id)arg3;
+ (void)exit;
+ (BOOL)isDying;
+ (BOOL)isMainThread;
+ (BOOL)isMultiThreaded;
+ (id)mainThread;
+ (BOOL)setThreadPriority:(double)arg1;
+ (void)sleepForTimeInterval:(double)arg1;
+ (void)sleepUntilDate:(id)arg1;
+ (double)threadPriority;

- (struct pthread_override_s { }*)_beginQoSOverride:(unsigned int)arg1 relativePriority:(int)arg2;
- (void)_endQoSOverride:(struct pthread_override_s { }*)arg1;
- (void)_nq:(id)arg1;
- (void)cancel;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3;
- (BOOL)isCancelled;
- (BOOL)isDying;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (BOOL)isMainThread;
- (void)main;
- (id)name;
- (int)qualityOfService;
- (id)runLoop;
- (void)setName:(id)arg1;
- (void)setQualityOfService:(int)arg1;
- (void)setStackSize:(unsigned int)arg1;
- (void)setThreadPriority:(double)arg1;
- (unsigned int)stackSize;
- (void)start;
- (id)threadDictionary;
- (double)threadPriority;

@end