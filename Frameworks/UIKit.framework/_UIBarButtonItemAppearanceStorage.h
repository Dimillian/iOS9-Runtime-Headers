/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIBarButtonItemAppearanceStorage : _UIBarItemAppearanceStorage {
    _UIBarBackButtonItemAppearanceStorage * backButtonAppearance;
    NSMutableDictionary * backgroundImages;
    NSMutableDictionary * backgroundVerticalAdjustmentsForBarMetrics;
    NSMutableDictionary * miniBackgroundImages;
    NSValue * miniTitlePositionOffset;
    UIColor * tintColor;
    NSValue * titlePositionOffset;
}

@property (nonatomic, retain) NSValue *backButtonTitlePositionOffset;
@property (nonatomic, retain) NSValue *miniBackButtonTitlePositionOffset;
@property (nonatomic, retain) NSValue *miniTitlePositionOffset;
@property (nonatomic, retain) UIColor *tintColor;
@property (nonatomic, retain) NSValue *titlePositionOffset;

- (void).cxx_destruct;
- (id)anyBackButtonBackgroundImage;
- (id)anyBackgroundImage;
- (id)backButtonBackgroundImageForState:(unsigned int)arg1 isMini:(BOOL)arg2;
- (float)backButtonBackgroundVerticalAdjustmentForBarMetrics:(int)arg1;
- (id)backButtonTitlePositionOffset;
- (id)backgroundImageForState:(unsigned int)arg1 style:(int)arg2 isMini:(BOOL)arg3;
- (float)backgroundVerticalAdjustmentForBarMetrics:(int)arg1;
- (id)miniBackButtonTitlePositionOffset;
- (id)miniTitlePositionOffset;
- (void)setBackButtonBackgroundImage:(id)arg1 forState:(unsigned int)arg2 isMini:(BOOL)arg3;
- (void)setBackButtonBackgroundVerticalAdjustment:(float)arg1 forBarMetrics:(int)arg2;
- (void)setBackButtonTitlePositionOffset:(id)arg1;
- (void)setBackgroundImage:(id)arg1 forState:(unsigned int)arg2 style:(int)arg3 isMini:(BOOL)arg4;
- (void)setBackgroundVerticalAdjustment:(float)arg1 forBarMetrics:(int)arg2;
- (void)setMiniBackButtonTitlePositionOffset:(id)arg1;
- (void)setMiniTitlePositionOffset:(id)arg1;
- (void)setTintColor:(id)arg1;
- (void)setTitlePositionOffset:(id)arg1;
- (id)tintColor;
- (id)titlePositionOffset;

@end
