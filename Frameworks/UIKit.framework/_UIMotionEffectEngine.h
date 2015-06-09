/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIMotionEffectEngine : NSObject <_UIMotionEffectEventConsumer> {
    BOOL  _allAnalyzersAreCentered;
    _UILazyMapTable * _analyzerSettingsToAnalyzers;
    NSMapTable * _analyzersToEffects;
    CADisplayLink * _displayLink;
    _UIAssociationTable * _effectViewAssociationTable;
    _UIMotionEffectEventProvider * _eventProvider;
    int  _eventProviderStatus;
    BOOL  _generatingUpdates;
    BOOL  _hasAppliedAtLeastOneUpdateSinceStarting;
    BOOL  _hasReceivedAtLeastOneEventSinceStarting;
    BOOL  _isPendingReset;
    _UIMotionEffectEvent * _lastEvent;
    _UIMotionEffectEngineLogger * _motionLogger;
    _UIMotionEffectEvent * _pendingEvent;
    int  _pendingEventLock;
    BOOL  _pendingSlowDown;
    int  _screenDimmingNotificationToken;
    BOOL  _slowUpdatesEnabled;
    NSMutableSet * _suspendReasons;
    NSMapTable * _suspendedViewsToEffectSets;
    int  _targetInterfaceOrientation;
    int  _thermalNotificationToken;
}

@property (setter=_setTargetInterfaceOrientation:, nonatomic) int _targetInterfaceOrientation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *suspensionReasons;

+ (Class)_analyzerClass;
+ (Class)_eventProviderClass;
+ (BOOL)_motionEffectsEnabled;
+ (BOOL)_motionEffectsSupported;

- (void).cxx_destruct;
- (void)_applyEffectsFromAnalyzer:(id)arg1;
- (void)_handleLatestDeviceMotion;
- (BOOL)_hasMotionEffectsForView:(id)arg1;
- (BOOL)_isSuspended;
- (BOOL)_motionEffect:(id)arg1 belongsToView:(id)arg2;
- (BOOL)_motionEffectsAreSuspendedForView:(id)arg1;
- (id)_motionEffectsForView:(id)arg1;
- (void)_setTargetInterfaceOrientation:(int)arg1;
- (BOOL)_shouldGenerateUpdates;
- (void)_startGeneratingUpdates;
- (void)_startOrStopGeneratingUpdates;
- (void)_stopGeneratingUpdates;
- (int)_targetInterfaceOrientation;
- (void)_toggleSlowUpdates;
- (void)_unapplyAllEffects;
- (void)_unregisterAllMotionEffectsForView:(id)arg1;
- (void)_unregisterMotionEffect:(id)arg1 fromView:(id)arg2;
- (void)_updateDisplayLinkInterval;
- (void)beginApplyingMotionEffect:(id)arg1 toView:(id)arg2;
- (void)beginSuspendingForReason:(id)arg1;
- (void)beginSuspendingMotionEffectsForView:(id)arg1;
- (void)dealloc;
- (id)debugDescription;
- (void)endApplyingMotionEffect:(id)arg1 toView:(id)arg2;
- (void)endSuspendingForReason:(id)arg1;
- (void)endSuspendingMotionEffectsForView:(id)arg1;
- (id)init;
- (void)resetMotionAnalysis;
- (id)suspensionReasons;
- (void)updateEventProviderStatus:(int)arg1;
- (void)updateWithEvent:(id)arg1;

@end
