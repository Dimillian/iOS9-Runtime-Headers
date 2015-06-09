/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface WebSpeechSynthesisWrapper : NSObject <AVSpeechSynthesizerDelegate> {
    struct RetainPtr<AVSpeechSynthesizer> { 
        void *m_ptr; 
    }  m_synthesizer;
    struct PlatformSpeechSynthesizer { int (**x1)(); struct Vector<WTF::RefPtr<WebCore::PlatformSpeechSynthesisVoice>, 0, WTF::CrashOnOverflow, 16> { struct RefPtr<WebCore::PlatformSpeechSynthesisVoice> {} *x_2_1_1; unsigned int x_2_1_2; unsigned int x_2_1_3; } x2; bool x3; struct PlatformSpeechSynthesizerClient {} *x4; struct RetainPtr<WebSpeechSynthesisWrapper> { void *x_5_1_1; } x5; } * m_synthesizerObject;
    struct RefPtr<WebCore::PlatformSpeechSynthesisUtterance> { 
        struct PlatformSpeechSynthesisUtterance {} *m_ptr; 
    }  m_utterance;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)cancel;
- (id)initWithSpeechSynthesizer:(struct PlatformSpeechSynthesizer { int (**x1)(); struct Vector<WTF::RefPtr<WebCore::PlatformSpeechSynthesisVoice>, 0, WTF::CrashOnOverflow, 16> { struct RefPtr<WebCore::PlatformSpeechSynthesisVoice> {} *x_2_1_1; unsigned int x_2_1_2; unsigned int x_2_1_3; } x2; bool x3; struct PlatformSpeechSynthesizerClient {} *x4; struct RetainPtr<WebSpeechSynthesisWrapper> { void *x_5_1_1; } x5; }*)arg1;
- (float)mapSpeechRateToPlatformRate:(float)arg1;
- (void)pause;
- (void)resume;
- (void)speakUtterance:(struct PassRefPtr<WebCore::PlatformSpeechSynthesisUtterance> { struct PlatformSpeechSynthesisUtterance {} *x1; })arg1;
- (void)speechSynthesizer:(id)arg1 didCancelSpeechUtterance:(id)arg2;
- (void)speechSynthesizer:(id)arg1 didContinueSpeechUtterance:(id)arg2;
- (void)speechSynthesizer:(id)arg1 didFinishSpeechUtterance:(id)arg2;
- (void)speechSynthesizer:(id)arg1 didPauseSpeechUtterance:(id)arg2;
- (void)speechSynthesizer:(id)arg1 didStartSpeechUtterance:(id)arg2;
- (void)speechSynthesizer:(id)arg1 willSpeakRangeOfSpeechString:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 utterance:(id)arg3;

@end
