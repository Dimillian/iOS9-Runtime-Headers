/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

@interface LSBundleProxy : LSResourceProxy <NSSecureCoding> {
    NSURL * _appStoreReceiptURL;
    NSString * _bundleExecutable;
    unsigned long long  _bundleFlags;
    NSString * _bundleType;
    NSURL * _bundleURL;
    NSString * _bundleVersion;
    NSUUID * _cacheGUID;
    NSDictionary * _entitlements;
    NSDictionary * _environmentVariables;
    BOOL  _foundBackingBundle;
    NSDictionary * _groupContainerURLs;
    NSString * _localizedShortName;
    NSArray * _machOUUIDs;
    unsigned long long  _plistContentFlags;
    unsigned int  _sequenceNumber;
    NSString * _signerIdentity;
}

@property (nonatomic, readonly) NSURL *appStoreReceiptURL;
@property (nonatomic, readonly) NSURL *bundleContainerURL;
@property (nonatomic, readonly) NSString *bundleExecutable;
@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) NSString *bundleType;
@property (nonatomic, readonly) NSURL *bundleURL;
@property (nonatomic, readonly) NSString *bundleVersion;
@property (nonatomic, readonly) NSUUID *cacheGUID;
@property (nonatomic, readonly) NSURL *containerURL;
@property (nonatomic, readonly) NSURL *dataContainerURL;
@property (nonatomic, readonly) NSDictionary *entitlements;
@property (nonatomic, readonly) NSDictionary *environmentVariables;
@property (nonatomic, readonly) BOOL foundBackingBundle;
@property (nonatomic, readonly) NSDictionary *groupContainerURLs;
@property (nonatomic, readonly) NSString *localizedShortName;
@property (nonatomic, readonly) NSArray *machOUUIDs;
@property (nonatomic, readonly) unsigned int sequenceNumber;
@property (nonatomic, readonly) NSString *signerIdentity;

+ (id)bundleProxyForIdentifier:(id)arg1;
+ (id)bundleProxyForURL:(id)arg1;
+ (BOOL)supportsSecureCoding;

- (unsigned char)_createContext:(struct LSContext { struct LSDatabase {} *x1; }*)arg1 andGetBundle:(unsigned int*)arg2 withData:(const struct LSBundleData {}**)arg3;
- (id)_initWithBundleUnit:(unsigned long)arg1 bundleType:(unsigned int)arg2 BundleID:(id)arg3 localizedName:(id)arg4 bundleContainerURL:(id)arg5 dataContainerURL:(id)arg6 resourcesDirectoryURL:(id)arg7 iconsDictionary:(id)arg8 iconFileNames:(id)arg9 version:(id)arg10;
- (id)_plistValueForKey:(id)arg1;
- (id)appStoreReceiptURL;
- (id)bundleContainerURL;
- (id)bundleExecutable;
- (id)bundleIdentifier;
- (id)bundleType;
- (id)bundleURL;
- (id)bundleVersion;
- (id)cacheGUID;
- (id)containerURL;
- (id)dataContainerURL;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)entitlements;
- (id)environmentVariables;
- (BOOL)foundBackingBundle;
- (id)groupContainerURLs;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)localizedShortName;
- (id)machOUUIDs;
- (unsigned int)sequenceNumber;
- (void)setLocalizedShortName:(id)arg1;
- (id)signerIdentity;
- (id)uniqueIdentifier;

@end
