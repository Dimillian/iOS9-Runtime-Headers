/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface CFPDMMAPBuffer : CFPDDataBuffer {
    void * bytes;
    unsigned long  length;
}

- (void*)bytes;
- (void)dealloc;
- (void)finalize;
- (id)initWithFileDescriptor:(int)arg1 size:(unsigned long)arg2 allowMappingIfSafe:(BOOL)arg3;
- (id)initWithSize:(unsigned long)arg1 bufferPtr:(void**)arg2;
- (unsigned long)length;

@end
