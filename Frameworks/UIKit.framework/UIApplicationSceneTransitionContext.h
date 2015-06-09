/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIApplicationSceneTransitionContext : FBSSceneTransitionContext

@property (nonatomic) double execTime;
@property (nonatomic) BOOL forTesting;
@property (getter=_lifecycleActionType, setter=_setLifecycleActionType:, nonatomic) unsigned int lifecycleActionType;
@property (nonatomic, retain) NSDictionary *payload;
@property (nonatomic) BOOL safeMode;
@property (nonatomic) double userLaunchEventTime;

- (unsigned int)_lifecycleActionType;
- (void)_setLifecycleActionType:(unsigned int)arg1;
- (double)execTime;
- (BOOL)forTesting;
- (BOOL)isUISubclass;
- (id)keyDescriptionForSetting:(unsigned int)arg1;
- (id)payload;
- (BOOL)safeMode;
- (void)setExecTime:(double)arg1;
- (void)setForTesting:(BOOL)arg1;
- (void)setPayload:(id)arg1;
- (void)setSafeMode:(BOOL)arg1;
- (void)setUserLaunchEventTime:(double)arg1;
- (double)userLaunchEventTime;
- (id)valueDescriptionForFlag:(int)arg1 object:(id)arg2 ofSetting:(unsigned int)arg3;

@end
