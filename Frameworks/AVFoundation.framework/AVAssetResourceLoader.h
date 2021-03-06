/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetResourceLoader : NSObject <NSURLAuthenticationChallengeSender> {
    AVAssetResourceLoaderInternal * _resourceLoader;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <AVAssetResourceLoaderDelegate> *delegate;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL preloadsEligibleContentKeys;
@property (readonly) Class superclass;

- (id)URLRequestHelper;
- (void)_cancelRequestWithKey:(id)arg1 requestDictionary:(id)arg2 fallbackHandler:(id /* block */)arg3;
- (void)_issueLoadingRequestWithKey:(id)arg1 requestDictionary:(id)arg2 fallbackHandler:(id /* block */)arg3;
- (void)_noteFinishingOfRequest:(id)arg1;
- (void)_performDelegateCallbackSynchronouslyIfCurrentDelegateQueueIsQueue:(id)arg1 delegateCallbackBlock:(id /* block */)arg2;
- (void)_performDelegateSelector:(SEL)arg1 withObject:(id)arg2 representingNewRequest:(BOOL)arg3 key:(id)arg4 fallbackHandler:(id /* block */)arg5;
- (void)_poseAuthenticationChallengeWithKey:(id)arg1 data:(id)arg2 requestDictionary:(id)arg3 fallbackHandler:(id /* block */)arg4;
- (void)cancelLoading;
- (void)dealloc;
- (id)delegate;
- (id)delegateQueue;
- (void)finalize;
- (id)init;
- (id)initWithURLRequestHelper:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (id)stateQueue;

// AVAssetResourceLoader (AVAssetResourceLoaderContentInformationCache)

- (void)cacheContentInformation:(id)arg1 forURL:(id)arg2;
- (id)cachedContentInformationForURL:(id)arg1;

// AVAssetResourceLoader (AVAssetResourceLoaderContentKeySupport)

- (BOOL)preloadsEligibleContentKeys;
- (void)setPreloadsEligibleContentKeys:(BOOL)arg1;

// AVAssetResourceLoader (AVAssetResourceLoaderURLAuthenticationChallengeSender)

- (void)_rejectChallenge:(id)arg1 withError:(id)arg2;
- (void)cancelAuthenticationChallenge:(id)arg1;
- (void)continueWithoutCredentialForAuthenticationChallenge:(id)arg1;
- (void)performDefaultHandlingForAuthenticationChallenge:(id)arg1;
- (void)rejectProtectionSpaceAndContinueWithChallenge:(id)arg1;
- (void)useCredential:(id)arg1 forAuthenticationChallenge:(id)arg2;

@end
