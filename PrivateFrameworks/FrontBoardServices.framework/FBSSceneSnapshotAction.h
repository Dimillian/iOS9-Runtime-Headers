/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSSceneSnapshotAction : FBSSceneAction <FBSSceneSnapshotRequestDelegate> {
    id /* block */  _completionHandler;
    int  _expired;
    id /* block */  _requestHandler;
    NSMutableArray * _requests;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double expirationInterval;
@property (getter=isExpired, readonly) BOOL expired;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) id /* block */ requestHandler;
@property (readonly) Class superclass;

// FBSSceneSnapshotAction (null)

- (void)_executeNextRequest;
- (void)_finishAllRequests;
- (id /* block */)completionHandler;
- (void)dealloc;
- (void)encodeWithXPCDictionary:(id)arg1;
- (void)executeRequestsWithHandler:(id /* block */)arg1 completionHandler:(id /* block */)arg2 expirationHandler:(id /* block */)arg3;
- (double)expirationInterval;
- (Class)fallbackXPCEncodableClass;
- (id)initWithRequests:(id)arg1 expirationInterval:(double)arg2 responseHandler:(id /* block */)arg3;
- (id)initWithXPCDictionary:(id)arg1;
- (BOOL)isExpired;
- (id /* block */)requestHandler;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setExpired:(BOOL)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setRequestHandler:(id /* block */)arg1;
- (BOOL)snapshotRequest:(id)arg1 performWithContext:(id)arg2;
- (BOOL)snapshotRequestAllowSnapshot:(id)arg1;

@end
