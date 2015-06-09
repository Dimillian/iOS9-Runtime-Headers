/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UITextViewRestorableScrollPosition : NSObject <NSCoding> {
    float  _offsetInLine;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    }  _range;
}

+ (id)restorableScrollPositionForTextView:(id)arg1;
+ (id)restorableScrollPositionWithDictionary:(id)arg1;
+ (id)restorableScrollPositionWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;

- (id)debugDescription;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTextView:(id)arg1;
- (float)offsetWithinLine;
- (struct _NSRange { unsigned int x1; unsigned int x2; })range;

@end
