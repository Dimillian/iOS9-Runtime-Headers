/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIDynamicsDebug : NSObject <GLKViewDelegate> {
    UIDynamicAnimator * _animator;
    EAGLContext * _ctx;
    GLKView * _debugView;
    GLKBaseEffect * _effect;
    BOOL  _enabled;
    BOOL  _showFields;
    BOOL  _showOutlineInterior;
    BOOL  _showPhysics;
    unsigned int  _vertexBuffer;
    struct { 
        struct { 
            float x; 
            float y; 
        } position; 
        /* Warning: Unrecognized filer type: '}' using 'void*' */ void*color; 
    }  _vertices;
}

@property (nonatomic) UIDynamicAnimator *animator;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) GLKView *debugView;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL enabled;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL showFields;
@property (nonatomic) BOOL showOutlineInterior;
@property (nonatomic) BOOL showPhysics;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_setupDebugViewIfNeccessary;
- (void)_teardownDebugView;
- (id)animator;
- (void)captureDebugInformation;
- (void)dealloc;
- (id)debugView;
- (BOOL)enabled;
- (void)glkView:(id)arg1 drawInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (id)init;
- (id)initWithAnimator:(id)arg1;
- (void)setAnimator:(id)arg1;
- (void)setDebugView:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setNeedsDisplay;
- (void)setShowFields:(BOOL)arg1;
- (void)setShowOutlineInterior:(BOOL)arg1;
- (void)setShowPhysics:(BOOL)arg1;
- (BOOL)showFields;
- (BOOL)showOutlineInterior;
- (BOOL)showPhysics;

@end
