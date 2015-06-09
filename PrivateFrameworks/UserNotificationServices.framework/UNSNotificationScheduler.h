/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/UserNotificationServices.framework/UserNotificationServices
 */

@interface UNSNotificationScheduler : NSObject <UNSNotificationSchedulerClientProtocol> {
    NSString * _bundleIdentifier;
    NSXPCConnection * _connection;
    <UNSNotificationSchedulerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (copy) NSString *bundleIdentifier;
@property (nonatomic, retain) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <UNSNotificationSchedulerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

// UNSNotificationScheduler (null)

- (void)_invalidate;
- (void)_queue_ensureConnection;
- (void)_queue_interruptedConnection;
- (void)_queue_invalidatedConnection;
- (void)addScheduledLocalNotifications:(id)arg1;
- (id)bundleIdentifier;
- (void)cancelAllScheduledLocalNotifications;
- (void)cancelScheduledLocalNotifications:(id)arg1;
- (id)connection;
- (void)dealloc;
- (id)delegate;
- (void)didFireLocalNotifications:(id)arg1;
- (void)didSnoozeLocalNotifications:(id)arg1;
- (id)init;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)queue;
- (id)scheduleForFetchRequest:(id)arg1;
- (void)scheduleForFetchRequest:(id)arg1 withResult:(id /* block */)arg2;
- (id)scheduledLocalNotifications;
- (void)scheduledLocalNotificationsDidChange;
- (void)scheduledLocalNotificationsWithResult:(id /* block */)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setScheduledLocalNotifications:(id)arg1;
- (void)snoozeScheduledLocalNotifications:(id)arg1;

@end
