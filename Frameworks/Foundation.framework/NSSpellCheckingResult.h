/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSSpellCheckingResult : NSTextCheckingResult {
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    }  _range;
}

- (BOOL)_adjustRangesWithOffset:(int)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })range;
- (id)resultByAdjustingRangesWithOffset:(int)arg1;
- (unsigned long long)resultType;

@end
