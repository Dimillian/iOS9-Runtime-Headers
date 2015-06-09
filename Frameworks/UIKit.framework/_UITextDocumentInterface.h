/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UITextDocumentInterface : UIInputViewControllerInterface <UITextDocumentProxy> {
    _UIInputViewControllerOutput * _controllerOutput;
    _UIInputViewControllerState * _controllerState;
    <_UITextDocumentInterfaceDelegate> * _delegate;
    TIKeyboardOutput * _keyboardOutput;
}

@property (nonatomic) int autocapitalizationType;
@property (nonatomic) int autocorrectionType;
@property (getter=_controllerOutput, nonatomic, retain) _UIInputViewControllerOutput *controllerOutput;
@property (getter=_controllerState, nonatomic, retain) _UIInputViewControllerState *controllerState;
@property (readonly, copy) NSString *debugDescription;
@property (getter=_delegate, nonatomic) <_UITextDocumentInterfaceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *documentContextAfterInput;
@property (nonatomic, readonly) NSString *documentContextBeforeInput;
@property (getter=_documentState, nonatomic, readonly) TIDocumentState *documentState;
@property (nonatomic) BOOL enablesReturnKeyAutomatically;
@property (readonly) unsigned int hash;
@property (nonatomic) int keyboardAppearance;
@property (getter=_keyboardOutput, nonatomic, readonly) TIKeyboardOutput *keyboardOutput;
@property (nonatomic) int keyboardType;
@property (nonatomic, copy) NSString *recentInputIdentifier;
@property (nonatomic) int returnKeyType;
@property (getter=isSecureTextEntry, nonatomic) BOOL secureTextEntry;
@property (nonatomic) int spellCheckingType;
@property (readonly) Class superclass;
@property (getter=_textInputTraits, nonatomic, readonly) TITextInputTraits *textInputTraits;

- (id)_controllerOutput;
- (id)_controllerState;
- (void)_createControllerOutputIfNecessary;
- (id)_delegate;
- (void)_didPerformOutputOperation;
- (id)_documentState;
- (void)_handleInputViewControllerState:(id)arg1;
- (id)_keyboardOutput;
- (void)_setPrimaryLanguage:(id)arg1;
- (void)_setShouldAdvanceInputMode;
- (void)_setShouldDismiss;
- (id)_textInputTraits;
- (void)_willPerformOutputOperation;
- (void)adjustTextPositionByCharacterOffset:(int)arg1;
- (int)autocapitalizationType;
- (int)autocorrectionType;
- (void)dealloc;
- (void)deleteBackward;
- (id)documentContextAfterInput;
- (id)documentContextBeforeInput;
- (BOOL)enablesReturnKeyAutomatically;
- (BOOL)hasText;
- (void)insertText:(id)arg1;
- (BOOL)isSecureTextEntry;
- (int)keyboardAppearance;
- (int)keyboardType;
- (int)returnKeyType;
- (void)setControllerOutput:(id)arg1;
- (void)setControllerState:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setForwardingInterface:(id)arg1;
- (int)spellCheckingType;

@end
