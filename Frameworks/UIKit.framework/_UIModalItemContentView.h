/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIModalItemContentView : UIView <UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate> {
    UIViewController * _accessoryViewController;
    UIView * _accessoryViewControllerContrainerView;
    struct CGSize { 
        float width; 
        float height; 
    }  _accessoryViewControllerSize;
    struct CGSize { 
        float width; 
        float height; 
    }  _actualViewControllerSize;
    UITableView * _buttonTable;
    UIButton * _cancelButton;
    int  _cancelButtonIndex;
    UIButton * _defaultButton;
    int  _defaultButtonIndex;
    BOOL  _enableFirstOtherButton;
    UITextField * _loginTextField;
    struct CGSize { 
        float width; 
        float height; 
    }  _maxSize;
    UILabel * _messageLabel;
    _UIModalItem * _modalItem;
    UITextField * _passwordTextField;
    struct CGSize { 
        float width; 
        float height; 
    }  _presentingSize;
    _UIModalItemsPresentingViewController * _presentingViewController;
    UILabel * _subtitleLabel;
    UILabel * _titleLabel;
}

@property (nonatomic, readonly) UIViewController *accessoryViewController;
@property (nonatomic, readonly) UIView *accessoryViewControllerContrainerView;
@property (nonatomic, readonly) struct CGSize { float x1; float x2; } accessoryViewControllerSize;
@property (nonatomic) struct CGSize { float x1; float x2; } actualViewControllerSize;
@property (nonatomic, readonly) UITableView *buttonTable;
@property (nonatomic, retain) UIButton *cancelButton;
@property (nonatomic, readonly) int cancelButtonIndex;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) UIButton *defaultButton;
@property (nonatomic, readonly) int defaultButtonIndex;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL enableFirstOtherButton;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) UITextField *loginTextField;
@property (nonatomic) struct CGSize { float x1; float x2; } maxSize;
@property (nonatomic, readonly) UILabel *messageLabel;
@property (nonatomic) _UIModalItem *modalItem;
@property (nonatomic, readonly) UITextField *passwordTextField;
@property (nonatomic) struct CGSize { float x1; float x2; } presentingSize;
@property (nonatomic) _UIModalItemsPresentingViewController *presentingViewController;
@property (nonatomic, readonly) UILabel *subtitleLabel;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UILabel *titleLabel;

- (void)_createAndConfigureButtonTable;
- (void)_createAndConfigureMessageLabel;
- (void)_createAndConfigureSubtitleLabel;
- (void)_createAndConfigureTextFieldsForInputStyle:(int)arg1;
- (void)_createAndConfigureTitleLabel;
- (void)_createViewControllerContentView;
- (void)_reloadButtons;
- (id)accessoryViewController;
- (id)accessoryViewControllerContrainerView;
- (struct CGSize { float x1; float x2; })accessoryViewControllerSize;
- (struct CGSize { float x1; float x2; })actualViewControllerSize;
- (id)buttonTable;
- (id)cancelButton;
- (int)cancelButtonIndex;
- (void)dealloc;
- (id)defaultButton;
- (int)defaultButtonIndex;
- (BOOL)enableFirstOtherButton;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layout;
- (id)loginTextField;
- (struct CGSize { float x1; float x2; })maxSize;
- (id)messageLabel;
- (id)modalItem;
- (id)passwordTextField;
- (struct CGSize { float x1; float x2; })presentingSize;
- (id)presentingViewController;
- (void)setActualViewControllerSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setCancelButton:(id)arg1;
- (void)setDefaultButton:(id)arg1;
- (void)setEnableFirstOtherButton:(BOOL)arg1;
- (void)setMaxSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setModalItem:(id)arg1;
- (void)setModalItem:(id)arg1 skipLayout:(BOOL)arg2;
- (void)setPresentingSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setPresentingViewController:(id)arg1;
- (id)subtitleLabel;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)textFieldValueDidChange:(id)arg1;
- (id)titleLabel;

@end
