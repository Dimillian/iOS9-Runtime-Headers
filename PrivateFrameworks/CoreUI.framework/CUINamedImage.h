/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUINamedImage : CUINamedLookup {
    struct _cuiniproperties { 
        unsigned int isVectorBased : 1; 
        unsigned int hasSliceInformation : 1; 
        unsigned int hasAlignmentInformation : 1; 
        unsigned int resizingMode : 2; 
        unsigned int templateRenderingMode : 3; 
        unsigned int exifOrientation : 4; 
        unsigned int _reserved : 20; 
    }  _imageProperties;
    float  _scale;
}

@property (nonatomic, readonly) struct { float x1; float x2; float x3; float x4; } alignmentEdgeInsets;
@property (nonatomic, readonly) int blendMode;
@property (nonatomic, readonly) struct { float x1; float x2; float x3; float x4; } edgeInsets;
@property (nonatomic, readonly) int exifOrientation;
@property (nonatomic, readonly) BOOL hasAlignmentInformation;
@property (nonatomic, readonly) BOOL hasSliceInformation;
@property (nonatomic, readonly) struct CGImage { }*image;
@property (nonatomic, readonly) int imageType;
@property (nonatomic, readonly) BOOL isStructured;
@property (nonatomic, readonly) BOOL isTemplate;
@property (nonatomic, readonly) BOOL isVectorBased;
@property (nonatomic, readonly) float opacity;
@property (nonatomic, readonly) int resizingMode;
@property (nonatomic, readonly) float scale;
@property (nonatomic, readonly) struct CGSize { float x1; float x2; } size;
@property (nonatomic, readonly) int templateRenderingMode;

// Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CoreUI.framework/CoreUI

// CUINamedImage (null)

- (void)_cacheRenditionProperties;
- (struct { float x1; float x2; float x3; float x4; })alignmentEdgeInsets;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })alphaCroppedRect;
- (id)baseKey;
- (int)blendMode;
- (struct CGImage { }*)createImageFromPDFRenditionWithScale:(float)arg1;
- (id)description;
- (struct { float x1; float x2; float x3; float x4; })edgeInsets;
- (int)exifOrientation;
- (int)graphicsClass;
- (BOOL)hasAlignmentInformation;
- (BOOL)hasSliceInformation;
- (int)idiom;
- (struct CGImage { }*)image;
- (int)imageType;
- (BOOL)isStructured;
- (BOOL)isTemplate;
- (BOOL)isVectorBased;
- (int)memoryClass;
- (float)opacity;
- (struct CGSize { float x1; float x2; })originalUncroppedSize;
- (float)positionOfSliceBoundary:(unsigned int)arg1;
- (int)resizingMode;
- (int)resizingModeWithSubtype:(int)arg1;
- (float)scale;
- (struct CGSize { float x1; float x2; })size;
- (int)sizeClassHorizontal;
- (int)sizeClassVertical;
- (unsigned int)subtype;
- (int)templateRenderingMode;

// Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit

// CUINamedImage (UIKitAdditions)

- (id)UIImage;
- (id)traitCollection;

@end
