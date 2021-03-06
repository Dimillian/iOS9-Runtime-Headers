/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSBoundKeyPath : NSObject {
    NSString * _keyPath;
    id  _rootObject;
}

@property id rootObject;

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)keyPathWithRootObject:(id)arg1 path:(const char *)arg2;
+ (id)newKeyPathWithRootObject:(id)arg1 keyPathString:(id)arg2;

- (void)dealloc;
- (void)finalize;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)mutableArrayValue;
- (id)mutableOrderedSetValue;
- (id)mutableSetValue;
- (id)rootObject;
- (void)setRootObject:(id)arg1;
- (void)setValue:(id)arg1;
- (BOOL)validateValue:(inout id*)arg1 error:(out id*)arg2;
- (id)value;

@end
