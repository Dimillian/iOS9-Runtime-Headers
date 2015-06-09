/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/AssertionServices.framework/AssertionServices
 */

@interface BKSProcess : BSBaseXPCClient {
    NSString * _activationReason;
    NSString * _bundlePath;
    NSObject<OS_dispatch_queue> * _clientQueue;
    BOOL  _connectedToExternalAccessories;
    <BKSProcessDelegate> * _delegate;
    BOOL  _nowPlayingWithAudio;
    int  _pid;
    BOOL  _recordingAudio;
    int  _taskState;
    int  _terminationReason;
    int  _visibility;
    BOOL  _workspaceLocked;
}

@property (nonatomic, copy) NSString *activationReason;
@property (nonatomic, readonly) double backgroundTimeRemaining;
@property (nonatomic) BOOL connectedToExternalAccessories;
@property (nonatomic) <BKSProcessDelegate> *delegate;
@property (nonatomic) BOOL nowPlayingWithAudio;
@property (nonatomic) BOOL recordingAudio;
@property (nonatomic) int taskState;
@property (nonatomic) int terminationReason;
@property (nonatomic) int visibility;
@property (nonatomic) BOOL workspaceLocked;

// BKSProcess (null)

+ (double)backgroundTimeRemaining;
+ (id)busyExtensionInstances:(id)arg1;

- (void)_handleDebuggingStateChanged:(id)arg1;
- (void)_handleExpirationWarning:(id)arg1;
- (void)_handleSuspendedStateChanged:(id)arg1;
- (void)_sendMessageType:(int)arg1 withMessage:(id /* block */)arg2;
- (void)_sendMessageType:(int)arg1 withMessage:(id /* block */)arg2 withReplyHandler:(id /* block */)arg3 waitForReply:(BOOL)arg4;
- (id)activationReason;
- (double)backgroundTimeRemaining;
- (BOOL)connectedToExternalAccessories;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)initWithPID:(int)arg1 bundlePath:(id)arg2 visibility:(int)arg3 workspaceLocked:(BOOL)arg4 queue:(id)arg5;
- (BOOL)nowPlayingWithAudio;
- (void)queue_connectionWasCreated;
- (void)queue_connectionWasInterrupted;
- (void)queue_handleMessage:(id)arg1;
- (BOOL)recordingAudio;
- (void)setActivationReason:(id)arg1;
- (void)setConnectedToExternalAccessories:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setNowPlayingWithAudio:(BOOL)arg1;
- (void)setRecordingAudio:(BOOL)arg1;
- (void)setTaskState:(int)arg1;
- (void)setTerminationReason:(int)arg1;
- (void)setVisibility:(int)arg1;
- (void)setWorkspaceLocked:(BOOL)arg1;
- (int)taskState;
- (int)terminationReason;
- (int)visibility;
- (BOOL)workspaceLocked;

@end
