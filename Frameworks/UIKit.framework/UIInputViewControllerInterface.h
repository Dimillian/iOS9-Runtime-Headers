/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIInputViewControllerInterface : TIKeyboardInputManagerStub <_UIIVCInterface> {
    _UIInputViewControllerState * _cachedState;
    <_UIIVCInterface> * _forwardingInterface;
    <_UIIVCResponseDelegate> * _responseDelegate;
}

@property (getter=_cachedState, setter=_setCachedState:, nonatomic, retain) _UIInputViewControllerState *cachedState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <_UIIVCInterface> *forwardingInterface;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) <_UIIVCResponseDelegate> *responseDelegate;
@property (readonly) Class superclass;

- (id)_cachedState;
- (void)_handleInputViewControllerState:(id)arg1;
- (void)_setCachedState:(id)arg1;
- (void)_tearDownRemoteService;
- (void)dealloc;
- (id)forwardingInterface;
- (id)init;
- (id)responseDelegate;
- (void)setForwardingInterface:(id)arg1;
- (void)setResponseDelegate:(id)arg1;
- (void)syncToKeyboardState:(id)arg1 completionHandler:(id /* block */)arg2;

@end
