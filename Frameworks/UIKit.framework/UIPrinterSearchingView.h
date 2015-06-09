/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPrinterSearchingView : UIView {
    BOOL  _constraintsSet;
    _UIPrintMessageAndSpinnerView * _messageAndSpinner;
}

@property (nonatomic) _UIPrintMessageAndSpinnerView *messageAndSpinner;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)messageAndSpinner;
- (void)searchTimeout;
- (void)setMessageAndSpinner:(id)arg1;
- (void)setSearching:(BOOL)arg1;
- (void)updateConstraints;

@end
