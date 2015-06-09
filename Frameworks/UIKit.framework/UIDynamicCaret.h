/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIDynamicCaret : UIImageView <UIKeyboardCandidateList, _UIDynamicCaretDocumentContentDelegate> {
    _UIDynamicCaretAlternatives * _alternativesView;
    <UIKeyboardCandidateListDelegate> * _candidateListDelegate;
    TIKeyboardCandidateResultSet * _candidateSet;
    _UIDynamicCaretHelpLabel * _helpLabel;
    _UIDynamicCaretInput * _inputView;
    BOOL  _justDeleted;
    _UIDynamicCaretNoContentView * _noContentView;
    int  _selectedIndex;
}

@property (nonatomic, retain) _UIDynamicCaretAlternatives *alternativesView;
@property (nonatomic, retain) TIKeyboardCandidateResultSet *candidateSet;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) _UIDynamicCaretHelpLabel *helpLabel;
@property (nonatomic, retain) _UIDynamicCaretInput *inputView;
@property (nonatomic) BOOL isActive;
@property (nonatomic, retain) _UIDynamicCaretNoContentView *noContentView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)alternativeTappedAtIndex:(int)arg1;
- (id)alternativesView;
- (id)backgroundImage;
- (void)candidateAcceptedAtIndex:(unsigned int)arg1;
- (id)candidateSet;
- (id)currentCandidate;
- (unsigned int)currentIndex;
- (void)didMoveToSuperview;
- (void)displayAlternatives:(BOOL)arg1;
- (BOOL)hasCandidates;
- (id)helpLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)inputView;
- (BOOL)isActive;
- (BOOL)isDeleteCandidate:(id)arg1;
- (BOOL)isExtendedList;
- (BOOL)isHiddenCandidatesList;
- (id)keyboardBehaviors;
- (void)layoutSubviews;
- (id)noContentView;
- (unsigned int)selectedSortIndex;
- (void)setAlternativesView:(id)arg1;
- (void)setCandidateSet:(id)arg1;
- (void)setCandidates:(id)arg1 inlineText:(id)arg2 inlineRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 maxX:(float)arg4 layout:(BOOL)arg5;
- (void)setDocumentHasContent:(BOOL)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setHelpLabel:(id)arg1;
- (void)setInputView:(id)arg1;
- (void)setIsActive:(BOOL)arg1;
- (void)setNoContentView:(id)arg1;
- (void)setUIKeyboardCandidateListDelegate:(id)arg1;
- (BOOL)showCandidate:(id)arg1;
- (void)showCandidateAtIndex:(unsigned int)arg1;
- (void)showNextCandidate;
- (void)showNextPage;
- (void)showNextRow;
- (void)showPreviousCandidate;
- (void)showPreviousPage;
- (void)showPreviousRow;
- (id)statisticsIdentifier;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
