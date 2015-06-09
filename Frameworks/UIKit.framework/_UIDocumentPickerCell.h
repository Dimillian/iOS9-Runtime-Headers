/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIDocumentPickerCell : UICollectionViewCell <UITextFieldDelegate, _UIDocumentPickerEditGrabberParent> {
    UILongPressGestureRecognizer * _actionGestureRecognizer;
    _UIDocumentPickerDocumentCollectionViewController * _collectionView;
    BOOL  _editing;
    _UIDocumentPickerContainerItem * _item;
    UIProgressView * _progressView;
    BOOL  _renamePending;
    UIImageView * _selectionView;
    UILabel * _subtitle2Label;
    UILabel * _subtitleLabel;
    UIImageView * _tagView;
    NSLayoutConstraint * _tagViewCollapseConstraint;
    NSLayoutConstraint * _thumbnailCenterHeightConstraint;
    UIView * _thumbnailCenterView;
    NSLayoutConstraint * _thumbnailCenterWidthConstraint;
    UIImageView * _thumbnailView;
    UIView * _titleCenterView;
    _UIDocumentPickerCellEditGrabber * _titleEditGrabberView;
    UITextField * _titleTextField;
    NSLayoutConstraint * _titleTextFieldFullWidthConstraint;
}

@property (nonatomic, retain) UILongPressGestureRecognizer *actionGestureRecognizer;
@property (nonatomic) _UIDocumentPickerDocumentCollectionViewController *collectionView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEditing, nonatomic) BOOL editing;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) _UIDocumentPickerContainerItem *item;
@property (nonatomic, retain) UIProgressView *progressView;
@property (nonatomic) BOOL renamePending;
@property (nonatomic, retain) UIImageView *selectionView;
@property (nonatomic, retain) UILabel *subtitle2Label;
@property (nonatomic, retain) UILabel *subtitleLabel;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIImageView *tagView;
@property (nonatomic, retain) NSLayoutConstraint *tagViewCollapseConstraint;
@property (nonatomic, retain) NSLayoutConstraint *thumbnailCenterHeightConstraint;
@property (nonatomic, retain) UIView *thumbnailCenterView;
@property (nonatomic, retain) NSLayoutConstraint *thumbnailCenterWidthConstraint;
@property (nonatomic, retain) UIImageView *thumbnailView;
@property (nonatomic, retain) UIView *titleCenterView;
@property (nonatomic, retain) _UIDocumentPickerCellEditGrabber *titleEditGrabberView;
@property (nonatomic, retain) UITextField *titleTextField;
@property (nonatomic, retain) NSLayoutConstraint *titleTextFieldFullWidthConstraint;

+ (struct CGSize { float x1; float x2; })defaultSizeForTraits:(id)arg1;
+ (id)folderIconForTraits:(id)arg1;
+ (struct CGSize { float x1; float x2; })thumbnailSizeForTraits:(id)arg1;

- (void).cxx_destruct;
- (void)_deleteAction:(id)arg1;
- (void)_infoAction:(id)arg1;
- (void)_moreAction:(id)arg1;
- (void)_showActions;
- (void)_updateSelectionState:(BOOL)arg1;
- (id)actionGestureRecognizer;
- (id)availableActions;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)collectionView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isEditing;
- (id)item;
- (void)prepareForReuse;
- (id)progressView;
- (void)reloadItem:(BOOL)arg1;
- (BOOL)renamePending;
- (id)selectionView;
- (void)setActionGestureRecognizer:(id)arg1;
- (void)setCollectionView:(id)arg1;
- (void)setEditing:(BOOL)arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setHighlighted:(BOOL)arg1;
- (void)setItem:(id)arg1;
- (void)setProgressView:(id)arg1;
- (void)setRenamePending:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)setSelectionView:(id)arg1;
- (void)setSubtitle2Label:(id)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setTagView:(id)arg1;
- (void)setTagViewCollapseConstraint:(id)arg1;
- (void)setThumbnailCenterHeightConstraint:(id)arg1;
- (void)setThumbnailCenterView:(id)arg1;
- (void)setThumbnailCenterWidthConstraint:(id)arg1;
- (void)setThumbnailView:(id)arg1;
- (void)setTitleCenterView:(id)arg1;
- (void)setTitleEditGrabberView:(id)arg1;
- (void)setTitleTextField:(id)arg1;
- (void)setTitleTextFieldFullWidthConstraint:(id)arg1;
- (id)subtitle2Label;
- (id)subtitleLabel;
- (id)tagView;
- (id)tagViewCollapseConstraint;
- (id)targetForAction:(SEL)arg1 withSender:(id)arg2;
- (void)textFieldDidBeginEditing:(id)arg1;
- (BOOL)textFieldShouldBeginEditing:(id)arg1;
- (BOOL)textFieldShouldEndEditing:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (id)thumbnailCenterHeightConstraint;
- (id)thumbnailCenterView;
- (id)thumbnailCenterWidthConstraint;
- (id)thumbnailView;
- (id)titleCenterView;
- (id)titleEditGrabberView;
- (id)titleTextField;
- (id)titleTextFieldFullWidthConstraint;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateActionGestureRecognizer;

@end
