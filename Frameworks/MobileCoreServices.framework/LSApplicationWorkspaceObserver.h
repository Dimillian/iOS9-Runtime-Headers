/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

@interface LSApplicationWorkspaceObserver : NSObject <LSApplicationWorkspaceObserverProtocol, NSSecureCoding> {
    NSUUID * _uuid;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSUUID *uuid;

+ (BOOL)supportsSecureCoding;

- (void)applicationInstallsArePrioritized:(id)arg1 arePaused:(id)arg2;
- (void)applicationInstallsDidCancel:(id)arg1;
- (void)applicationInstallsDidChange:(id)arg1;
- (void)applicationInstallsDidPause:(id)arg1;
- (void)applicationInstallsDidPrioritize:(id)arg1;
- (void)applicationInstallsDidResume:(id)arg1;
- (void)applicationInstallsDidStart:(id)arg1;
- (void)applicationInstallsDidUpdateIcon:(id)arg1;
- (void)applicationsDidFailToInstall:(id)arg1;
- (void)applicationsDidFailToUninstall:(id)arg1;
- (void)applicationsDidInstall:(id)arg1;
- (void)applicationsDidUninstall:(id)arg1;
- (void)applicationsWillInstall:(id)arg1;
- (void)applicationsWillUninstall:(id)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)networkUsageChanged:(BOOL)arg1;
- (void)setUuid:(id)arg1;
- (id)uuid;

@end
