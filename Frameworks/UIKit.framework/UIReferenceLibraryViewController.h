/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIReferenceLibraryViewController : UIViewController <UINavigationControllerDelegate, UITableViewDataSource, UITableViewDelegate> {
    UINavigationController * _baseNavController;
    NSArray * _definitionValues;
    id /* block */  _dismissCompletionHandler;
    UIViewController * _longDefViewController;
    UITableViewController * _multiDefViewController;
    int  _oldPopoverStyle;
    UIWindow * _rotationDecider;
    NSString * _term;
}

@property (setter=_setRotationDecider:, nonatomic, retain) UIWindow *_rotationDecider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ dismissCompletionHandler;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (id)_backgroundColor;
+ (id)_colorAttributes;
+ (id)_defaultButtonImage;
+ (id)_dictionaryDefinitionAttributes;
+ (id)_diddlyDoViewLineColor;
+ (id)_foregroundColor;
+ (id)_localizedDictionaryTitleAttributes;
+ (id)_popoverControllerForReferenceLibraryWithString:(id)arg1;
+ (id)_pressedButtonImage;
+ (BOOL)_shouldShowDefineForTerm:(id)arg1;
+ (BOOL)_shouldShowDefineForTermOfLength:(int)arg1;
+ (id)_viewControllerForReferenceWithString:(id)arg1 options:(unsigned int)arg2;
+ (BOOL)dictionaryHasDefinitionForTerm:(id)arg1;

- (void).cxx_destruct;
- (id)_backgroundColor;
- (id)_colorAttributes;
- (id)_defaultButtonImage;
- (id)_dictionaryDefinitionAttributes;
- (void)_didResignContentViewControllerOfPopover:(id)arg1;
- (id)_diddlyDoViewLineColor;
- (void)_dismissModalReferenceView:(id)arg1;
- (id)_foregroundColor;
- (void)_installDoneButtonOnViewControllerIfNeeded:(id)arg1;
- (void)_installRequiredElementsOnViewController:(id)arg1;
- (id)_localizedDictionaryTitleAttributes;
- (id)_pressedButtonImage;
- (id)_rotationDecider;
- (void)_searchWeb:(id)arg1;
- (void)_setPopoverController:(id)arg1;
- (void)_setRotationDecider:(id)arg1;
- (void)_willBecomeContentViewControllerOfPopover:(id)arg1;
- (id /* block */)dismissCompletionHandler;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithTerm:(id)arg1;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)pushDownloadManager:(id)arg1;
- (void)setDismissCompletionHandler:(id /* block */)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;

@end
