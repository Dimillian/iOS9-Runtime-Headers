/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIBackgroundTaskInfo : NSObject {
    int  _count;
    id /* block */  _expireHandler;
    BKSProcessAssertion * _processAssertion;
    unsigned int  _taskId;
}

+ (id)backgroundTaskAssertionQueue;

- (void).cxx_destruct;
- (void)dealloc;
- (void)fireExpirationHandler;
- (id)initWithProcessAssertion:(id)arg1 expirationHandler:(id /* block */)arg2;
- (void)invalidate;

@end
