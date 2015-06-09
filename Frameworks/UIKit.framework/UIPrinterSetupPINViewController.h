/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPrinterSetupPINViewController : UIViewController {
    UIPrinterSetupPINView * _PINView;
    UIPrinterSetupConnectingView * _connectingView;
    PKPrinter * _printer;
    UIScrollView * _scrollView;
}

@property (nonatomic, retain) UIPrinterSetupPINView *PINView;
@property (nonatomic, retain) UIPrinterSetupConnectingView *connectingView;
@property (nonatomic, retain) PKPrinter *printer;
@property (nonatomic, retain) UIScrollView *scrollView;

- (void).cxx_destruct;
- (id)PINView;
- (void)connectToPrinter;
- (void)connected:(BOOL)arg1;
- (id)connectingView;
- (void)dealloc;
- (id)initWithPrinter:(id)arg1;
- (void)loadView;
- (id)printer;
- (id)scrollView;
- (void)setConnectingView:(id)arg1;
- (void)setPINView:(id)arg1;
- (void)setPrinter:(id)arg1;
- (void)setScrollView:(id)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)showFailure;
- (void)showSetup;
- (unsigned int)supportedInterfaceOrientations;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;

@end
