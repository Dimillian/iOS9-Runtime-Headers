/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSPortCoder : NSCoder

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)portCoderWithReceivePort:(id)arg1 sendPort:(id)arg2 components:(id)arg3;

- (id)_connection;
- (id)connection;
- (id)decodePortObject;
- (void)dispatch;
- (void)encodePortObject:(id)arg1;
- (id)initWithReceivePort:(id)arg1 sendPort:(id)arg2 components:(id)arg3;
- (BOOL)isBycopy;
- (BOOL)isByref;

@end
