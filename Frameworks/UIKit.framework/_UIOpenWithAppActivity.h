/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIOpenWithAppActivity : UIActivity {
    NSString * _activityType;
    LSApplicationProxy * _appProxy;
    BOOL  _defaultApp;
    UIDocumentInteractionController * _documentInteractionController;
}

@property (getter=isDefaultApp, nonatomic) BOOL defaultApp;
@property (nonatomic) UIDocumentInteractionController *documentInteractionController;

+ (int)activityCategory;

- (void).cxx_destruct;
- (id)_activityImage;
- (id)_activitySettingsImage;
- (BOOL)_shouldOpenInPlace;
- (id)activityTitle;
- (id)activityType;
- (BOOL)canPerformWithActivityItems:(id)arg1;
- (id)documentInteractionController;
- (id)initWithApplicationIdentifier:(id)arg1 documentInteractionController:(id)arg2;
- (BOOL)isDefaultApp;
- (void)performActivity;
- (void)setDefaultApp:(BOOL)arg1;
- (void)setDocumentInteractionController:(id)arg1;

@end
