/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
 */

@interface AVSpeechUtterance : NSObject <NSCopying, NSSecureCoding> {
    float  _pitchMultiplier;
    double  _postUtteranceDelay;
    double  _preUtteranceDelay;
    float  _rate;
    NSString * _speechString;
    AVSpeechSynthesisVoice * _voice;
    float  _volume;
}

@property (nonatomic) float pitchMultiplier;
@property (nonatomic) double postUtteranceDelay;
@property (nonatomic) double preUtteranceDelay;
@property (nonatomic) float rate;
@property (nonatomic, retain) NSString *speechString;
@property (nonatomic, retain) AVSpeechSynthesisVoice *voice;
@property (nonatomic) float volume;

// AVSpeechUtterance (null)

+ (void)initialize;
+ (id)speechUtteranceWithString:(id)arg1;
+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithString:(id)arg1;
- (float)pitchMultiplier;
- (double)postUtteranceDelay;
- (double)preUtteranceDelay;
- (float)rate;
- (void)setPitchMultiplier:(float)arg1;
- (void)setPostUtteranceDelay:(double)arg1;
- (void)setPreUtteranceDelay:(double)arg1;
- (void)setRate:(float)arg1;
- (void)setSpeechString:(id)arg1;
- (void)setVoice:(id)arg1;
- (void)setVolume:(float)arg1;
- (id)speechString;
- (id)voice;
- (float)volume;

@end
