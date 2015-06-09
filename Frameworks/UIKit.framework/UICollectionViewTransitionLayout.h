/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UICollectionViewTransitionLayout : UICollectionViewLayout {
    float  _accuracy;
    NSMutableArray * _appearingLayoutAttributes;
    struct CGSize { 
        float width; 
        float height; 
    }  _contentSize;
    NSMutableDictionary * _currentLayoutInfos;
    NSMutableArray * _disappearingLayoutAttributes;
    UICollectionViewLayout * _fromLayout;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  _fromVisibleBounds;
    BOOL  _haveValidInfos;
    BOOL  _layoutIsValid;
    UICollectionViewLayout * _toLayout;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  _toVisibleBounds;
    NSMutableDictionary * _transitionInformationsDict;
    float  _transitionProgress;
}

@property (nonatomic, readonly) UICollectionViewLayout *currentLayout;
@property (nonatomic, readonly) UICollectionViewLayout *nextLayout;
@property (nonatomic) float transitionProgress;

- (void).cxx_destruct;
- (void)_finalizeLayoutTransition;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_newVisibleBounds;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_oldVisibleBounds;
- (void)_prepareForTransitionFromLayout:(id)arg1;
- (void)_prepareForTransitionToLayout:(id)arg1;
- (void)_setCollectionView:(id)arg1;
- (BOOL)_supportsAdvancedTransitionAnimations;
- (struct CGSize { float x1; float x2; })collectionViewContentSize;
- (id)currentLayout;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithCurrentLayout:(id)arg1 nextLayout:(id)arg2;
- (id)interpolatedLayoutAttributesFromLayoutAttributes:(id)arg1 toLayoutAttributes:(id)arg2 progress:(float)arg3;
- (void)invalidateLayout;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)nextLayout;
- (void)prepareLayout;
- (void)setTransitionProgress:(float)arg1;
- (struct CGPoint { float x1; float x2; })targetContentOffsetForProposedContentOffset:(struct CGPoint { float x1; float x2; })arg1;
- (float)transitionProgress;
- (void)updateValue:(float)arg1 forAnimatedKey:(id)arg2;
- (float)valueForAnimatedKey:(id)arg1;

@end
