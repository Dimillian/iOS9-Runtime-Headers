/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIDocumentAlertPresenter : NSObject <UIAlertViewDelegate> {
    UIAlertView * _alert;
    id /* block */  _completionHandler;
    NSError * _error;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (id)_presentAlertWithError:(id)arg1 completionHandler:(id /* block */)arg2;

- (void).cxx_destruct;
- (void)_forceFinishNow;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)alertViewCancel:(id)arg1;
- (void)dealloc;
- (id)initWithError:(id)arg1 completionHandler:(id /* block */)arg2;

@end
