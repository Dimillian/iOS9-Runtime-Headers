/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface NSData : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (readonly) const void*bytes;
@property (readonly) unsigned int length;

// Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/CFNetwork.framework/CFNetwork

// NSData (NSURLSession_Additions)

- (BOOL)_isSafeResumeDataForBackgroundDownload;

// Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/Foundation.framework/Foundation

// NSData (NSData)

+ (BOOL)_base64DecodingAlwaysSucceedsForOptions:(unsigned int)arg1;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)data;
+ (id)dataWithBytes:(const void*)arg1 length:(unsigned int)arg2;
+ (id)dataWithBytesNoCopy:(void*)arg1 length:(unsigned int)arg2;
+ (id)dataWithBytesNoCopy:(void*)arg1 length:(unsigned int)arg2 freeWhenDone:(BOOL)arg3;
+ (id)dataWithContentsOfFile:(id)arg1;
+ (id)dataWithContentsOfFile:(id)arg1 options:(unsigned int)arg2 error:(id*)arg3;
+ (id)dataWithContentsOfMappedFile:(id)arg1;
+ (id)dataWithContentsOfURL:(id)arg1;
+ (id)dataWithContentsOfURL:(id)arg1 options:(unsigned int)arg2 error:(id*)arg3;
+ (id)dataWithData:(id)arg1;
+ (BOOL)supportsSecureCoding;

- (BOOL)_allowsDirectEncoding;
- (id)_asciiDescription;
- (id)_base64EncodingAsString:(BOOL)arg1 withOptions:(unsigned int)arg2;
- (BOOL)_canReplaceWithDispatchDataForXPCCoder;
- (unsigned long)_cfTypeID;
- (BOOL)_copyWillRetain;
- (id)_createDispatchData;
- (BOOL)_decodeBase64EncodedCharacterBuffer:(const char *)arg1 length:(unsigned int)arg2 options:(unsigned int)arg3 buffer:(char *)arg4 bufferLength:(unsigned int)arg5 state:(struct { BOOL x1; BOOL x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; }*)arg6;
- (id)_initWithBase64EncodedObject:(id)arg1 options:(unsigned int)arg2;
- (BOOL)_isCompact;
- (BOOL)_isCompactAndReturnBytes:(const void**)arg1;
- (BOOL)_isDispatchData;
- (id)base64EncodedDataWithOptions:(unsigned int)arg1;
- (id)base64EncodedStringWithOptions:(unsigned int)arg1;
- (id)base64Encoding;
- (const void*)bytes;
- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateByteRangesUsingBlock:(id /* block */)arg1;
- (void)getBytes:(void*)arg1;
- (void)getBytes:(void*)arg1 length:(unsigned int)arg2;
- (void)getBytes:(void*)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (unsigned int)hash;
- (id)initWithBase64EncodedData:(id)arg1 options:(unsigned int)arg2;
- (id)initWithBase64EncodedString:(id)arg1 options:(unsigned int)arg2;
- (id)initWithBase64Encoding:(id)arg1;
- (id)initWithBytes:(const void*)arg1 length:(unsigned int)arg2;
- (id)initWithBytes:(void*)arg1 length:(unsigned int)arg2 copy:(BOOL)arg3 deallocator:(id /* block */)arg4;
- (id)initWithBytes:(void*)arg1 length:(unsigned int)arg2 copy:(BOOL)arg3 freeWhenDone:(BOOL)arg4 bytesAreVM:(BOOL)arg5;
- (id)initWithBytesNoCopy:(void*)arg1 length:(unsigned int)arg2;
- (id)initWithBytesNoCopy:(void*)arg1 length:(unsigned int)arg2 deallocator:(id /* block */)arg3;
- (id)initWithBytesNoCopy:(void*)arg1 length:(unsigned int)arg2 freeWhenDone:(BOOL)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1 error:(id*)arg2;
- (id)initWithContentsOfFile:(id)arg1 options:(unsigned int)arg2 error:(id*)arg3;
- (id)initWithContentsOfMappedFile:(id)arg1;
- (id)initWithContentsOfMappedFile:(id)arg1 error:(id*)arg2;
- (id)initWithContentsOfURL:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1 options:(unsigned int)arg2 error:(id*)arg3;
- (id)initWithData:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToData:(id)arg1;
- (unsigned int)length;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })rangeOfData:(id)arg1 options:(unsigned int)arg2 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;
- (id)replacementObjectForCoder:(id)arg1;
- (id)subdataWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (BOOL)writeToFile:(id)arg1 atomically:(BOOL)arg2;
- (BOOL)writeToFile:(id)arg1 atomically:(BOOL)arg2 error:(id*)arg3;
- (BOOL)writeToFile:(id)arg1 options:(unsigned int)arg2 error:(id*)arg3;
- (BOOL)writeToURL:(id)arg1 atomically:(BOOL)arg2;
- (BOOL)writeToURL:(id)arg1 options:(unsigned int)arg2 error:(id*)arg3;

// NSData (NSDataPortCoding)

- (id)replacementObjectForPortCoder:(id)arg1;

// NSData (NSKindOfAdditions)

- (BOOL)isNSData__;

// NSData (NSURLExtras)

- (id)_replaceCString:(const char *)arg1 withCString:(const char *)arg2;
- (id)_web_guessedMIMEType;
- (id)_web_guessedMIMETypeForExtension:(id)arg1;
- (id)_web_guessedMIMETypeForXML;
- (id)_web_parseRFC822HeaderFields;

// Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy

// NSData (null)

- (BOOL)_web_isCaseInsensitiveEqualToCString:(const char *)arg1;
- (int)_web_locationAfterFirstBlankLine;
- (BOOL)_web_startsWithBlankLine;
- (id)_webkit_guessedMIMEType;
- (id)_webkit_guessedMIMETypeForXML;
- (id)_webkit_parseRFC822HeaderFields;

@end
