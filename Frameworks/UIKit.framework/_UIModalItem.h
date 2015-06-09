/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIModalItem : NSObject {
    UIViewController * _anchorViewController;
    _UIModalItemBackgroundView * _backgroundView;
    NSArray * _buttonTitles;
    int  _cancelButtonIndex;
    NSString * _cancelButtonTitle;
    id /* block */  _completionBlock;
    _UIModalItemContentView * _contentView;
    UIViewController * _contentViewController;
    struct CGSize { 
        float width; 
        float height; 
    }  _contentViewControllerSize;
    int  _defaultButtonIndex;
    NSString * _defaultButtonTitle;
    <UIModalItemDelegate> * _delegate;
    int  _dismissAnimationType;
    int  _dismissIndex;
    BOOL  _dontUpdateFrameForKBChanges;
    BOOL  _enableFirstOtherButton;
    BOOL  _forceVerticalLayout;
    UIViewController * _hostingViewController;
    BOOL  _isBeingDismissed;
    BOOL  _isHidden;
    BOOL  _isPresented;
    BOOL  _isVisible;
    int  _itemType;
    NSString * _loginPlaceholderString;
    NSString * _loginString;
    UITextInputTraits * _loginTraits;
    NSString * _message;
    NSAttributedString * _messageAttributedString;
    int  _messageMaxLineNumber;
    int  _modalItemInputStyle;
    int  _numberOfButtonsRows;
    NSMutableArray * _otherButtonsTitles;
    NSString * _passwordPlaceholderString;
    NSString * _passwordString;
    UITextInputTraits * _passwordTraits;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  _popoverTargetRect;
    UIView * _popoverTargetView;
    int  _presentAnimationType;
    _UIModalItemRepresentationView * _representedView;
    NSString * _subtitleString;
    BOOL  _textFieldsHidden;
    NSString * _title;
    NSAttributedString * _titleAttributedString;
    int  _titleMaxLineNumber;
    BOOL  _useUndoStyle;
    BOOL  _useWifiPickerLayout;
    UIViewController * _viewController;
    int  cancelButtonIndex;
}

@property (getter=_viewController, setter=_setViewController:, nonatomic, retain) UIViewController *_viewController;
@property (nonatomic, retain) _UIModalItemBackgroundView *backgroundView;
@property (nonatomic, copy) NSArray *buttonTitles;
@property (nonatomic) int cancelButtonIndex;
@property (nonatomic, retain) _UIModalItemContentView *contentView;
@property (nonatomic, retain) UIViewController *contentViewController;
@property (nonatomic) struct CGSize { float x1; float x2; } contentViewControllerSize;
@property (nonatomic) int defaultButtonIndex;
@property (nonatomic) <UIModalItemDelegate> *delegate;
@property (nonatomic) int dismissAnimationType;
@property (nonatomic) int dismissIndex;
@property (nonatomic) BOOL dontUpdateFrameForKBChanges;
@property (nonatomic) BOOL enableFirstOtherButton;
@property (nonatomic) BOOL forceVerticalLayout;
@property (nonatomic) BOOL isBeingDismissed;
@property (nonatomic) BOOL isHidden;
@property (readonly) BOOL isPresented;
@property (nonatomic, copy) NSString *loginPlaceholderString;
@property (nonatomic, copy) NSString *loginString;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, copy) NSAttributedString *messageAttributedString;
@property (nonatomic) int messageMaxLineNumber;
@property (nonatomic) int modalItemInputStyle;
@property (nonatomic) int numberOfButtonsRows;
@property (nonatomic, copy) NSString *passwordPlaceholderString;
@property (nonatomic, copy) NSString *passwordString;
@property (nonatomic) int presentAnimationType;
@property (nonatomic, copy) NSString *subtitleString;
@property (nonatomic) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } targetRect;
@property (nonatomic) UIView *targetView;
@property (nonatomic) BOOL textFieldsHidden;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSAttributedString *titleAttributedString;
@property (nonatomic) int titleMaxLineNumber;
@property (nonatomic) int type;
@property (nonatomic) BOOL useUndoStyle;
@property (nonatomic) BOOL useWifiPickerLayout;
@property (nonatomic, readonly) UIViewController *viewController;

+ (id)modalItemWithType:(int)arg1 title:(id)arg2 message:(id)arg3 buttonTitles:(id)arg4 completion:(id /* block */)arg5;

- (id)_anchorViewController;
- (id)_backgroundView;
- (id)_cancelButtonTitle;
- (id)_contentView;
- (id)_defaultButtonTitle;
- (id)_hostingViewController;
- (void)_loginFieldTextDidChange;
- (id)_loginTraits;
- (float)_maxHeight;
- (float)_maxWidth;
- (id)_otherButtonsTitles;
- (void)_passwordFieldTextDidChange;
- (id)_passwordTraits;
- (id)_popoverBackgroundView;
- (id)_representedView;
- (void)_setAnchorViewController:(id)arg1;
- (void)_setHostingViewController:(id)arg1;
- (void)_setRepresentedView:(id)arg1;
- (void)_setViewController:(id)arg1;
- (id)_typeKey;
- (void)_updateContentView;
- (id)_viewController;
- (int)addButtonWithTitle:(id)arg1;
- (id)backgroundView;
- (id)buttonTitleAtIndex;
- (id)buttonTitles;
- (int)cancelButtonIndex;
- (id)contentView;
- (id)contentViewController;
- (struct CGSize { float x1; float x2; })contentViewControllerSize;
- (void)dealloc;
- (int)defaultButtonIndex;
- (id)delegate;
- (int)dismissAnimationType;
- (int)dismissIndex;
- (BOOL)dontUpdateFrameForKBChanges;
- (BOOL)enableFirstOtherButton;
- (BOOL)forceVerticalLayout;
- (id)initWithTitle:(id)arg1 message:(id)arg2 otherButtonTitles:(id)arg3 completion:(id /* block */)arg4 delegate:(id)arg5;
- (BOOL)isBeingDismissed;
- (BOOL)isHidden;
- (BOOL)isPresented;
- (id)loginPlaceholderString;
- (id)loginString;
- (id)message;
- (id)messageAttributedString;
- (int)messageMaxLineNumber;
- (int)modalItemInputStyle;
- (int)numberOfButtonsRows;
- (id)passwordPlaceholderString;
- (id)passwordString;
- (int)presentAnimationType;
- (void)refreshButtonTitle;
- (void)setBackgroundView:(id)arg1;
- (void)setButtonTitles:(id)arg1;
- (void)setCancelButtonIndex:(int)arg1;
- (void)setContentView:(id)arg1;
- (void)setContentViewController:(id)arg1;
- (void)setContentViewControllerSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setDefaultButtonIndex:(int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDismissAnimationType:(int)arg1;
- (void)setDismissIndex:(int)arg1;
- (void)setDontUpdateFrameForKBChanges:(BOOL)arg1;
- (void)setEnableFirstOtherButton:(BOOL)arg1;
- (void)setForceVerticalLayout:(BOOL)arg1;
- (void)setIsBeingDismissed:(BOOL)arg1;
- (void)setIsHidden:(BOOL)arg1;
- (void)setLoginPlaceholderString:(id)arg1;
- (void)setLoginString:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setMessageAttributedString:(id)arg1;
- (void)setMessageMaxLineNumber:(int)arg1;
- (void)setModalItemInputStyle:(int)arg1;
- (void)setNumberOfButtonsRows:(int)arg1;
- (void)setPasswordPlaceholderString:(id)arg1;
- (void)setPasswordString:(id)arg1;
- (void)setPresentAnimationType:(int)arg1;
- (void)setSubtitleString:(id)arg1;
- (void)setTargetRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setTargetView:(id)arg1;
- (void)setTextFieldsHidden:(BOOL)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleAttributedString:(id)arg1;
- (void)setTitleMaxLineNumber:(int)arg1;
- (void)setType:(int)arg1;
- (void)setUseUndoStyle:(BOOL)arg1;
- (void)setUseWifiPickerLayout:(BOOL)arg1;
- (id)subtitleString;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })targetRect;
- (id)targetView;
- (id)textFieldAtIndex:(int)arg1;
- (BOOL)textFieldsHidden;
- (id)title;
- (id)titleAttributedString;
- (int)titleMaxLineNumber;
- (int)type;
- (BOOL)useUndoStyle;
- (BOOL)useWifiPickerLayout;
- (id)viewController;

@end
