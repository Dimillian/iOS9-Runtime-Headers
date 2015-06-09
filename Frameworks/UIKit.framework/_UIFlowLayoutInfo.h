/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIFlowLayoutInfo : NSObject {
    struct CGSize { 
        float width; 
        float height; 
    }  _contentSize;
    float  _dimension;
    BOOL  _estimatesSizes;
    BOOL  _horizontal;
    BOOL  _isValid;
    UICollectionViewFlowLayout * _layout;
    struct CGSize { 
        float width; 
        float height; 
    }  _layoutSize;
    BOOL  _leftToRight;
    struct { 
        int commonRowHorizontalAlignment; 
        int lastRowHorizontalAlignment; 
        int rowVerticalAlignment; 
    }  _rowAlignmentOptions;
    NSMutableArray * _sections;
    BOOL  _useFloatingHeaderFooter;
    BOOL  _usesFloatingHeaderFooter;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  _visibleBounds;
}

@property (nonatomic) struct CGSize { float x1; float x2; } contentSize;
@property (nonatomic) float dimension;
@property (nonatomic) BOOL estimatesSizes;
@property (nonatomic) BOOL horizontal;
@property (nonatomic, readonly) NSArray *invalidatedIndexPaths;
@property (nonatomic) UICollectionViewFlowLayout *layout;
@property (nonatomic) BOOL leftToRight;
@property (nonatomic) struct { int x1; int x2; int x3; } rowAlignmentOptions;
@property (nonatomic, readonly) NSMutableArray *sections;
@property (nonatomic) BOOL usesFloatingHeaderFooter;

- (void).cxx_destruct;
- (id)addSection;
- (struct CGSize { float x1; float x2; })contentSize;
- (id)copy;
- (void)didUpdateSizeForSection:(int)arg1 withDelta:(float)arg2;
- (float)dimension;
- (BOOL)estimatesSizes;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameForItemAtIndexPath:(id)arg1;
- (BOOL)horizontal;
- (id)init;
- (void)invalidate:(BOOL)arg1;
- (id)invalidatedIndexPaths;
- (id)layout;
- (BOOL)leftToRight;
- (struct { int x1; int x2; int x3; })rowAlignmentOptions;
- (id)sections;
- (void)setContentSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setDimension:(float)arg1;
- (void)setEstimatesSizes:(BOOL)arg1;
- (void)setHorizontal:(BOOL)arg1;
- (void)setLayout:(id)arg1;
- (void)setLeftToRight:(BOOL)arg1;
- (void)setRowAlignmentOptions:(struct { int x1; int x2; int x3; })arg1;
- (void)setSize:(struct CGSize { float x1; float x2; })arg1 forItemAtIndexPath:(id)arg2;
- (void)setUsesFloatingHeaderFooter:(BOOL)arg1;
- (id)snapshot;
- (BOOL)usesFloatingHeaderFooter;

@end
