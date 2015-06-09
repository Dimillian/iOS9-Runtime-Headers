/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBShadowEffect : NSObject <UIKBRenderEffect> {
    NSString * _colorName;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  _concaveInsets;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  _insets;
    struct CGSize { 
        float width; 
        float height; 
    }  _offset;
    float  _weight;
}

@property (nonatomic) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } concaveInsets;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } insets;
@property (nonatomic, readonly) BOOL isValid;
@property (nonatomic) struct CGSize { float x1; float x2; } offset;
@property (nonatomic, readonly) SEL renderSelector;
@property (nonatomic, readonly) BOOL renderUnder;
@property (readonly) Class superclass;
@property (nonatomic) float weight;

+ (id)effectWithColor:(id)arg1 offset:(struct CGSize { float x1; float x2; })arg2 insets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg3 weight:(float)arg4;

- (struct CGColor { }*)CGColor;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })concaveInsets;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)initWithColor:(id)arg1 offset:(struct CGSize { float x1; float x2; })arg2 insets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg3 weight:(float)arg4;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })insets;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isValid;
- (struct CGSize { float x1; float x2; })offset;
- (SEL)renderSelector;
- (BOOL)renderUnder;
- (void)setConcaveInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setOffset:(struct CGSize { float x1; float x2; })arg1;
- (void)setWeight:(float)arg1;
- (float)weight;

@end
