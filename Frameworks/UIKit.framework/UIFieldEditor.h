/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIFieldEditor : UIScrollView <NSLayoutManagerDelegate, NSUITextViewCommonMethods, UIAutoscrollContainer, UIKeyInputPrivate, UIKeyboardInput, UITextAutoscrolling, UITextInput, UITextInputControllerDelegate> {
    UIAutoscroll * _autoscroll;
    struct CGPoint { 
        float x; 
        float y; 
    }  _autoscrollContentOffset;
    _UIFieldEditorContentView * _contentView;
    float  _contentWidth;
    struct { 
        unsigned int delegateRespondsToFieldEditorDidChange : 1; 
        unsigned int delegateRespondsToShouldInsertText : 1; 
        unsigned int delegateRespondsToShouldReplaceWithText : 1; 
        unsigned int suppressScrollToSelection : 1; 
        unsigned int clearOnNextEdit : 1; 
    }  _feFlags;
    UITextInputController * _inputController;
    _UIFieldEditorLayoutManager * _layoutManager;
    NSTimer * _obscureAllTextTimer;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  _padding;
    _UIFieldEditorContentView * _passcodeStyleCutoutView;
    UITextField * _proxiedView;
    NSTextContainer * _textContainer;
    struct CGPoint { 
        float x; 
        float y; 
    }  _textContainerOrigin;
    _UICascadingTextStorage * _textStorage;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    }  _unobscuredSecureRange;
}

@property (nonatomic) int autocapitalizationType;
@property (nonatomic) int autocorrectionType;
@property (nonatomic) struct CGPoint { float x1; float x2; } autoscrollContentOffset;
@property (nonatomic, readonly) UITextPosition *beginningOfDocument;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL enablesReturnKeyAutomatically;
@property (nonatomic, readonly) UITextPosition *endOfDocument;
@property (readonly) unsigned int hash;
@property (nonatomic) <UITextInputDelegate> *inputDelegate;
@property (nonatomic) int keyboardAppearance;
@property (nonatomic) int keyboardType;
@property (nonatomic, readonly) int layoutOrientation;
@property (nonatomic) struct _NSRange { unsigned int x1; unsigned int x2; } markedRange;
@property (nonatomic, readonly) UITextRange *markedTextRange;
@property (nonatomic, copy) NSDictionary *markedTextStyle;
@property (nonatomic) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } padding;
@property (nonatomic, copy) NSString *recentInputIdentifier;
@property (nonatomic) int returnKeyType;
@property (getter=isSecureTextEntry, nonatomic) BOOL secureTextEntry;
@property (copy) UITextRange *selectedTextRange;
@property (nonatomic) int selectionAffinity;
@property (nonatomic) int spellCheckingType;
@property (readonly) Class superclass;
@property (nonatomic) NSTextContainer *textContainer;
@property (nonatomic, readonly) UIView *textInputView;
@property (nonatomic, readonly) <UITextInputTokenizer> *tokenizer;
@property (nonatomic, copy) NSDictionary *typingAttributes;

+ (id)activeFieldEditor;
+ (id)excludedElementsForHTML;
+ (void)releaseSharedInstance;
+ (id)sharedFieldEditor;

- (void).cxx_destruct;
- (void)_cancelObscureAllTextTimer;
- (BOOL)_clearOnEditIfNeeded;
- (BOOL)_hasDictationPlaceholder;
- (id)_inputController;
- (BOOL)_isPasscodeStyle;
- (id)_layoutManager;
- (void)_obscureAllText;
- (void)_performWhileSuppressingDelegateNotifications:(id /* block */)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_responderExternalTouchRectForWindow:(id)arg1;
- (id)_responderForBecomeFirstResponder;
- (void)_scrollRangeToVisible:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 animated:(BOOL)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_selectionClipRect;
- (void)_setValue:(id)arg1 forTextAttribute:(id)arg2;
- (BOOL)_shouldObscureInput;
- (id)_textContainer;
- (struct CGPoint { float x1; float x2; })_textContainerOrigin;
- (id)_textInputTraits;
- (id)_textSelectingContainer;
- (id)_textStorage;
- (void)_textStorageDidProcessEditing:(id)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_unobscuredSecureRange;
- (void)addTextAlternativesDisplayStyleToRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (int)atomStyle;
- (id)attributedText;
- (struct CGPoint { float x1; float x2; })autoscrollContentOffset;
- (int)baseWritingDirectionForPosition:(id)arg1 inDirection:(int)arg2;
- (void)becomeFieldEditorForView:(id)arg1;
- (void)beginSelectionChange;
- (id)beginningOfDocument;
- (void)cancelAutoscroll;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })caretRectForPosition:(id)arg1;
- (unsigned int)characterOffsetAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)characterRangeAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)characterRangeByExtendingPosition:(id)arg1 inDirection:(int)arg2;
- (void)clearText;
- (id)closestPositionToPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)closestPositionToPoint:(struct CGPoint { float x1; float x2; })arg1 withinRange:(id)arg2;
- (int)comparePosition:(id)arg1 toPosition:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })contentFrameForView:(id)arg1;
- (void)dealloc;
- (void)deleteBackward;
- (void)drawTextInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forContentView:(id)arg2;
- (BOOL)drawsAsAtom;
- (id)endOfDocument;
- (void)endSelectionChange;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })firstRectForRange:(id)arg1;
- (id)font;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameForDictationResultPlaceholder:(id)arg1;
- (BOOL)hasMarkedText;
- (BOOL)hasText;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)inputDelegate;
- (void)insertDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2;
- (id)insertDictationResultPlaceholder;
- (struct _NSRange { unsigned int x1; unsigned int x2; })insertFilteredText:(id)arg1;
- (void)insertText:(id)arg1;
- (id)interactionAssistant;
- (void)invalidateTextContainerOrigin;
- (BOOL)isEditing;
- (BOOL)isFirstResponder;
- (BOOL)isHorizontallyResizable;
- (BOOL)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(BOOL)arg3;
- (BOOL)keyboardInput:(id)arg1 shouldReplaceTextInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 replacementText:(id)arg3;
- (BOOL)keyboardInputChanged:(id)arg1;
- (void)keyboardInputChangedSelection:(id)arg1;
- (BOOL)keyboardInputShouldDelete:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })layoutManager:(id)arg1 boundingBoxForControlGlyphAtIndex:(unsigned int)arg2 forTextContainer:(id)arg3 proposedLineFragment:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg4 glyphPosition:(struct CGPoint { float x1; float x2; })arg5 characterIndex:(unsigned int)arg6;
- (void)layoutManager:(id)arg1 didCompleteLayoutForTextContainer:(id)arg2 atEnd:(BOOL)arg3;
- (unsigned int)layoutManager:(id)arg1 shouldGenerateGlyphs:(const unsigned short*)arg2 properties:(const int*)arg3 characterIndexes:(const unsigned int*)arg4 font:(id)arg5 forGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg6;
- (int)layoutManager:(id)arg1 shouldUseAction:(int)arg2 forControlCharacterAtIndex:(unsigned int)arg3;
- (int)layoutOrientation;
- (void)layoutSubviews;
- (id)linkTextAttributes;
- (struct _NSRange { unsigned int x1; unsigned int x2; })markedRange;
- (id)markedTextRange;
- (id)markedTextStyle;
- (id)metadataDictionariesForDictationResults;
- (id)methodSignatureForSelector:(SEL)arg1;
- (struct CGSize { float x1; float x2; })minSize;
- (int)offsetFromPosition:(id)arg1 toPosition:(id)arg2;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })padding;
- (id)positionFromPosition:(id)arg1 inDirection:(int)arg2 offset:(int)arg3;
- (id)positionFromPosition:(id)arg1 offset:(int)arg2;
- (id)positionWithinRange:(id)arg1 farthestInDirection:(int)arg2;
- (id)proxiedView;
- (id)rangeWithTextAlternatives:(id*)arg1 atPosition:(id)arg2;
- (void)removeDictationResultPlaceholder:(id)arg1 willInsertResult:(BOOL)arg2;
- (void)replaceRange:(id)arg1 withText:(id)arg2;
- (void)replaceRangeWithTextWithoutClosingTyping:(id)arg1 replacementText:(id)arg2;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)revealSelection;
- (void)scrollSelectionToVisible:(BOOL)arg1;
- (int)scrollXOffset;
- (int)scrollYOffset;
- (void)selectAll;
- (id)selectedTextRange;
- (struct _NSRange { unsigned int x1; unsigned int x2; })selectionRange;
- (id)selectionRectsForRange:(id)arg1;
- (void)setAttributedText:(id)arg1;
- (void)setAttributedText:(id)arg1 andSetCaretSelectionAfterText:(BOOL)arg2;
- (void)setAutoscrollContentOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)setBaseWritingDirection:(int)arg1 forRange:(id)arg2;
- (void)setConstrainedFrameSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setFont:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setInputDelegate:(id)arg1;
- (void)setLayoutOrientation:(int)arg1;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)setMarkedTextStyle:(id)arg1;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 avoidAdditionalLayout:(BOOL)arg2;
- (void)setPadding:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setScrollXOffset:(int)arg1 scrollYOffset:(int)arg2;
- (void)setScrollXOffset:(int)arg1 scrollYOffset:(int)arg2 adjustForPurpleCaret:(BOOL)arg3;
- (void)setSecureTextEntry:(BOOL)arg1;
- (void)setSelectedTextRange:(id)arg1;
- (void)setSelection:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)setStyle:(id)arg1;
- (void)setText:(id)arg1;
- (void)setText:(id)arg1 andSetCaretSelectionAfterText:(BOOL)arg2;
- (void)setTextColor:(id)arg1;
- (void)setTextContainer:(id)arg1;
- (void)setTypingAttributes:(id)arg1;
- (void)startAutoscroll:(struct CGPoint { float x1; float x2; })arg1;
- (id)style;
- (id)text;
- (id)textColor;
- (id)textColorForCaretSelection;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })textContainerInset;
- (struct CGPoint { float x1; float x2; })textContainerOrigin;
- (id)textInRange:(id)arg1;
- (void)textInput:(id)arg1 prepareAttributedTextForInsertion:(id)arg2;
- (BOOL)textInput:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 replacementText:(id)arg3;
- (struct _NSRange { unsigned int x1; unsigned int x2; })textInput:(id)arg1 willChangeSelectionFromCharacterRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 toCharacterRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;
- (void)textInputDidChange:(id)arg1;
- (void)textInputDidChangeSelection:(id)arg1;
- (id)textInputTraits;
- (id)textInputView;
- (id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2;
- (id)tokenizer;
- (id)typingAttributes;
- (id)undoManager;
- (void)unmarkText;
- (void)updateAutoscroll:(id)arg1;
- (void)updateInsertionPointStateAndRestartTimer:(BOOL)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })visibleRect;

// UIFieldEditor (UITextInputAdditions)

- (void)_deleteBackwardAndNotify:(BOOL)arg1;

@end
