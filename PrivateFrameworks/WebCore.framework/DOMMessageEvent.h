/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface DOMMessageEvent : DOMEvent

@property (readonly) NSString *data;
@property (readonly, copy) NSString *lastEventId;
@property (readonly) DOMMessagePort *messagePort;
@property (readonly, copy) NSString *origin;
@property (readonly) <DOMEventTarget> *source;

- (id)data;
- (void)initMessageEvent:(id)arg1 canBubbleArg:(BOOL)arg2 cancelableArg:(BOOL)arg3 dataArg:(id)arg4 originArg:(id)arg5 lastEventIdArg:(id)arg6 sourceArg:(id)arg7 messagePort:(id)arg8;
- (id)lastEventId;
- (id)messagePort;
- (id)origin;
- (id)source;

@end
