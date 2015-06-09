/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardAssistantBar : _UIGroupedBar {
    BOOL  _hideAssistantBar;
    UITextInputAssistantItem * m_currentAssistantItem;
    UITextInputAssistantItem * m_defaultAssistantItem;
    UIBarButtonItemGroup * m_dismissGroup;
    BOOL  m_isLandscape;
    BOOL  m_isRichText;
    BOOL  m_lightKeyboard;
    BOOL  m_needsDismissButton;
    UIBarButtonItemGroup * m_predictionGroup;
    NSLayoutConstraint * m_predictionWidthConstraint;
    BOOL  m_useLargeButton;
}

@property (nonatomic) BOOL hideAssistantBar;
@property (nonatomic) BOOL show;

+ (id)activeInstance;
+ (float)assistantBarHeight;
+ (id)sharedInstance;

- (SEL)action:(int)arg1;
- (float)assistantBarHeight;
- (float)assistantBarHeightForOrientation:(int)arg1;
- (void)assistantBold;
- (void)assistantCopy;
- (void)assistantCut;
- (void)assistantDismiss;
- (void)assistantItalic;
- (void)assistantPaste;
- (void)assistantUnderline;
- (id)barButtonItem:(unsigned int)arg1;
- (BOOL)canPerformAction:(int)arg1;
- (id)currentAssistantItem;
- (void)dealloc;
- (id)defaultAssistantItem;
- (BOOL)disabledByPrediction;
- (BOOL)enabled;
- (void)executeAction:(int)arg1;
- (BOOL)hasCustomButtons;
- (BOOL)hasItems;
- (BOOL)hideAssistantBar;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)newAssistantItemWithDefaultItems;
- (void)setCurrentAssistantItem:(id)arg1;
- (void)setHideAssistantBar:(BOOL)arg1;
- (void)setInputAssistantButtonItems;
- (void)setShow:(BOOL)arg1;
- (BOOL)show;
- (BOOL)showSwitch;
- (float)sideBarWidth;
- (void)updateBar;
- (void)updateButtons;

@end
