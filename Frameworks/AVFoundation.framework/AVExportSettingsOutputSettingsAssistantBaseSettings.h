/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVExportSettingsOutputSettingsAssistantBaseSettings : NSObject <AVOutputSettingsAssistantBaseSettingsProvider> {
    NSDictionary * _exportSettings;
}

@property (nonatomic, readonly) NSDictionary *baseAudioSettings;
@property (nonatomic, readonly) NSDictionary *baseVideoSettings;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (id)baseAudioSettings;
- (id)baseVideoSettings;
- (void)dealloc;
- (id)init;
- (id)initWithOutputSettingsPreset:(id)arg1;

@end
