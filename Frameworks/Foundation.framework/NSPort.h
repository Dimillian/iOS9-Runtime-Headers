/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSPort : NSObject <NSCoding, NSCopying>

@property (readonly) unsigned int reservedSpaceLength;
@property (getter=isValid, readonly) BOOL valid;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)port;
+ (id)portWithMachPort:(unsigned int)arg1;

- (void)addConnection:(id)arg1 toRunLoop:(id)arg2 forMode:(id)arg3;
- (Class)classForCoder;
- (Class)classForPortCoder;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)delegate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMachPort:(unsigned int)arg1;
- (void)invalidate;
- (BOOL)isValid;
- (unsigned int)machPort;
- (void)removeConnection:(id)arg1 fromRunLoop:(id)arg2 forMode:(id)arg3;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (id)replacementObjectForCoder:(id)arg1;
- (unsigned int)reservedSpaceLength;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (BOOL)sendBeforeDate:(id)arg1 components:(id)arg2 from:(id)arg3 reserved:(unsigned int)arg4;
- (BOOL)sendBeforeDate:(id)arg1 msgid:(unsigned int)arg2 components:(id)arg3 from:(id)arg4 reserved:(unsigned int)arg5;
- (void)setDelegate:(id)arg1;

@end
