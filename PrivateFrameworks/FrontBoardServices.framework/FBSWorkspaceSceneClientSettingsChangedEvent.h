/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSWorkspaceSceneClientSettingsChangedEvent : FBSWorkspaceSceneEvent {
    FBSSceneClientSettingsDiff * _clientSettings;
    FBSSceneTransitionContext * _transition;
}

@property (nonatomic, retain) FBSSceneClientSettingsDiff *clientSettingsDiff;
@property (nonatomic, retain) FBSSceneTransitionContext *transitionContext;

// FBSWorkspaceSceneClientSettingsChangedEvent (null)

- (id)clientSettingsDiff;
- (void)dealloc;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (void)setClientSettingsDiff:(id)arg1;
- (void)setTransitionContext:(id)arg1;
- (id)transitionContext;

@end
