/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@interface BKSFenceLogger : BSFileLogger {
    BOOL  _reportable;
}

@property (getter=_isReportable, nonatomic, readonly) BOOL _reportable;

+ (id)initializeLogging;

- (BOOL)_isReportable;
- (void)_reloadFromDefaultsDictionary:(id)arg1;
- (void)_setEnabled:(BOOL)arg1;
- (void)_setLevel:(int)arg1;
- (int)level;
- (unsigned int)logDestinations;
- (id)logPath;
- (id)logPreferenceDomain;
- (id)logPreferenceName;
- (id)logPrefixForCategory:(id)arg1 destination:(unsigned int)arg2;
- (id)name;
- (BOOL)shouldEnableOnInternalBuilds;

@end
