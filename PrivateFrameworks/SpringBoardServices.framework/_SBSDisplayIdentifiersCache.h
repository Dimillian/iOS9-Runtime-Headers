/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

@interface _SBSDisplayIdentifiersCache : NSObject {
    id /* block */  _changedBlock;
    int  _changedToken;
    NSSet * _displayIdentifiers;
    NSObject<OS_dispatch_queue> * _queue;
}

// _SBSDisplayIdentifiersCache (null)

+ (id)sharedInstance;

- (void)_queue_noteChanged;
- (void)dealloc;
- (id)displayIdentifiers;
- (id)init;
- (void)registerChangedBlock:(id /* block */)arg1;

@end
