/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUIRenditionMetrics : NSObject {
    float  _baseline;
    struct CGSize { 
        float width; 
        float height; 
    }  _contentBottomLeftMargin;
    struct CGSize { 
        float width; 
        float height; 
    }  _contentTopRightMargin;
    struct crmFlags { 
        unsigned int scalesVertically : 1; 
        unsigned int scalesHorizontally : 1; 
        unsigned int reserved : 14; 
    }  _crmFlags;
    struct CGSize { 
        float width; 
        float height; 
    }  _edgeBottomLeftMargin;
    struct CGSize { 
        float width; 
        float height; 
    }  _edgeTopRightMargin;
    struct CGSize { 
        float width; 
        float height; 
    }  _imageSize;
    float  _scale;
}

// CUIRenditionMetrics (null)

- (float)baseline;
- (struct CGSize { float x1; float x2; })contentBottomLeftMargin;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })contentRect;
- (struct CGSize { float x1; float x2; })contentTopRightMargin;
- (struct CGSize { float x1; float x2; })edgeBottomLeftMargin;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })edgeRect;
- (struct CGSize { float x1; float x2; })edgeTopRightMargin;
- (BOOL)hasAlignmentEdgeMargins;
- (BOOL)hasOpaqueContentBounds;
- (struct CGSize { float x1; float x2; })imageSize;
- (id)initWithImageSize:(struct CGSize { float x1; float x2; })arg1 edgeBottomLeft:(struct CGSize { float x1; float x2; })arg2 edgeTopRight:(struct CGSize { float x1; float x2; })arg3 contentBottomLeft:(struct CGSize { float x1; float x2; })arg4 contentTopRight:(struct CGSize { float x1; float x2; })arg5 baseline:(float)arg6 scalesVertically:(BOOL)arg7 scalesHorizontally:(BOOL)arg8 scale:(float)arg9;
- (id)initwithImageSize:(struct CGSize { float x1; float x2; })arg1 scale:(float)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })insetContentRectWithMetrics:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })insetRectWithMetrics:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (float)scale;
- (BOOL)scalesHorizontally;
- (BOOL)scalesVertically;

@end
