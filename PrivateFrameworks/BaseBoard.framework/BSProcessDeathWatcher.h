/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSProcessDeathWatcher : NSObject {
    id /* block */  _deathHandler;
    BSDispatchSource * _source;
}

// BSProcessDeathWatcher (null)

- (void)dealloc;
- (id)initWithPID:(int)arg1 queue:(id)arg2 deathHandler:(id /* block */)arg3;
- (void)invalidate;

@end
