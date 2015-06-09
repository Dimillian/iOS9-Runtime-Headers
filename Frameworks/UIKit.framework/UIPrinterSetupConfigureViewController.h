/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPrinterSetupConfigureViewController : UITableViewController <UITableViewDataSource, UITextFieldDelegate> {
    BOOL  _addToNetwork;
    UIPrinterSetupConnectingView * _connectingView;
    NSString * _directPasscode;
    BOOL  _directPrinting;
    UIButton * _finishButton;
    PKPrinter * _printer;
}

@property (nonatomic) BOOL addToNetwork;
@property (nonatomic, retain) UIPrinterSetupConnectingView *connectingView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *directPasscode;
@property (nonatomic) BOOL directPrinting;
@property (nonatomic, retain) UIButton *finishButton;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) PKPrinter *printer;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)addToNetwork;
- (id)connectingView;
- (void)dealloc;
- (id)directPasscode;
- (BOOL)directPrinting;
- (void)finish;
- (id)finishButton;
- (void)finished:(BOOL)arg1;
- (id)initWithPrinter:(id)arg1;
- (void)loadView;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)printer;
- (void)setAddToNetwork:(BOOL)arg1;
- (void)setConnectingView:(id)arg1;
- (void)setDirectPasscode:(id)arg1;
- (void)setDirectPrinting:(BOOL)arg1;
- (void)setFinishButton:(id)arg1;
- (void)setPrinter:(id)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayFooterView:(id)arg2 forSection:(int)arg3;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(int)arg3;
- (void)textDidChange:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)toggleAddToNetwork:(id)arg1;
- (void)toggleDirectPrinting:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;

@end
