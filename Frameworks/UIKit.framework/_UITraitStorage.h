/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UITraitStorage : NSObject <NSCoding> {
    NSString * _keyPath;
    id  _object;
    NSMutableArray * _records;
}

@property (nonatomic, readonly) NSString *keyPath;
@property (nonatomic, readonly) id object;

- (void).cxx_destruct;
- (void)addRecord:(id)arg1;
- (void)applyRecordsMatchingTraitCollection:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithObject:(id)arg1 keyPath:(id)arg2;
- (id)keyPath;
- (id)object;
- (id)records;

@end
