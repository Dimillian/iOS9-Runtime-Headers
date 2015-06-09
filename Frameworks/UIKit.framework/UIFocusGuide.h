/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIFocusGuide : UILayoutGuide <_UIFocusRegion> {
    BOOL  _enabled;
    UIView * _preferredFocusedView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic) BOOL enabled;
@property (readonly) unsigned int hash;
@property (nonatomic) UIView *preferredFocusedView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_childFocusRegions;
- (void)_didUpdateFocusToPreferredFocusedView;
- (id)_focusDebugOverlayParentView;
- (BOOL)_focusRegionCanBecomeFocused;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_focusRegionFrame;
- (id)_focusRegionGuides;
- (BOOL)_focusRegionIsEligibleForFocus;
- (id)_focusRegionItem;
- (id)_focusRegionView;
- (BOOL)_isTransparentFocusRegion;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEnabled;
- (id)preferredFocusedView;
- (void)setEnabled:(BOOL)arg1;
- (void)setPreferredFocusedView:(id)arg1;

@end
