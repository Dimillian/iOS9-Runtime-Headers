/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface __NSCFLocalSessionTask : __NSCFURLSessionTask <NSURLSessionDataTaskSubclass, NSURLSessionTaskSubclass, NSURLSessionUploadTaskSubclass, SessionConnectionDelegate> {
    id /* block */  _async_initialization;
    __NSCFURLSessionConnection * _cfConn;
    struct HTTPConnectionCacheKey { int (**x1)(); struct __CFAllocator {} *x2; int x3; unsigned int x4; struct __CFString {} *x5; int x6; int x7; struct __CFDictionary {} *x8; unsigned int x9; struct __CFDictionary {} *x10; struct NetworkProxy {} *x11; struct __CFString {} *x12; int x13; int x14; } * _connKey;
    id /* block */  _dataTaskCompletion;
    NSObject<OS_dispatch_data> * _dataTaskData;
    BOOL  _didIssueDidFinish;
    __NSURLSessionLocal * _localSession;
    NSObject<OS_dispatch_source> * _payloadTransmissionTimer;
    NSObject<OS_dispatch_data> * _pendingResponseBytes;
    BOOL  _pendingResponseDisposition;
    BOOL  _pendingResponseDisposition_didFinish;
    NSObject<OS_dispatch_source> * _resourceTimeout;
    NSInputStream * _socketReadStreamForUpgrade;
    NSOutputStream * _socketWriteStreamForUpgrade;
    double  _startTimeoutTime;
    NSObject<OS_dispatch_source> * _startTimeoutTimer;
    unsigned int  _suspendCount;
    NSURL * _uploadFile;
}

@property (copy) id /* block */ async_initialization;
@property (retain) __NSCFURLSessionConnection *cfConn;
@property (copy) id /* block */ dataTaskCompletion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property BOOL didIssueDidFinish;
@property (readonly) unsigned int hash;
@property (retain) __NSURLSessionLocal *localSession;
@property BOOL pendingResponseDisposition;
@property BOOL pendingResponseDisposition_didFinish;
@property (readonly) Class superclass;
@property unsigned int suspendCount;
@property (retain) NSURL *uploadFile;

- (void)_finishAllow;
- (void)_finishBecomeDownload:(id)arg1;
- (void)_finishBecomeStream:(id)arg1 forConnection:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_onqueue_adjustBytesPerSecondLimit:(long long)arg1;
- (void)_onqueue_adjustLoadingPoolPriority;
- (void)_onqueue_adjustPoolPriority;
- (void)_onqueue_adjustPriorityHint:(float)arg1;
- (void)_onqueue_cancel;
- (void)_onqueue_cancel_with_error:(id)arg1;
- (void)_onqueue_completeInitialization;
- (void)_onqueue_conditionalRequirementsChanged:(BOOL)arg1;
- (void)_onqueue_connectionWaitingWithReason:(long long)arg1;
- (void)_onqueue_didFinishWithError:(id)arg1;
- (void)_onqueue_didReceiveChallenge:(id)arg1 request:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)_onqueue_didReceiveDispatchData:(id)arg1 completion:(id /* block */)arg2;
- (void)_onqueue_didReceiveResponse:(id)arg1 completion:(id /* block */)arg2;
- (void)_onqueue_didReceiveResponse:(id)arg1 redirectRequest:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)_onqueue_didSendBodyBytes:(long long)arg1 totalBytesSent:(long long)arg2 totalBytesExpectedToSend:(long long)arg3;
- (void)_onqueue_disavow;
- (void)_onqueue_needNewBodyStream:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)_onqueue_resume;
- (void)_onqueue_startPayloadTransmissionTimer;
- (void)_onqueue_startResourceTimer;
- (void)_onqueue_startStartTimer;
- (void)_onqueue_startTimer:(id)arg1 withTimeoutInNanos:(long long)arg2 streamErrorCode:(int)arg3;
- (id)_onqueue_strippedMutableRequest;
- (void)_onqueue_suspend;
- (void)_onqueue_willCacheResponse:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)_onqueue_willSendRequestForEstablishedConnection:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)_private_onqueue_becomeStreamTaskWithCompletionHandler:(id /* block */)arg1;
- (void)_private_onqueue_didReceiveResponse:(id)arg1;
- (void)_private_onqueue_didReceiveResponseDisposition:(int)arg1 completion:(id /* block */)arg2;
- (void)_task_onqueue_didFinish;
- (void)_task_onqueue_didReceiveDispatchData:(id)arg1 completionHandler:(id /* block */)arg2;
- (id /* block */)async_initialization;
- (void)cancel_with_error:(id)arg1;
- (id)canceledError;
- (id)cfConn;
- (void)connection:(id)arg1 _conditionalRequirementsChanged:(BOOL)arg2;
- (void)connection:(id)arg1 _willSendRequestForEstablishedConnection:(id)arg2 completion:(id /* block */)arg3;
- (void)connection:(id)arg1 challenged:(id)arg2 authCallback:(id /* block */)arg3;
- (void)connection:(id)arg1 didFinishLoadingWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveConnectionCacheKey:(struct HTTPConnectionCacheKey { int (**x1)(); struct __CFAllocator {} *x2; int x3; unsigned int x4; struct __CFString {} *x5; int x6; int x7; struct __CFDictionary {} *x8; unsigned int x9; struct __CFDictionary {} *x10; struct NetworkProxy {} *x11; struct __CFString {} *x12; int x13; int x14; }*)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2 completion:(id /* block */)arg3;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2 completion:(id /* block */)arg3;
- (void)connection:(id)arg1 didReceiveSocketInputStream:(id)arg2 outputStream:(id)arg3;
- (void)connection:(id)arg1 request:(id)arg2 needsNewBodyStreamCallback:(id /* block */)arg3;
- (void)connection:(id)arg1 sentBodyBytes:(id)arg2 totalBytes:(id)arg3 expectedBytes:(id)arg4;
- (void)connection:(id)arg1 waitingWithReason:(long long)arg2;
- (void)connection:(id)arg1 wasRedirected:(id)arg2 newRequest:(id)arg3 responseCallback:(id /* block */)arg4;
- (void)connection:(id)arg1 willCacheResponse:(id)arg2 responseCallback:(id /* block */)arg3;
- (void)connectionWillFinishLoading:(id)arg1;
- (id /* block */)dataTaskCompletion;
- (void)dealloc;
- (id)description;
- (BOOL)didIssueDidFinish;
- (id)error:(id)arg1 code:(int)arg2;
- (id)initWithOriginalRequest:(id)arg1 updatedRequest:(id)arg2 ident:(unsigned int)arg3 session:(id)arg4;
- (id)initWithTask:(id)arg1;
- (id)localSession;
- (id)nsurlError:(int)arg1;
- (BOOL)pendingResponseDisposition;
- (BOOL)pendingResponseDisposition_didFinish;
- (id)posixError:(int)arg1;
- (id)resourceTimeoutError;
- (void)setAsync_initialization:(id /* block */)arg1;
- (void)setCfConn:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setDataTaskCompletion:(id /* block */)arg1;
- (void)setDidIssueDidFinish:(BOOL)arg1;
- (void)setLocalSession:(id)arg1;
- (void)setPendingResponseDisposition:(BOOL)arg1;
- (void)setPendingResponseDisposition_didFinish:(BOOL)arg1;
- (void)setSuspendCount:(unsigned int)arg1;
- (void)setUploadFile:(id)arg1;
- (void)startResourceTimer;
- (id)startTimeoutError;
- (unsigned int)suspendCount;
- (id)timeoutErrorWithStreamErrorCode:(int)arg1;
- (id)uploadFile;

@end
