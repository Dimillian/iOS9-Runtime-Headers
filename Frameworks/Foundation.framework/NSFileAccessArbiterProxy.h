/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSFileAccessArbiterProxy : NSObject <NSFileAccessArbiter> {
    NSMutableDictionary * _presentersByID;
    NSMutableDictionary * _providersByID;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_xpc_object> * _server;
    id /* block */  _serverEventHandler;
    NSObject<OS_dispatch_queue> * _serverQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (void)_accessPresenterOperationRecordsUsingBlock:(id /* block */)arg1;
+ (id)_fileReactorDebuggingInformation;
+ (id)_idForReactor:(id)arg1;
+ (id)_willBeginOperationForReactor:(id)arg1 withDescription:(id)arg2;

- (void)_makePresenter:(id)arg1 accommodateDeletionWithSubitemURL:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_makePresenter:(id)arg1 accommodateDisconnectionWithCompletionHandler:(id /* block */)arg2;
- (void)_makePresenter:(id)arg1 observeChangeWithSubitemURL:(id)arg2;
- (void)_makePresenter:(id)arg1 observeMoveToURL:(id)arg2 withSubitemURL:(id)arg3;
- (void)_makePresenter:(id)arg1 observeUbiquityChangeWithSubitemURL:(id)arg2;
- (void)_makePresenter:(id)arg1 observeVersionChangeOfKind:(id)arg2 withClientID:(id)arg3 name:(id)arg4 subitemURL:(id)arg5;
- (void)_makePresenter:(id)arg1 reacquireFromReadingClaimForID:(id)arg2;
- (void)_makePresenter:(id)arg1 reacquireFromWritingClaimForID:(id)arg2;
- (void)_makePresenter:(id)arg1 relinquishToAccessClaimWithID:(id)arg2 ifNecessaryUsingSelector:(SEL)arg3 recordingRelinquishment:(id)arg4 continuer:(id /* block */)arg5;
- (void)_makePresenter:(id)arg1 relinquishToReadingClaimWithID:(id)arg2 options:(unsigned int)arg3 completionHandler:(id /* block */)arg4;
- (void)_makePresenter:(id)arg1 relinquishToWritingClaimWithID:(id)arg2 options:(unsigned int)arg3 subitemURL:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)_makePresenter:(id)arg1 reportUnsavedChangesWithCompletionHandler:(id /* block */)arg2;
- (void)_makePresenter:(id)arg1 saveChangesWithCompletionHandler:(id /* block */)arg2;
- (void)_makePresenter:(id)arg1 setLastPresentedItemEventIdentifier:(unsigned long long)arg2;
- (void)_makePresenterObserveDisconnection:(id)arg1;
- (void)_makePresenterObserveReconnection:(id)arg1;
- (void)_makeProvider:(id)arg1 cancelProvidingItemAtURL:(id)arg2 forAccessClaimWithID:(id)arg3;
- (void)_makeProvider:(id)arg1 observeEndOfWriteAtURL:(id)arg2 forAccessClaimWithID:(id)arg3 processIdentifier:(int)arg4;
- (void)_makeProvider:(id)arg1 observePresentationChangeOfKind:(id)arg2 withPresenterID:(id)arg3 processIdentifier:(int)arg4 url:(id)arg5 newURL:(id)arg6 completionHandler:(id /* block */)arg7;
- (void)_makeProvider:(id)arg1 provideItemAtURL:(id)arg2 recursively:(BOOL)arg3 forAccessClaimWithID:(id)arg4 processIdentifier:(int)arg5 completionHandler:(id /* block */)arg6;
- (void)_makeProvider:(id)arg1 providePhysicalURLForURL:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)_readRelinquishmentForPresenter:(id)arg1;
- (id)_writeRelinquishmentForPresenter:(id)arg1;
- (void)addFilePresenter:(id)arg1;
- (void)addFileProvider:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)cancelAccessClaimForID:(id)arg1;
- (void)dealloc;
- (id)filePresenters;
- (id)fileProviders;
- (void)finalize;
- (void)getDebugInfoWithCompletionHandler:(id /* block */)arg1;
- (id)grantAccessClaim:(id)arg1 synchronouslyIfPossible:(BOOL)arg2;
- (void)grantSubarbitrationClaim:(id)arg1 withServer:(id)arg2;
- (void)handleCanceledServer;
- (void)handleMessage:(id)arg1;
- (id)idForFileReactor:(id)arg1;
- (id)initWithServer:(id)arg1 queue:(id)arg2 eventHandler:(id /* block */)arg3;
- (void)removeFilePresenter:(id)arg1;
- (void)removeFileProvider:(id)arg1;
- (void)revokeAccessClaimForID:(id)arg1;
- (void)revokeSubarbitrationClaimForID:(id)arg1;
- (void)tiePresenterForID:(id)arg1 toItemAtURL:(id)arg2;
- (void)writerWithPurposeID:(id)arg1 didChangeItemAtURL:(id)arg2;
- (void)writerWithPurposeID:(id)arg1 didChangeUbiquityOfItemAtURL:(id)arg2;
- (void)writerWithPurposeID:(id)arg1 didDisconnectItemAtURL:(id)arg2;
- (void)writerWithPurposeID:(id)arg1 didMakeItemDisappearAtURL:(id)arg2;
- (void)writerWithPurposeID:(id)arg1 didMoveItemAtURL:(id)arg2 toURL:(id)arg3;
- (void)writerWithPurposeID:(id)arg1 didReconnectItemAtURL:(id)arg2;
- (void)writerWithPurposeID:(id)arg1 didVersionChangeOfKind:(id)arg2 toItemAtURL:(id)arg3 withClientID:(id)arg4 name:(id)arg5;

@end
