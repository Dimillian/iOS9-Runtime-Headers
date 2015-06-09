/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIActivityUserDefaults : NSObject {
    NSString * _identifier;
    NSUserDefaults * _userDefaults;
}

@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, retain) NSUserDefaults *userDefaults;

+ (id)builtinActivityOrder;
+ (id)updatedActivityIdentifiersUserOrderWithPreviousOrder:(id)arg1 someSortedActivityIdentifiers:(id)arg2;

- (void).cxx_destruct;
- (id)activitiesSortedByActivityIdentifierOrder:(id)arg1 forActivities:(id)arg2;
- (id)activitiesSortedByUserOrderForActivities:(id)arg1;
- (id)activityIdentifiersInUserOrder;
- (BOOL)activityIsHidden:(id)arg1;
- (id)applicationExtensionForActivity:(id)arg1;
- (BOOL)canHideActivity:(id)arg1;
- (id)defaultsValueForKey:(id)arg1 activity:(id)arg2;
- (id)identifier;
- (id)identifierForActivity:(id)arg1;
- (id)init;
- (id)initWithIdentifier:(id)arg1 userDefaults:(id)arg2;
- (id)migrateNotesActivitySortOrderIfNeeded:(id)arg1;
- (id)mutableActivityIdentifiersArrayForActivitiesArray:(id)arg1;
- (void)postActivityUserDefaultsDidChangeNotification;
- (void)setActivity:(id)arg1 asHidden:(BOOL)arg2;
- (void)setActivityIdentifiersInUserOrder:(id)arg1;
- (void)setDefaultsValue:(id)arg1 forKey:(id)arg2 activity:(id)arg3;
- (void)setIdentifier:(id)arg1;
- (void)setUserDefaults:(id)arg1;
- (void)updateUserOrderWithSomeSortedActivities:(id)arg1;
- (id)userDefaults;

@end
