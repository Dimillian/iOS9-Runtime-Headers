/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardSquishTransition : UIKeyboardKeyplaneTransition {
    unsigned int  _animationType;
    NSArray * _commonVisibleKeys;
    BOOL  _disableMeshOptimization;
    NSArray * _endGeometries;
    float  _offsetX;
    double  _opacityAnimationBeginTime;
    BOOL  _opacityAnimationDirectionForward;
    CADisplayLink * _opacityAnimationDisplayLink;
    float  _previousProgress;
    NSArray * _startGeometries;
    BOOL  _useInteractiveOpacity;
    float  _widthRatio;
}

@property (nonatomic) unsigned int animationType;
@property (nonatomic, retain) NSArray *commonVisibleKeys;
@property (nonatomic) BOOL disableMeshOptimization;
@property (nonatomic, retain) NSArray *endGeometries;
@property (nonatomic) double opacityAnimationBeginTime;
@property (nonatomic) BOOL opacityAnimationDirectionForward;
@property (nonatomic, retain) CADisplayLink *opacityAnimationDisplayLink;
@property (nonatomic) float previousProgress;
@property (nonatomic, retain) NSArray *startGeometries;
@property (nonatomic) BOOL useInteractiveOpacity;

- (id)_animationsForEnd;
- (id)_animationsForStart;
- (void)_updateTransition;
- (unsigned int)animationType;
- (void)commitTransitionRebuild;
- (id)commonVisibleKeys;
- (void)dealloc;
- (BOOL)disableMeshOptimization;
- (id)endGeometries;
- (id)geometriesForKeyplane:(id)arg1;
- (id)meshTransformForKeyplane:(id)arg1 toKeyplane:(id)arg2;
- (double)opacityAnimationBeginTime;
- (BOOL)opacityAnimationDirectionForward;
- (id)opacityAnimationDisplayLink;
- (float)previousProgress;
- (void)rebuildWithStartKeyplane:(id)arg1 startView:(id)arg2 endKeyplane:(id)arg3 endView:(id)arg4;
- (void)removeAllAnimations;
- (void)setAnimationType:(unsigned int)arg1;
- (void)setCommonVisibleKeys:(id)arg1;
- (void)setDisableMeshOptimization:(BOOL)arg1;
- (void)setEndGeometries:(id)arg1;
- (void)setOpacityAnimationBeginTime:(double)arg1;
- (void)setOpacityAnimationDirectionForward:(BOOL)arg1;
- (void)setOpacityAnimationDisplayLink:(id)arg1;
- (void)setPreviousProgress:(float)arg1;
- (void)setStartGeometries:(id)arg1;
- (void)setUseInteractiveOpacity:(BOOL)arg1;
- (id)sortedCommonVisibleKeys;
- (id)startGeometries;
- (id)symmetricMeshTransformForKeyplane:(id)arg1;
- (void)updateOpacityAnimation:(id)arg1;
- (void)updateWithProgress:(float)arg1;
- (BOOL)useInteractiveOpacity;

@end
