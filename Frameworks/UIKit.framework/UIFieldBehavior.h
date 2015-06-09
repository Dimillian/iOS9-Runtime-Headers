/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIFieldBehavior : UIDynamicBehavior {
    PKPhysicsField * _field;
    struct { 
        unsigned int fieldIsKindOfNoiseField : 1; 
    }  _fieldFlags;
    UIRegion * _region;
}

@property (nonatomic, readonly) PKPhysicsField *_field;
@property (nonatomic) float animationSpeed;
@property (nonatomic) struct CGVector { float x1; float x2; } direction;
@property (nonatomic) float falloff;
@property (nonatomic, readonly, copy) NSArray *items;
@property (nonatomic) float minimumRadius;
@property (nonatomic) struct CGPoint { float x1; float x2; } position;
@property (nonatomic, retain) UIRegion *region;
@property (nonatomic) float smoothness;
@property (nonatomic) float strength;

+ (BOOL)_isPrimitiveBehavior;
+ (id)dragField;
+ (id)electricField;
+ (id)fieldWithEvaluationBlock:(id /* block */)arg1;
+ (id)linearGravityFieldWithVector:(struct CGVector { float x1; float x2; })arg1;
+ (id)magneticField;
+ (id)noiseFieldWithSmoothness:(float)arg1 animationSpeed:(float)arg2;
+ (id)radialGravityFieldWithPosition:(struct CGPoint { float x1; float x2; })arg1;
+ (id)springField;
+ (id)turbulenceFieldWithSmoothness:(float)arg1 animationSpeed:(float)arg2;
+ (id)velocityFieldWithVector:(struct CGVector { float x1; float x2; })arg1;
+ (id)vortexField;

- (void).cxx_destruct;
- (void)_addItem:(id)arg1;
- (void)_associate;
- (void)_changedParameter;
- (void)_dissociate;
- (id)_field;
- (id)_initWithField:(id)arg1;
- (void)addItem:(id)arg1;
- (float)animationSpeed;
- (struct CGVector { float x1; float x2; })direction;
- (float)falloff;
- (id)init;
- (BOOL)isEnabled;
- (id)items;
- (float)minimumRadius;
- (struct CGPoint { float x1; float x2; })position;
- (id)region;
- (void)removeItem:(id)arg1;
- (void)setAnimationSpeed:(float)arg1;
- (void)setDirection:(struct CGVector { float x1; float x2; })arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setFalloff:(float)arg1;
- (void)setMinimumRadius:(float)arg1;
- (void)setPosition:(struct CGPoint { float x1; float x2; })arg1;
- (void)setRegion:(id)arg1;
- (void)setSmoothness:(float)arg1;
- (void)setStrength:(float)arg1;
- (float)smoothness;
- (float)strength;

@end
