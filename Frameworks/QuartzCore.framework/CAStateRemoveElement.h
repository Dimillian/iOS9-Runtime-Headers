/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CAStateRemoveElement : CAStateElement {
    NSString * _keyPath;
    id  _object;
}

@property (nonatomic, copy) NSString *keyPath;
@property (nonatomic, retain) id object;

- (void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3;
- (id)CAMLTypeForKey:(id)arg1;
- (void)apply:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)debugDescription;
- (void)encodeWithCAMLWriter:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)keyPath;
- (BOOL)matches:(id)arg1;
- (id)object;
- (void)setKeyPath:(id)arg1;
- (void)setObject:(id)arg1;

@end
