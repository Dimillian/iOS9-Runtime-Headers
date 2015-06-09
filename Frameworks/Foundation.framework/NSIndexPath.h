/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSIndexPath : NSObject <NSCopying, NSSecureCoding> {
    unsigned int * _indexes;
    unsigned int  _length;
    void * _reserved;
}

@property (nonatomic, readonly) int item;
@property (readonly) unsigned int length;
@property (nonatomic, readonly) int row;
@property (nonatomic, readonly) int section;

// Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/Foundation.framework/Foundation

+ (id)indexPath;
+ (id)indexPathWithIndex:(unsigned int)arg1;
+ (id)indexPathWithIndexes:(const unsigned int*)arg1 length:(unsigned int)arg2;
+ (BOOL)supportsSecureCoding;

- (int)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)getIndexes:(unsigned int*)arg1;
- (void)getIndexes:(unsigned int*)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (unsigned int)hash;
- (unsigned int)indexAtPosition:(unsigned int)arg1;
- (id)indexPathByAddingIndex:(unsigned int)arg1;
- (id)indexPathByRemovingLastIndex;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIndex:(unsigned int)arg1;
- (id)initWithIndexes:(const unsigned int*)arg1 length:(unsigned int)arg2;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)length;

// Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit

// NSIndexPath (UICollectionViewAdditions)

+ (id)indexPathForItem:(int)arg1 inSection:(int)arg2;

- (int)item;

// NSIndexPath (UITableView)

+ (id)indexPathForRow:(int)arg1 inSection:(int)arg2;

- (int)row;
- (int)section;

@end
