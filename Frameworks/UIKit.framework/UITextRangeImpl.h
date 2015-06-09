/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITextRangeImpl : UITextRange {
    int  _affinityIfCollapsed;
    DOMRange * _domRange;
}

@property (nonatomic) int affinity;
@property (nonatomic, retain) DOMRange *domRange;

+ (id)wrapDOMRange:(id)arg1;
+ (id)wrapDOMRange:(id)arg1 withAffinity:(int)arg2;

- (void)adjustAffinityOfPosition:(id)arg1 isStart:(BOOL)arg2;
- (int)affinity;
- (void)dealloc;
- (id)description;
- (id)domRange;
- (id)end;
- (BOOL)isEmpty;
- (BOOL)isEqual:(id)arg1;
- (void)setAffinity:(int)arg1;
- (void)setDomRange:(id)arg1;
- (id)start;

@end
