/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UICIColor : UIColor {
    CIColor * _ciColor;
    UIColor * _rgbColor;
}

- (struct CGColor { }*)CGColor;
- (id)CIColor;
- (id)_rgbColor;
- (id)colorWithAlphaComponent:(float)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (BOOL)getRed:(float*)arg1 green:(float*)arg2 blue:(float*)arg3 alpha:(float*)arg4;
- (BOOL)getWhite:(float*)arg1 alpha:(float*)arg2;
- (unsigned int)hash;
- (id)initWithCIColor:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)set;
- (void)setFill;
- (void)setStroke;

@end
