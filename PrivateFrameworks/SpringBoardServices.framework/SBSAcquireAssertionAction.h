/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

@interface SBSAcquireAssertionAction : BSAction

@property (nonatomic, readonly) NSString *assertionName;
@property (nonatomic, readonly) unsigned int port;
@property (nonatomic, readonly) NSString *reason;

// SBSAcquireAssertionAction (null)

+ (id)assertionWithAssertionName:(id)arg1 reason:(id)arg2 withHandler:(id /* block */)arg3;

- (id)assertionName;
- (id)keyDescriptionForSetting:(unsigned int)arg1;
- (unsigned int)port;
- (id)reason;

@end
