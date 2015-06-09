/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface _UIGlobalUserDefaults : NSUserDefaults {
    unsigned int  _backgroundTaskIdentifier;
    NSMutableDictionary * _userDefaultsDictionary;
    <UIFoundationGlobalUserDefaultsHelper> * _userDefaultsHelper;
}

@property (nonatomic) unsigned int backgroundTaskIdentifier;
@property (nonatomic, retain) NSMutableDictionary *userDefaultsDictionary;
@property (nonatomic, retain) <UIFoundationGlobalUserDefaultsHelper> *userDefaultsHelper;

// _UIGlobalUserDefaults (null)

- (void)_scheduleSynchronization;
- (void)_synchronizeIfNeeded;
- (id)_userDefaultsHelperCreateIfNeeded;
- (unsigned int)backgroundTaskIdentifier;
- (void)dealloc;
- (id)init;
- (void)loadDefaultsDictionary;
- (void)loadDefaultsDictionaryIfNeeded;
- (id)objectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setBackgroundTaskIdentifier:(unsigned int)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setUserDefaultsDictionary:(id)arg1;
- (void)setUserDefaultsHelper:(id)arg1;
- (BOOL)synchronize;
- (id)userDefaultsDictionary;
- (id)userDefaultsHelper;

@end
