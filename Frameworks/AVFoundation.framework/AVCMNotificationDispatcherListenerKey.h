/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCMNotificationDispatcherListenerKey : NSObject <NSCopying> {
    int (* _callback;
    NSString * _name;
    const void * _object;
    AVWeakReference * _weakReferenceToListener;
}

+ (id)listenerKeyWithWeakReferenceToListener:(id)arg1 callback:(int (*)arg2 name:(id)arg3 object:(const void*)arg4;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned int)hash;
- (id)init;
- (id)initWithWeakReferenceToListener:(id)arg1 callback:(int (*)arg2 name:(id)arg3 object:(const void*)arg4;
- (BOOL)isEqual:(id)arg1;

@end
