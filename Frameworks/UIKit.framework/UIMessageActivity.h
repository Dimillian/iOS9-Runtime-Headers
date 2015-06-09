/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIMessageActivity : UIActivity {
    MFMessageComposeViewController * _messageComposeViewController;
    BOOL  _sourceIsManaged;
}

@property (nonatomic, retain) MFMessageComposeViewController *messageComposeViewController;
@property (nonatomic) BOOL sourceIsManaged;

+ (int)activityCategory;

- (void).cxx_destruct;
- (id)_activityImage;
- (id)_activitySettingsImage;
- (void)_cleanup;
- (id)activityTitle;
- (id)activityType;
- (id)activityViewController;
- (BOOL)canPerformWithActivityItems:(id)arg1;
- (void)dealloc;
- (id)messageComposeViewController;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(int)arg2;
- (void)prepareWithActivityItems:(id)arg1;
- (void)setMessageComposeViewController:(id)arg1;
- (void)setSourceIsManaged:(BOOL)arg1;
- (BOOL)sourceIsManaged;

@end
