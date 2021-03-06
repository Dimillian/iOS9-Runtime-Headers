/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIDocumentPickerContainerViewController : UIViewController <UISearchControllerDelegate> {
    UIViewController<_UIDocumentPickerContainedViewController> * _childViewController;
    _UIDocumentPickerContainerModel * _model;
    BOOL  _rootContainer;
    _UIDocumentPickerSearchPaletteView * _searchView;
    <_UIDocumentPickerServiceViewController> * _serviceViewController;
    _UIDocumentPickerSortOrderView * _sortView;
}

@property (nonatomic, retain) UIViewController<_UIDocumentPickerContainedViewController> *childViewController;
@property (nonatomic) struct CGPoint { float x1; float x2; } contentOffset;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEditing, nonatomic) BOOL editing;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) NSArray *indexPathsForSelectedItems;
@property (nonatomic) BOOL listModeToggleHidden;
@property (nonatomic, retain) _UIDocumentPickerContainerModel *model;
@property (getter=isRootContainer, nonatomic) BOOL rootContainer;
@property (nonatomic, retain) _UIDocumentPickerSearchPaletteView *searchView;
@property (nonatomic) <_UIDocumentPickerServiceViewController> *serviceViewController;
@property (nonatomic, retain) _UIDocumentPickerSortOrderView *sortView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_pickCurrentLocationForUpload:(id)arg1;
- (void)_sortOrderViewChanged:(id)arg1;
- (void)_updateForServiceView;
- (id)childViewController;
- (struct CGPoint { float x1; float x2; })contentOffset;
- (void)didMoveToParentViewController:(id)arg1;
- (void)displayModeChanged;
- (void)ensureChildViewController;
- (id)indexPathsForSelectedItems;
- (id)initWithModel:(id)arg1;
- (BOOL)isEditing;
- (BOOL)isRootContainer;
- (BOOL)listModeToggleHidden;
- (id)model;
- (id)searchView;
- (id)serviceViewController;
- (void)setChildViewController:(id)arg1;
- (void)setChildViewController:(id)arg1 animated:(BOOL)arg2;
- (void)setContentOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)setEditing:(BOOL)arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setIndexPathsForSelectedItems:(id)arg1;
- (void)setListModeToggleHidden:(BOOL)arg1;
- (void)setModel:(id)arg1;
- (void)setRootContainer:(BOOL)arg1;
- (void)setSearchView:(id)arg1;
- (void)setServiceViewController:(id)arg1;
- (void)setSortView:(id)arg1;
- (void)setupSearchController:(BOOL)arg1;
- (void)setupToolbar;
- (id)sortView;
- (void)teardownToolbar;
- (id)url;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)willMoveToParentViewController:(id)arg1;

@end
