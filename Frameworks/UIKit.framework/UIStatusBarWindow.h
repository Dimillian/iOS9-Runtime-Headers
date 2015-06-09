/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIStatusBarWindow : UIWindow {
    UIStatusBarCorners * _bottomCorners;
    BOOL  _cornersHidden;
    int  _orientation;
    UIStatusBar * _statusBar;
    UIStatusBarCorners * _topCorners;
    float  _topCornersOffset;
}

+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_defaultStatusBarSceneBounds;
+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_defaultStatusBarSceneBoundsForOrientation:(int)arg1;
+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_defaultStatusBarSceneReferenceBounds;
+ (BOOL)_isSystemWindow;
+ (BOOL)isIncludedInClassicJail;
+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })statusBarWindowFrame;

- (void).cxx_destruct;
- (BOOL)_canActAsKeyWindowForScreen:(id)arg1;
- (BOOL)_disableGroupOpacity;
- (BOOL)_isStatusBarWindow;
- (void)_rotate;
- (BOOL)_shouldAdjustSizeClassesAndResizeWindow;
- (BOOL)_shouldZoom;
- (void)_updateTransformLayerForClassicPresentation;
- (void)dealloc;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (int)orientation;
- (void)setCornersHidden:(BOOL)arg1 animationParameters:(id)arg2;
- (void)setOrientation:(int)arg1 animationParameters:(id)arg2;
- (void)setStatusBar:(id)arg1;
- (void)setTopCornerStyle:(int)arg1 topCornersOffset:(float)arg2 bottomCornerStyle:(int)arg3 animationParameters:(id)arg4;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })statusBarWindowFrame;

@end
