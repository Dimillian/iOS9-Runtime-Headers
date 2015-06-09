/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/usr/lib/libextension.dylib
 */

@interface _NSItemProviderSandboxedResource : NSObject <NSCopying, NSSecureCoding> {
    BOOL  _accessingSecurityScopedResource;
    NSURL * _resourceURL;
    NSData * _sandboxExtensionToken;
}

@property (getter=isAccessingSecurityScopedResource, nonatomic) BOOL accessingSecurityScopedResource;
@property (nonatomic, copy) NSURL *resourceURL;
@property (nonatomic, copy) NSData *sandboxExtensionToken;

// _NSItemProviderSandboxedResource (null)

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1 error:(id*)arg2;
- (BOOL)isAccessingSecurityScopedResource;
- (id)resolveURLAndReturnError:(id*)arg1;
- (id)resourceURL;
- (id)sandboxExtensionToken;
- (void)setAccessingSecurityScopedResource:(BOOL)arg1;
- (void)setResourceURL:(id)arg1;
- (void)setSandboxExtensionToken:(id)arg1;

@end
