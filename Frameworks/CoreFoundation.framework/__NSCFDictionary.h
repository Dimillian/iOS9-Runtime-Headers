/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface __NSCFDictionary : NSMutableDictionary {
    unsigned int  _bits;
    void * _callbacks;
    unsigned char  _cfinfo;
    id * _keys;
    id * _values;
}

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;

- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)count;
- (unsigned int)countByEnumeratingWithState:(struct { unsigned long x1; id *x2; unsigned long x3; unsigned long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned int)arg3;
- (void)finalize;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)keyEnumerator;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)objectForKey:(id)arg1;
- (oneway void)release;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (id)retain;
- (unsigned int)retainCount;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObservationInfo:(void*)arg1;

@end
