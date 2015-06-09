/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIGravityBehavior : UIDynamicBehavior {
    struct CGPoint { 
        float x; 
        float y; 
    }  _gravity;
}

@property (nonatomic) float angle;
@property (nonatomic) struct CGVector { float x1; float x2; } gravityDirection;
@property (nonatomic, readonly, copy) NSArray *items;
@property (nonatomic) float magnitude;

+ (BOOL)_isPrimitiveBehavior;

- (void)_addItem:(id)arg1;
- (void)_associate;
- (void)_dissociate;
- (void)_setAngle:(float)arg1 magnitude:(float)arg2;
- (void)addItem:(id)arg1;
- (float)angle;
- (struct CGPoint { float x1; float x2; })denormalizedGravity;
- (id)description;
- (struct CGPoint { float x1; float x2; })gravity;
- (struct CGVector { float x1; float x2; })gravityDirection;
- (id)init;
- (id)initWithItems:(id)arg1;
- (id)items;
- (float)magnitude;
- (void)removeItem:(id)arg1;
- (void)setAngle:(float)arg1;
- (void)setAngle:(float)arg1 magnitude:(float)arg2;
- (void)setGravity:(struct CGPoint { float x1; float x2; })arg1;
- (void)setGravityDirection:(struct CGVector { float x1; float x2; })arg1;
- (void)setMagnitude:(float)arg1;
- (void)setXComponent:(float)arg1;
- (void)setXComponent:(float)arg1 yComponent:(float)arg2;
- (void)setYComponent:(float)arg1;
- (float)xComponent;
- (float)yComponent;

@end
