/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUINamedImageDescription : NSObject {
    struct { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  _alignmentEdgeInsets;
    int  _blendMode;
    struct { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  _edgeInsets;
    int  _exifOrientation;
    int  _idiom;
    int  _imageType;
    int  _resizingMode;
    float  _scale;
    int  _sizeClassHorizontal;
    int  _sizeClassVertical;
    int  _subtype;
    int  _templateRenderingMode;
}

@property (nonatomic) struct { float x1; float x2; float x3; float x4; } alignmentEdgeInsets;
@property (nonatomic) int blendMode;
@property (nonatomic) struct { float x1; float x2; float x3; float x4; } edgeInsets;
@property (nonatomic) int exifOrientation;
@property (nonatomic) int idiom;
@property (nonatomic) int imageType;
@property (nonatomic) BOOL isTemplate;
@property (nonatomic) int resizingMode;
@property (nonatomic) float scale;
@property (nonatomic) int sizeClassHorizontal;
@property (nonatomic) int sizeClassVertical;
@property (nonatomic) int subtype;
@property (nonatomic) int templateRenderingMode;

// CUINamedImageDescription (null)

- (struct { float x1; float x2; float x3; float x4; })alignmentEdgeInsets;
- (int)blendMode;
- (id)description;
- (struct { float x1; float x2; float x3; float x4; })edgeInsets;
- (int)exifOrientation;
- (int)idiom;
- (int)imageType;
- (BOOL)isTemplate;
- (int)resizingMode;
- (float)scale;
- (void)setAlignmentEdgeInsets:(struct { float x1; float x2; float x3; float x4; })arg1;
- (void)setBlendMode:(int)arg1;
- (void)setEdgeInsets:(struct { float x1; float x2; float x3; float x4; })arg1;
- (void)setExifOrientation:(int)arg1;
- (void)setIdiom:(int)arg1;
- (void)setImageType:(int)arg1;
- (void)setIsTemplate:(BOOL)arg1;
- (void)setResizingMode:(int)arg1;
- (void)setScale:(float)arg1;
- (void)setSizeClassHorizontal:(int)arg1;
- (void)setSizeClassVertical:(int)arg1;
- (void)setSubtype:(int)arg1;
- (void)setTemplateRenderingMode:(int)arg1;
- (int)sizeClassHorizontal;
- (int)sizeClassVertical;
- (int)subtype;
- (int)templateRenderingMode;

@end
