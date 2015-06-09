/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface NSURLCredentialStorage : NSObject {
    NSURLCredentialStorageInternal * _internal;
}

@property (readonly, copy) NSDictionary *allCredentials;

+ (id)sharedCredentialStorage;

- (struct _CFURLCredentialStorage { }*)_CFURLCredentialStorage;
- (id)_initWithCFURLCredentialStorage:(struct _CFURLCredentialStorage { }*)arg1;
- (id)_initWithIdentifier:(id)arg1 private:(bool)arg2;
- (id)allCredentials;
- (id)credentialsForProtectionSpace:(id)arg1;
- (void)dealloc;
- (id)defaultCredentialForProtectionSpace:(id)arg1;
- (void)getCredentialsForProtectionSpace:(id)arg1 task:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)getDefaultCredentialForProtectionSpace:(id)arg1 task:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)init;
- (void)removeCredential:(id)arg1 forProtectionSpace:(id)arg2;
- (void)removeCredential:(id)arg1 forProtectionSpace:(id)arg2 options:(id)arg3;
- (void)removeCredential:(id)arg1 forProtectionSpace:(id)arg2 options:(id)arg3 task:(id)arg4;
- (void)setCredential:(id)arg1 forProtectionSpace:(id)arg2;
- (void)setCredential:(id)arg1 forProtectionSpace:(id)arg2 task:(id)arg3;
- (void)setDefaultCredential:(id)arg1 forProtectionSpace:(id)arg2;
- (void)setDefaultCredential:(id)arg1 forProtectionSpace:(id)arg2 task:(id)arg3;

@end
