/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebDatabaseManager : NSObject

// WebDatabaseManager (null)

+ (void)didFinishLastTransaction;
+ (void)endBackgroundTask;
+ (void)removeEmptyDatabaseFiles;
+ (void)scheduleEmptyDatabaseRemoval;
+ (id)sharedWebDatabaseManager;
+ (void)startBackgroundTask;
+ (void)willBeginFirstTransaction;

- (id)databasesWithOrigin:(id)arg1;
- (void)deleteAllDatabases;
- (BOOL)deleteDatabase:(id)arg1 withOrigin:(id)arg2;
- (BOOL)deleteOrigin:(id)arg1;
- (id)detailsForDatabase:(id)arg1 withOrigin:(id)arg2;
- (id)init;
- (id)origins;

@end