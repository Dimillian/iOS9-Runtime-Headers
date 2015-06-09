/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSApplicationDataStore : NSObject {
    NSString * _bundleId;
    FBSApplicationDataStoreRepositoryClient * _client;
    BOOL  _clientNeedsCheckin;
}

@property (nonatomic, readonly, retain) NSString *bundleID;

// FBSApplicationDataStore (null)

+ (void)_doWithClassClient:(id /* block */)arg1;
+ (void)_setClassClient:(id)arg1;
+ (id)applicationsWithAvailableStores;
+ (void)setPrefetchedKeys:(id)arg1;
+ (id)storeForApplication:(id)arg1;
+ (void)synchronize;

- (id)_initWithBundleId:(id)arg1 client:(id)arg2;
- (id)_makeSafe:(id)arg1 forType:(Class)arg2;
- (id)archivedObjectForKey:(id)arg1;
- (void)archivedObjectForKey:(id)arg1 withResult:(id /* block */)arg2;
- (id)archivedXPCCodableObjectForKey:(id)arg1 ofType:(Class)arg2;
- (void)archivedXPCCodableObjectForKey:(id)arg1 ofType:(Class)arg2 withResult:(id /* block */)arg3;
- (id)bundleID;
- (void)dealloc;
- (id)init;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)objectForKey:(id)arg1;
- (void)objectForKey:(id)arg1 withResult:(id /* block */)arg2;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (id)safeArchivedObjectForKey:(id)arg1 ofType:(Class)arg2;
- (void)safeArchivedObjectForKey:(id)arg1 ofType:(Class)arg2 withResult:(id /* block */)arg3;
- (id)safeObjectForKey:(id)arg1 ofType:(Class)arg2;
- (void)safeObjectForKey:(id)arg1 ofType:(Class)arg2 withResult:(id /* block */)arg3;
- (void)setArchivedObject:(id)arg1 forKey:(id)arg2;
- (void)setArchivedXPCCodableObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2;

@end
