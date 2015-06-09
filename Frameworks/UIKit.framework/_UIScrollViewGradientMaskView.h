/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIScrollViewGradientMaskView : UIView {
    int  _gradientDirection;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  _gradientEndInsets;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  _gradientIntensities;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  _gradientStartInsets;
}

@property (nonatomic) int gradientDirection;
@property (nonatomic) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } gradientEndInsets;
@property (nonatomic) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } gradientIntensities;
@property (nonatomic) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } gradientStartInsets;

+ (Class)layerClass;

- (int)gradientDirection;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })gradientEndInsets;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })gradientIntensities;
- (id)gradientLayer;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })gradientStartInsets;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setGradientDirection:(int)arg1;
- (void)setGradientEndInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setGradientIntensities:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setGradientStartInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)updateWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 gradientStartInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg2 gradientEndInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg3 gradientIntensities:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg4;

@end
