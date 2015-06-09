/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIRemoveControlMinusButton : UIControl {
    unsigned int  _hiding;
    unsigned int  _reserved;
    unsigned int  _rotated;
    unsigned int  _rotating;
    unsigned int  _showAsPlus;
    float  _verticalOffset;
}

+ (float)defaultWidth;
+ (id)minusImage;
+ (id)plusImage;

- (void)_toggleRotateAnimationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)animator:(id)arg1 stopAnimation:(id)arg2;
- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithRemoveControl:(id)arg1;
- (BOOL)isHiding;
- (BOOL)isRotated;
- (BOOL)isRotating;
- (void)setHiding:(BOOL)arg1;
- (void)toggleRotate:(BOOL)arg1;

@end
