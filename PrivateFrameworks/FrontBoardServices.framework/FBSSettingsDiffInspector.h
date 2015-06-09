/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSSettingsDiffInspector : NSObject {
    BOOL  _iteratingObservers;
    BSMutableSettings * _observerInfo;
    BSMutableSettings * _otherSettingsObserverInfo;
}

// FBSSettingsDiffInspector (null)

- (void)_addObserver:(id)arg1 forSetting:(unsigned int)arg2 inInfo:(id)arg3;
- (void)_observeSetting:(unsigned int)arg1 withBlock:(id /* block */)arg2;
- (void)dealloc;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)init;
- (void)inspectDiff:(id)arg1 withContext:(void*)arg2;
- (void)observeOtherSetting:(unsigned int)arg1 withBlock:(id /* block */)arg2;
- (void)removeAllObservers;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end