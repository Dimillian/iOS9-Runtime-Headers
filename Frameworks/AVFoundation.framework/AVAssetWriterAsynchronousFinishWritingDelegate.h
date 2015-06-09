/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetWriterAsynchronousFinishWritingDelegate : NSObject <AVAssetWriterFigAssetWriterNotificationHandlerDelegate, AVAssetWriterFinishWritingHelperDelegate> {
    id /* block */  _handler;
    int  _handlerCalled;
    AVAssetWriterFigAssetWriterNotificationHandler * _notificationHandler;
    AVWeakReference * _weakReferenceToHelper;
    AVWeakReference * _weakReferenceToSelf;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void)_callHandlerIfNotCalled;
- (void)dealloc;
- (void)didReceiveFigAssetWriterNotificationWithSuccess:(BOOL)arg1 error:(id)arg2;
- (void)finishWritingHelper:(id)arg1 didInitiateFinishWritingForFigAssetWriter:(struct OpaqueFigAssetWriter { }*)arg2;
- (void)finishWritingHelperDidCancelFinishWriting:(id)arg1;
- (void)finishWritingHelperDidFail:(id)arg1;
- (id)initWithHandler:(id /* block */)arg1;
- (BOOL)shouldHelperPrepareInputs;

@end