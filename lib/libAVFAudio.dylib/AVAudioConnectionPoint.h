/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
 */

@interface AVAudioConnectionPoint : NSObject {
    unsigned int  _bus;
    AVAudioNode * _node;
    void * _reserved;
}

@property (nonatomic, readonly) unsigned int bus;
@property (nonatomic, readonly) AVAudioNode *node;

// AVAudioConnectionPoint (null)

+ (id)connectionPointWithNode:(id)arg1 bus:(unsigned int)arg2;

- (unsigned int)bus;
- (void)dealloc;
- (unsigned int)hash;
- (id)initWithNode:(id)arg1 bus:(unsigned int)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)node;

@end
