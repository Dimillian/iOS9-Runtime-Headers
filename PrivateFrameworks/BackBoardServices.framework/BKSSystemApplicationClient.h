/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@interface BKSSystemApplicationClient : BSBaseXPCClient {
    NSObject<OS_dispatch_queue> * _callOutQueue;
    NSObject<OS_dispatch_semaphore> * _checkinSemaphore;
    <BKSSystemApplicationClientDelegate> * _delegate;
    BOOL  _pendingCheckIn;
    BOOL  _sentConnect;
}

@property (nonatomic) <BKSSystemApplicationClientDelegate> *delegate;

- (void)_connect;
- (void)_queue_handleWatchdogPing:(id)arg1;
- (void)_sendMessageOfType:(int)arg1 packer:(id /* block */)arg2;
- (void)_sendMessageOfType:(int)arg1 packer:(id /* block */)arg2 replyHandler:(id /* block */)arg3;
- (void)_sendMessageOfType:(int)arg1 packer:(id /* block */)arg2 replyHandler:(id /* block */)arg3 waitForReply:(BOOL)arg4 waitDuration:(unsigned long long)arg5;
- (void)checkIn;
- (void)connect;
- (void)dealloc;
- (id)delegate;
- (void)finishBooting;
- (id)initWithCalloutQueue:(id)arg1;
- (void)queue_connectionWasInterrupted;
- (void)queue_connectionWasInvalidated;
- (void)queue_connectionWasResumed;
- (void)queue_handleMessage:(id)arg1;
- (void)restart;
- (void)sendActions:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
