/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPrinterBrowserViewController : UITableViewController <PKPrinterBrowserDelegate> {
    BOOL  _clearCurrentPrinter;
    NSMutableArray * _filteredOutPrinters;
    NSArray * _lastUsedPrinters;
    BOOL  _loaded;
    PKPrinter * _lockedPrinter;
    float  _maximumPopoverHeight;
    NSMutableArray * _otherPrinters;
    <UIPrinterBrowserOwner> * _ownerPanelViewController;
    NSMutableArray * _preferredPrinters;
    PKPrinterBrowser * _printerBrowser;
    UIPrinterSearchingView * _searchingView;
    BOOL  _searchingViewConstraintsSet;
    BOOL  _shouldFilterPrinters;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property float maximumPopoverHeight;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addPrinter:(id)arg1 moreComing:(BOOL)arg2;
- (void)adjustPopoverSize;
- (void)dealloc;
- (id)initWithOwnerViewController:(id)arg1;
- (void)loadView;
- (float)maximumPopoverHeight;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)printerAtIndexPath:(id)arg1;
- (void)removePrinter:(id)arg1 moreGoing:(BOOL)arg2;
- (void)selectPrinter:(id)arg1;
- (void)setMaximumPopoverHeight:(float)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)showCancelButton;
- (void)startPrinterBrowser;
- (void)stopPrinterBrowser;
- (unsigned int)supportedInterfaceOrientations;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (void)updateSearching;
- (void)updateViewConstraints;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)willEnterForeground;

@end
