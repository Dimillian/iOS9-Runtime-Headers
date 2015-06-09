/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSURLQueryItem : NSObject <NSCopying, NSSecureCoding> {
    NSString * _name;
    NSString * _value;
}

@property (readonly) NSString *name;
@property (readonly) NSString *value;

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)queryItemWithName:(id)arg1 value:(id)arg2;
+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)finalize;
- (unsigned int)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 value:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)name;
- (id)value;

@end
