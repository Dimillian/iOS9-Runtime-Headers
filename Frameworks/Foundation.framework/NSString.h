/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSString : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (readonly) unsigned int length;
@property (readonly, copy) NSString *stringByRemovingPercentEncoding;

// Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/Foundation.framework/Foundation

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (void)initialize;
+ (id)localizedStringWithFormat:(id)arg1;
+ (id)string;
+ (id)stringWithBytes:(const void*)arg1 length:(unsigned int)arg2 encoding:(unsigned int)arg3;
+ (id)stringWithCString:(const char *)arg1;
+ (id)stringWithCString:(const char *)arg1 encoding:(unsigned int)arg2;
+ (id)stringWithCString:(const char *)arg1 length:(unsigned int)arg2;
+ (id)stringWithCharacters:(const unsigned short*)arg1 length:(unsigned int)arg2;
+ (id)stringWithContentsOfFile:(id)arg1;
+ (id)stringWithContentsOfFile:(id)arg1 encoding:(unsigned int)arg2 error:(id*)arg3;
+ (id)stringWithContentsOfFile:(id)arg1 usedEncoding:(unsigned int*)arg2 error:(id*)arg3;
+ (id)stringWithContentsOfURL:(id)arg1;
+ (id)stringWithContentsOfURL:(id)arg1 encoding:(unsigned int)arg2 error:(id*)arg3;
+ (id)stringWithContentsOfURL:(id)arg1 usedEncoding:(unsigned int*)arg2 error:(id*)arg3;
+ (id)stringWithFormat:(id)arg1;
+ (id)stringWithFormat:(id)arg1 locale:(id)arg2;
+ (id)stringWithString:(id)arg1;
+ (id)stringWithUTF8String:(const char *)arg1;
+ (BOOL)supportsSecureCoding;

- (BOOL)_allowsDirectEncoding;
- (const char *)_fastCStringContents:(BOOL)arg1;
- (const unsigned short*)_fastCharacterContents;
- (void)_getBlockStart:(unsigned int*)arg1 end:(unsigned int*)arg2 contentsEnd:(unsigned int*)arg3 forRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg4 stopAtLineSeparators:(BOOL)arg5;
- (id)_initWithBytesOfUnknownEncoding:(char *)arg1 length:(unsigned int)arg2 copy:(BOOL)arg3 usedEncoding:(unsigned int*)arg4;
- (id)_initWithDataOfUnknownEncoding:(id)arg1;
- (BOOL)_isCString;
- (id)_newSubstringWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 zone:(struct _NSZone { }*)arg2;
- (id)_stringRepresentation;
- (BOOL)boolValue;
- (id)capitalizedString;
- (id)capitalizedStringWithLocale:(id)arg1;
- (int)caseInsensitiveCompare:(id)arg1;
- (unsigned short)characterAtIndex:(unsigned int)arg1;
- (Class)classForCoder;
- (id)commonPrefixWithString:(id)arg1 options:(unsigned int)arg2;
- (int)compare:(id)arg1;
- (int)compare:(id)arg1 options:(unsigned int)arg2;
- (int)compare:(id)arg1 options:(unsigned int)arg2 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;
- (int)compare:(id)arg1 options:(unsigned int)arg2 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3 locale:(id)arg4;
- (id)componentsSeparatedByCharactersInSet:(id)arg1;
- (id)componentsSeparatedByString:(id)arg1;
- (BOOL)containsString:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)decomposedStringWithCanonicalMapping;
- (id)decomposedStringWithCompatibilityMapping;
- (id)description;
- (id)displayableString;
- (double)doubleValue;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateLinesUsingBlock:(id /* block */)arg1;
- (void)enumerateSubstringsInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 options:(unsigned int)arg2 usingBlock:(id /* block */)arg3;
- (float)floatValue;
- (void)getCharacters:(unsigned short*)arg1;
- (void)getCharacters:(unsigned short*)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (BOOL)getExternalRepresentation:(id*)arg1 extendedAttributes:(id*)arg2 forWritingToURLOrPath:(id)arg3 usingEncoding:(unsigned int)arg4 error:(id*)arg5;
- (void)getLineStart:(unsigned int*)arg1 end:(unsigned int*)arg2 contentsEnd:(unsigned int*)arg3 forRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg4;
- (void)getParagraphStart:(unsigned int*)arg1 end:(unsigned int*)arg2 contentsEnd:(unsigned int*)arg3 forRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg4;
- (BOOL)hasPrefix:(id)arg1;
- (BOOL)hasSuffix:(id)arg1;
- (unsigned int)hash;
- (id)init;
- (id)initWithBytesNoCopy:(void*)arg1 length:(unsigned int)arg2 encoding:(unsigned int)arg3 freeWhenDone:(BOOL)arg4;
- (id)initWithCString:(const char *)arg1;
- (id)initWithCString:(const char *)arg1 encoding:(unsigned int)arg2;
- (id)initWithCString:(const char *)arg1 length:(unsigned int)arg2;
- (id)initWithCStringNoCopy:(char *)arg1 length:(unsigned int)arg2 freeWhenDone:(BOOL)arg3;
- (id)initWithCharacters:(const unsigned short*)arg1 length:(unsigned int)arg2;
- (id)initWithCharactersNoCopy:(unsigned short*)arg1 length:(unsigned int)arg2 freeWhenDone:(BOOL)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1 encoding:(unsigned int)arg2 error:(id*)arg3;
- (id)initWithContentsOfFile:(id)arg1 usedEncoding:(unsigned int*)arg2 error:(id*)arg3;
- (id)initWithContentsOfURL:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1 encoding:(unsigned int)arg2 error:(id*)arg3;
- (id)initWithContentsOfURL:(id)arg1 usedEncoding:(unsigned int*)arg2 error:(id*)arg3;
- (id)initWithData:(id)arg1 encoding:(unsigned int)arg2;
- (id)initWithData:(id)arg1 usedEncoding:(unsigned int*)arg2;
- (id)initWithFormat:(id)arg1;
- (id)initWithFormat:(id)arg1 arguments:(char *)arg2;
- (id)initWithFormat:(id)arg1 locale:(id)arg2;
- (id)initWithFormat:(id)arg1 locale:(id)arg2 arguments:(char *)arg3;
- (id)initWithString:(id)arg1;
- (id)initWithUTF8String:(const char *)arg1;
- (int)intValue;
- (int)integerValue;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToString:(id)arg1;
- (unsigned int)length;
- (struct _NSRange { unsigned int x1; unsigned int x2; })lineRangeForRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (id)localizedCapitalizedString;
- (int)localizedCaseInsensitiveCompare:(id)arg1;
- (BOOL)localizedCaseInsensitiveContainsString:(id)arg1;
- (int)localizedCompare:(id)arg1;
- (BOOL)localizedHasPrefix:(id)arg1;
- (BOOL)localizedHasSuffix:(id)arg1;
- (id)localizedLowercaseString;
- (int)localizedStandardCompare:(id)arg1;
- (BOOL)localizedStandardContainsString:(id)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })localizedStandardRangeOfString:(id)arg1;
- (id)localizedUppercaseString;
- (long long)longLongValue;
- (id)lowercaseString;
- (id)lowercaseStringWithLocale:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })paragraphRangeForRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (id)precomposedStringWithCanonicalMapping;
- (id)precomposedStringWithCompatibilityMapping;
- (id)quotedStringRepresentation;
- (struct _NSRange { unsigned int x1; unsigned int x2; })rangeOfCharacterFromSet:(id)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })rangeOfCharacterFromSet:(id)arg1 options:(unsigned int)arg2;
- (struct _NSRange { unsigned int x1; unsigned int x2; })rangeOfCharacterFromSet:(id)arg1 options:(unsigned int)arg2 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;
- (struct _NSRange { unsigned int x1; unsigned int x2; })rangeOfComposedCharacterSequenceAtIndex:(unsigned int)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })rangeOfComposedCharacterSequencesForRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })rangeOfString:(id)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })rangeOfString:(id)arg1 options:(unsigned int)arg2;
- (struct _NSRange { unsigned int x1; unsigned int x2; })rangeOfString:(id)arg1 options:(unsigned int)arg2 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;
- (struct _NSRange { unsigned int x1; unsigned int x2; })rangeOfString:(id)arg1 options:(unsigned int)arg2 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3 locale:(id)arg4;
- (id)stringByAppendingFormat:(id)arg1;
- (id)stringByAppendingString:(id)arg1;
- (id)stringByApplyingTransform:(id)arg1 reverse:(BOOL)arg2;
- (id)stringByFoldingWithOptions:(unsigned int)arg1 locale:(id)arg2;
- (id)stringByPaddingToLength:(unsigned int)arg1 withString:(id)arg2 startingAtIndex:(unsigned int)arg3;
- (id)stringByReplacingCharactersInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 withString:(id)arg2;
- (id)stringByReplacingOccurrencesOfString:(id)arg1 withString:(id)arg2;
- (id)stringByReplacingOccurrencesOfString:(id)arg1 withString:(id)arg2 options:(unsigned int)arg3 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg4;
- (id)stringByTrimmingCharactersInSet:(id)arg1;
- (id)substringFromIndex:(unsigned int)arg1;
- (id)substringToIndex:(unsigned int)arg1;
- (id)substringWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (id)uppercaseString;
- (id)uppercaseStringWithLocale:(id)arg1;
- (BOOL)writeToFile:(id)arg1 atomically:(BOOL)arg2;
- (BOOL)writeToFile:(id)arg1 atomically:(BOOL)arg2 encoding:(unsigned int)arg3 error:(id*)arg4;
- (BOOL)writeToURL:(id)arg1 atomically:(BOOL)arg2;
- (BOOL)writeToURL:(id)arg1 atomically:(BOOL)arg2 encoding:(unsigned int)arg3 error:(id*)arg4;

// NSString (NSBundleExtensionMethods)

- (id)variantFittingPresentationWidth:(int)arg1;

// NSString (NSCFAdditions)

- (unsigned long)_cfTypeID;
- (id)_createSubstringWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (unsigned char)_encodingCantBeStoredInEightBitCFString;
- (unsigned long)_fastestEncodingInCFStringEncoding;
- (BOOL)_getCString:(char *)arg1 maxLength:(unsigned int)arg2 encoding:(unsigned long)arg3;
- (unsigned long)_smallestEncodingInCFStringEncoding;

// NSString (NSDecimalExtension)

- (struct { unsigned int x1 : 8; unsigned int x2 : 4; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 18; unsigned short x6[8]; })decimalValue;

// NSString (NSDistantString)

- (BOOL)_getBytesAsData:(id*)arg1 maxLength:(unsigned int)arg2 usedLength:(unsigned int*)arg3 encoding:(unsigned int)arg4 options:(unsigned int)arg5 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg6 remainingRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg7;
- (id)_getCharactersAsStringInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;

// NSString (NSExtendedStringPropertyListParsing)

- (id)propertyList;
- (id)propertyListFromStringsFileFormat;

// NSString (NSKindOfAdditions)

- (BOOL)isNSString__;

// NSString (NSLinguisticAnalysis)

- (void)enumerateLinguisticTagsInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 scheme:(id)arg2 options:(unsigned int)arg3 orthography:(id)arg4 usingBlock:(id /* block */)arg5;
- (id)linguisticTagsInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 scheme:(id)arg2 options:(unsigned int)arg3 orthography:(id)arg4 tokenRanges:(id*)arg5;

// NSString (NSPathUtilities)

+ (id)pathWithComponents:(id)arg1;

- (id)_stringByResolvingSymlinksInPathUsingCache:(BOOL)arg1;
- (id)_stringByStandardizingPathUsingCache:(BOOL)arg1;
- (unsigned int)completePathIntoString:(id*)arg1 caseSensitive:(BOOL)arg2 matchesIntoArray:(id*)arg3 filterTypes:(id)arg4;
- (const char *)fileSystemRepresentation;
- (BOOL)getFileSystemRepresentation:(char *)arg1 maxLength:(unsigned int)arg2;
- (BOOL)isAbsolutePath;
- (id)lastPathComponent;
- (id)pathComponents;
- (id)pathExtension;
- (id)stringByAbbreviatingWithTildeInPath;
- (id)stringByAppendingPathComponent:(id)arg1;
- (id)stringByAppendingPathExtension:(id)arg1;
- (id)stringByConvertingPathToURL;
- (id)stringByConvertingURLToPath;
- (id)stringByDeletingLastPathComponent;
- (id)stringByDeletingPathExtension;
- (id)stringByExpandingTildeInPath;
- (id)stringByResolvingSymlinksInPath;
- (id)stringByStandardizingPath;
- (id)stringsByAppendingPaths:(id)arg1;

// NSString (NSRegularExpressionSupport)

- (void)_flushRegularExpressionCaches;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_rangeOfRegularExpressionPattern:(id)arg1 options:(unsigned int)arg2 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3 locale:(id)arg4;
- (id)_stringByReplacingOccurrencesOfRegularExpressionPattern:(id)arg1 withTemplate:(id)arg2 options:(unsigned int)arg3 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg4;

// NSString (NSStringEncodingDetection)

+ (unsigned int)stringEncodingForData:(id)arg1 encodingOptions:(id)arg2 convertedString:(id*)arg3 usedLossyConversion:(BOOL*)arg4;

// NSString (NSStringOtherEncodings)

+ (const unsigned int*)availableStringEncodings;
+ (unsigned int)defaultCStringEncoding;
+ (id)localizedNameOfStringEncoding:(unsigned int)arg1;

- (const char *)UTF8String;
- (const char *)cString;
- (unsigned int)cStringLength;
- (const char *)cStringUsingEncoding:(unsigned int)arg1;
- (BOOL)canBeConvertedToEncoding:(unsigned int)arg1;
- (id)dataUsingEncoding:(unsigned int)arg1;
- (id)dataUsingEncoding:(unsigned int)arg1 allowLossyConversion:(BOOL)arg2;
- (unsigned int)fastestEncoding;
- (BOOL)getBytes:(char *)arg1 maxLength:(unsigned int)arg2 filledLength:(unsigned int*)arg3 encoding:(unsigned int)arg4 allowLossyConversion:(BOOL)arg5 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg6 remainingRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg7;
- (BOOL)getBytes:(void*)arg1 maxLength:(unsigned int)arg2 usedLength:(unsigned int*)arg3 encoding:(unsigned int)arg4 options:(unsigned int)arg5 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg6 remainingRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg7;
- (void)getCString:(char *)arg1;
- (void)getCString:(char *)arg1 maxLength:(unsigned int)arg2;
- (BOOL)getCString:(char *)arg1 maxLength:(unsigned int)arg2 encoding:(unsigned int)arg3;
- (void)getCString:(char *)arg1 maxLength:(unsigned int)arg2 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3 remainingRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg4;
- (unsigned int)lengthOfBytesUsingEncoding:(unsigned int)arg1;
- (const char *)lossyCString;
- (unsigned int)maximumLengthOfBytesUsingEncoding:(unsigned int)arg1;
- (unsigned int)smallestEncoding;

// NSString (NSStringPortCoding)

- (id)replacementObjectForPortCoder:(id)arg1;

// NSString (NSURLExtras)

+ (id)_web_stringRepresentationForBytes:(long long)arg1;

- (id)_web_URLFragment;
- (int)_web_countOfString:(id)arg1;
- (id)_web_domainFromHost;
- (BOOL)_web_domainMatches:(id)arg1;
- (unsigned long)_web_extractFourCharCode;
- (id)_web_filenameByFixingIllegalCharacters;
- (id)_web_fixedCarbonPOSIXPath;
- (BOOL)_web_hasCaseInsensitivePrefix:(id)arg1;
- (BOOL)_web_hasCountryCodeTLD;
- (BOOL)_web_isCaseInsensitiveEqualToString:(id)arg1;
- (BOOL)_web_isFileURL;
- (BOOL)_web_looksLikeAbsoluteURL;
- (BOOL)_web_looksLikeIPAddress;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_web_rangeOfURLHost;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_web_rangeOfURLUserPasswordHostPort;
- (id)_web_stringByCollapsingNonPrintingCharacters;
- (id)_web_stringByExpandingTildeInPath;
- (id)_web_stringByTrimmingWhitespace;

// NSString (NSURLExtrasInternal)

- (id)_web_characterSetFromContentTypeHeader_nowarn;
- (id)_web_fileNameFromContentDispositionHeader_nowarn;
- (BOOL)_web_isJavaScriptURL;
- (id)_web_mimeTypeFromContentTypeHeader_nowarn;
- (id)_web_parseAsKeyValuePairHandleQuotes_nowarn:(BOOL)arg1;
- (id)_web_parseAsKeyValuePair_nowarn;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_web_rangeOfURLResourceSpecifier_nowarn;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_web_rangeOfURLScheme_nowarn;
- (id)_web_splitAtNonDateCommas_nowarn;
- (id)_web_stringByReplacingValidPercentEscapes_nowarn;

// NSString (NSURLPathUtilities)

- (id)standardizedURLPath;
- (id)stringByAddingPercentEscapes;
- (id)stringByRemovingPercentEscapes;
- (id)urlPathRelativeToPath:(id)arg1;

// NSString (NSURLUtilities)

- (id)stringByAddingPercentEncodingWithAllowedCharacters:(id)arg1;
- (id)stringByAddingPercentEscapesUsingEncoding:(unsigned int)arg1;
- (id)stringByRemovingPercentEncoding;
- (id)stringByReplacingPercentEscapesUsingEncoding:(unsigned int)arg1;

// NSString (NSUniquePart)

- (struct _NSRange { unsigned int x1; unsigned int x2; })significantText;

// NSString (NSUserDefaults_NSURLExtras)

- (id)_web_HTTPStyleLanguageCode;
- (id)_web_HTTPStyleLanguageCodeWithoutRegion;

// NSString (_NSMetadataQueryExtensions)

- (id)__escapeString5991;

// NSString (__NSLocalizedStringAddition)

- (id)_copyFormatStringWithConfiguration:(id)arg1;
- (id)formatConfiguration;

// Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices

// NSString (LSAdditions)

- (BOOL)LS_hasCaseInsensitivePrefix:(id)arg1;
- (id)LS_unescapedQueryValue;
- (id)queryToDict;

// Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/QuartzCore.framework/QuartzCore

// NSString (CAMLWriter)

- (id)CAMLType;
- (void)encodeWithCAMLWriter:(id)arg1;

// Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit

// NSString (SecuredTextField)

- (id)_ui_secureString;

// NSString (UICalloutViewAdditions)

- (id)stringByStandardizingWhitespace;

// NSString (UIKBExtras)

- (id)_adjustedFontFromFont:(id)arg1 withinFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 minimumSize:(float)arg3 textSize:(struct CGSize { float x1; float x2; }*)arg4;
- (struct CGSize { float x1; float x2; })_optimizedSizeWithFont:(id)arg1;

// NSString (UIKitAdditions)

- (id)_uikit_unescapedQueryValue;
- (id)queryKeysAndValues;

// NSString (UISafeInstantiators)

- (id)_initWithUTF8String:(const char *)arg1 maxLength:(unsigned int)arg2;

// NSString (UIStringDrawing)

- (struct CGSize { float x1; float x2; })drawAtPoint:(struct CGPoint { float x1; float x2; })arg1 forWidth:(float)arg2 withFont:(id)arg3 fontSize:(float)arg4 lineBreakMode:(int)arg5 baselineAdjustment:(int)arg6;
- (struct CGSize { float x1; float x2; })drawAtPoint:(struct CGPoint { float x1; float x2; })arg1 forWidth:(float)arg2 withFont:(id)arg3 lineBreakMode:(int)arg4;
- (struct CGSize { float x1; float x2; })drawAtPoint:(struct CGPoint { float x1; float x2; })arg1 forWidth:(float)arg2 withFont:(id)arg3 minFontSize:(float)arg4 actualFontSize:(float*)arg5 lineBreakMode:(int)arg6 baselineAdjustment:(int)arg7;
- (struct CGSize { float x1; float x2; })drawAtPoint:(struct CGPoint { float x1; float x2; })arg1 withFont:(id)arg2;
- (struct CGSize { float x1; float x2; })drawInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withFont:(id)arg2;
- (struct CGSize { float x1; float x2; })drawInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withFont:(id)arg2 lineBreakMode:(int)arg3;
- (struct CGSize { float x1; float x2; })drawInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withFont:(id)arg2 lineBreakMode:(int)arg3 alignment:(int)arg4;
- (struct CGSize { float x1; float x2; })sizeWithFont:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeWithFont:(id)arg1 constrainedToSize:(struct CGSize { float x1; float x2; })arg2;
- (struct CGSize { float x1; float x2; })sizeWithFont:(id)arg1 constrainedToSize:(struct CGSize { float x1; float x2; })arg2 lineBreakMode:(int)arg3;
- (struct CGSize { float x1; float x2; })sizeWithFont:(id)arg1 forWidth:(float)arg2 lineBreakMode:(int)arg3;
- (struct CGSize { float x1; float x2; })sizeWithFont:(id)arg1 minFontSize:(float)arg2 actualFontSize:(float*)arg3 forWidth:(float)arg4 lineBreakMode:(int)arg5;

// NSString (UIStringDrawingLegacy)

- (struct CGSize { float x1; float x2; })_legacy_drawAtPoint:(struct CGPoint { float x1; float x2; })arg1 forWidth:(float)arg2 withFont:(id)arg3 fontSize:(float)arg4 lineBreakMode:(int)arg5 baselineAdjustment:(int)arg6;
- (struct CGSize { float x1; float x2; })_legacy_drawAtPoint:(struct CGPoint { float x1; float x2; })arg1 forWidth:(float)arg2 withFont:(id)arg3 fontSize:(float)arg4 lineBreakMode:(int)arg5 baselineAdjustment:(int)arg6 includeEmoji:(BOOL)arg7;
- (struct CGSize { float x1; float x2; })_legacy_drawAtPoint:(struct CGPoint { float x1; float x2; })arg1 forWidth:(float)arg2 withFont:(id)arg3 lineBreakMode:(int)arg4;
- (struct CGSize { float x1; float x2; })_legacy_drawAtPoint:(struct CGPoint { float x1; float x2; })arg1 forWidth:(float)arg2 withFont:(id)arg3 lineBreakMode:(int)arg4 letterSpacing:(float)arg5;
- (struct CGSize { float x1; float x2; })_legacy_drawAtPoint:(struct CGPoint { float x1; float x2; })arg1 forWidth:(float)arg2 withFont:(id)arg3 lineBreakMode:(int)arg4 letterSpacing:(float)arg5 includeEmoji:(BOOL)arg6;
- (struct CGSize { float x1; float x2; })_legacy_drawAtPoint:(struct CGPoint { float x1; float x2; })arg1 forWidth:(float)arg2 withFont:(id)arg3 minFontSize:(float)arg4 actualFontSize:(float*)arg5 lineBreakMode:(int)arg6 baselineAdjustment:(int)arg7;
- (struct CGSize { float x1; float x2; })_legacy_drawAtPoint:(struct CGPoint { float x1; float x2; })arg1 forWidth:(float)arg2 withFont:(id)arg3 minFontSize:(float)arg4 actualFontSize:(float*)arg5 lineBreakMode:(int)arg6 baselineAdjustment:(int)arg7 includeEmoji:(BOOL)arg8;
- (struct CGSize { float x1; float x2; })_legacy_drawAtPoint:(struct CGPoint { float x1; float x2; })arg1 withFont:(id)arg2;
- (struct CGSize { float x1; float x2; })_legacy_drawInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withFont:(id)arg2;
- (struct CGSize { float x1; float x2; })_legacy_drawInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withFont:(id)arg2 lineBreakMode:(int)arg3;
- (struct CGSize { float x1; float x2; })_legacy_drawInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withFont:(id)arg2 lineBreakMode:(int)arg3 alignment:(int)arg4;
- (struct CGSize { float x1; float x2; })_legacy_drawInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withFont:(id)arg2 lineBreakMode:(int)arg3 alignment:(int)arg4 lineSpacing:(int)arg5;
- (struct CGSize { float x1; float x2; })_legacy_drawInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withFont:(id)arg2 lineBreakMode:(int)arg3 alignment:(int)arg4 lineSpacing:(int)arg5 includeEmoji:(BOOL)arg6;
- (struct CGSize { float x1; float x2; })_legacy_drawInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withFont:(id)arg2 lineBreakMode:(int)arg3 alignment:(int)arg4 lineSpacing:(int)arg5 includeEmoji:(BOOL)arg6 truncationRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg7;
- (struct CGSize { float x1; float x2; })_legacy_sizeWithFont:(id)arg1;
- (struct CGSize { float x1; float x2; })_legacy_sizeWithFont:(id)arg1 constrainedToSize:(struct CGSize { float x1; float x2; })arg2;
- (struct CGSize { float x1; float x2; })_legacy_sizeWithFont:(id)arg1 constrainedToSize:(struct CGSize { float x1; float x2; })arg2 lineBreakMode:(int)arg3;
- (struct CGSize { float x1; float x2; })_legacy_sizeWithFont:(id)arg1 constrainedToSize:(struct CGSize { float x1; float x2; })arg2 lineBreakMode:(int)arg3 lineSpacing:(int)arg4;
- (struct CGSize { float x1; float x2; })_legacy_sizeWithFont:(id)arg1 forWidth:(float)arg2 lineBreakMode:(int)arg3;
- (struct CGSize { float x1; float x2; })_legacy_sizeWithFont:(id)arg1 forWidth:(float)arg2 lineBreakMode:(int)arg3 letterSpacing:(float)arg4;
- (struct CGSize { float x1; float x2; })_legacy_sizeWithFont:(id)arg1 minFontSize:(float)arg2 actualFontSize:(float*)arg3 forWidth:(float)arg4 lineBreakMode:(int)arg5;

// NSString (UIStringDrawingSuperCrufty)

- (struct CGSize { float x1; float x2; })_drawInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withFont:(id)arg2 lineBreakMode:(int)arg3 alignment:(int)arg4 lineSpacing:(int)arg5 includeEmoji:(BOOL)arg6 truncationRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg7;
- (struct CGSize { float x1; float x2; })drawAtPoint:(struct CGPoint { float x1; float x2; })arg1 forWidth:(float)arg2 withFont:(id)arg3 fontSize:(float)arg4 lineBreakMode:(int)arg5 baselineAdjustment:(int)arg6 includeEmoji:(BOOL)arg7;
- (struct CGSize { float x1; float x2; })drawAtPoint:(struct CGPoint { float x1; float x2; })arg1 forWidth:(float)arg2 withFont:(id)arg3 lineBreakMode:(int)arg4 letterSpacing:(float)arg5;
- (struct CGSize { float x1; float x2; })drawAtPoint:(struct CGPoint { float x1; float x2; })arg1 forWidth:(float)arg2 withFont:(id)arg3 lineBreakMode:(int)arg4 letterSpacing:(float)arg5 includeEmoji:(BOOL)arg6;
- (struct CGSize { float x1; float x2; })drawAtPoint:(struct CGPoint { float x1; float x2; })arg1 forWidth:(float)arg2 withFont:(id)arg3 minFontSize:(float)arg4 actualFontSize:(float*)arg5 lineBreakMode:(int)arg6 baselineAdjustment:(int)arg7 includeEmoji:(BOOL)arg8;
- (struct CGSize { float x1; float x2; })drawInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withFont:(id)arg2 lineBreakMode:(int)arg3 alignment:(int)arg4 lineSpacing:(int)arg5;
- (struct CGSize { float x1; float x2; })drawInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withFont:(id)arg2 lineBreakMode:(int)arg3 alignment:(int)arg4 lineSpacing:(int)arg5 includeEmoji:(BOOL)arg6;
- (struct CGSize { float x1; float x2; })sizeWithFont:(id)arg1 constrainedToSize:(struct CGSize { float x1; float x2; })arg2 lineBreakMode:(int)arg3 lineSpacing:(int)arg4;
- (struct CGSize { float x1; float x2; })sizeWithFont:(id)arg1 forWidth:(float)arg2 lineBreakMode:(int)arg3 letterSpacing:(float)arg4;

// NSString (UIWebViewAdditions)

- (id)_uikit_stringByTrimmingWhitespaceAndNewlines;
- (id)_uikit_stringWithWritingDirection:(int)arg1 asOverride:(BOOL)arg2;

// Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/AppSupport.framework/AppSupport

// NSString (null)

- (id)stringByEscapingXMLSpecialCharacters;

// Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard

// NSString (null)

- (id)_initWithUTF8String:(const char *)arg1 maxLength:(unsigned int)arg2;

// Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices

// NSString (null)

+ (id)sbs_stringFromCGRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })sbs_cgRectValue;

// Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/TextInput.framework/TextInput

// NSString (TIDocumentStateAdditions)

- (id)_stringByDeletingInteriorSentences;
- (id)_stringByTrimmingPrecedingLines;
- (id)_stringByTrimmingSuccedingLines;

// NSString (TIExtras)

+ (struct USet { }*)_bopomofoSet;
+ (struct USet { }*)_bopomofoToneSet;
+ (struct USet { }*)_characterSetWithPattern:(id)arg1;
+ (struct USet { }*)_fullwidthLettersAndNumbersSet;
+ (struct USet { }*)_hiraganaSet;
+ (struct USet { }*)_ideographSet;
+ (struct USet { }*)_japaneseLetterSet;
+ (struct USet { }*)_nonFullwidthLettersAndNumbersSet;
+ (struct USet { }*)_nonHiraganaKatakanaOrBopomofoSet;
+ (struct USet { }*)_nonHiraganaOrKatakanaSet;
+ (struct USet { }*)_nonIdeographicCharacterSet;
+ (struct USet { }*)_nonJapaneseLetterSet;
+ (struct USet { }*)_nonKatakanaOrKanjiSet;
+ (BOOL)_string:(id)arg1 matchesString:(id)arg2;
+ (id)_stringWithUnichar:(unsigned long)arg1;
+ (id)stringWithUnichar:(unsigned long)arg1;

- (unsigned int)_UTF8SizeOfRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (BOOL)_containsBopomofoOnly;
- (BOOL)_containsBopomofoToneOnly;
- (BOOL)_containsCJKScriptsOnly;
- (BOOL)_containsCJKSymbolsAndPunctuation;
- (BOOL)_containsCJScripts;
- (BOOL)_containsCJScriptsOnly;
- (BOOL)_containsEmoji;
- (BOOL)_containsFullwidthLettersAndNumbers;
- (BOOL)_containsFullwidthLettersAndNumbersOnly;
- (BOOL)_containsHiraganaKatakanaOrBopomofo;
- (BOOL)_containsHiraganaOnly;
- (BOOL)_containsHiraganaOrKatakana;
- (BOOL)_containsIdeographicCharacters;
- (BOOL)_containsJapanese;
- (BOOL)_containsJapaneseOnly;
- (BOOL)_containsKatakanaOrKanji;
- (BOOL)_containsSubstring:(id)arg1;
- (BOOL)_contentsExclusivelyInCharacterSet:(struct USet { }*)arg1;
- (unsigned int)_editDistanceFrom:(id)arg1;
- (BOOL)_endsSentence;
- (void)_enumerateLongCharactersInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 usingBlock:(id /* block */)arg2;
- (unsigned short)_firstChar;
- (id)_firstGrapheme;
- (unsigned long)_firstLongCharacter;
- (unsigned int)_graphemeCount;
- (BOOL)_isDelete;
- (BOOL)_isIdeographicGlyphs;
- (BOOL)_isLeftAssociative;
- (BOOL)_isModifierSymbol;
- (BOOL)_isNaturallyRTL;
- (BOOL)_isNewlineOrReturn;
- (BOOL)_isOnlyIdeographs;
- (BOOL)_isPlainSpace;
- (BOOL)_isSpace;
- (BOOL)_isSpaceOrReturn;
- (BOOL)_isTripledPunctuation;
- (id)_lastGrapheme;
- (BOOL)_looksLikeEmailAddress;
- (BOOL)_looksLikeNumberInput;
- (BOOL)_looksLikeURL;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_rangeOfBackwardDeletionClusterAtIndex:(unsigned int)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_rangeOfCharacterClusterAtIndex:(unsigned int)arg1 withClusterOffset:(int)arg2;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_rangeOfString:(id)arg1 fromLocation:(unsigned int)arg2;
- (BOOL)_shouldBePaddedWithSpaces;
- (id)_stringByApplyingTransform:(id)arg1;
- (id)_stringByConvertingFromFullWidthToHalfWidth;
- (id)_stringByConvertingFromHalfWidthToFullWidth;
- (id)_stringByReplacingCharacter:(unsigned long)arg1 withCharacter:(unsigned long)arg2;
- (id)_stringByReplacingCharactersInSet:(struct __CFCharacterSet { }*)arg1 withCharacter:(unsigned long)arg2;
- (id)_stringByTranscribingFromLanguage:(id)arg1;
- (id)_stringByTranscribingUsingTokenizer:(struct __CFStringTokenizer { }*)arg1;
- (id)_stringByTransliteratingToPinyin;
- (id)_stringByTransliteratingToPinyin:(BOOL)arg1;
- (id)_stringByTransliteratingToPinyinAsFamilyName;
- (id)_stringByTransliteratingToZhuyin;
- (id)_stringByTransliteratingToZhuyin:(BOOL)arg1;
- (id)_stringByTransliteratingToZhuyinAsFamilyName;
- (id)_stringByTrimmingCharactersInCFCharacterSet:(struct __CFCharacterSet { }*)arg1;
- (id)_stringByTrimmingLastCharacter;
- (BOOL)containsSubstring:(id)arg1;
- (unsigned int)editDistanceFrom:(id)arg1;
- (BOOL)endsSentence;
- (BOOL)isDelete;
- (BOOL)isLeftAssociative;
- (BOOL)isNaturallyRTL;
- (BOOL)isNewlineOrReturn;
- (BOOL)isPlainSpace;
- (BOOL)isSpace;
- (BOOL)isSpaceOrReturn;
- (BOOL)isTripledPunctuation;
- (BOOL)looksLikeEmailAddress;
- (BOOL)looksLikeNumberInput;
- (BOOL)looksLikeURL;
- (id)stringByReplacingCharacter:(unsigned long)arg1 withCharacter:(unsigned long)arg2;
- (id)stringByReplacingCharactersInSet:(struct __CFCharacterSet { }*)arg1 withCharacter:(unsigned long)arg2;
- (id)stringByTrimmingCharactersInCFCharacterSet:(struct __CFCharacterSet { }*)arg1;
- (id)stringByTrimmingLastCharacter;

// Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation

// NSString (null)

+ (float)defaultBaselineOffsetForFont:(id)arg1;
+ (float)defaultLineHeightForFont:(id)arg1;
+ (float)hyphenationFactor;
+ (void)setHyphenationFactor:(float)arg1;
+ (void)setShowsControlCharacters:(BOOL)arg1;
+ (void)setShowsInvisibleCharacters:(BOOL)arg1;
+ (void)setTypesetterBehavior:(int)arg1;
+ (void)setUsesFontLeading:(BOOL)arg1;
+ (void)setUsesScreenFonts:(BOOL)arg1;
+ (BOOL)showsControlCharacters;
+ (BOOL)showsInvisibleCharacters;
+ (int)typesetterBehavior;
+ (BOOL)usesFontLeading;
+ (BOOL)usesScreenFonts;

- (struct CGSize { float x1; float x2; })_sizeWithSize:(struct CGSize { float x1; float x2; })arg1 attributes:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundingRectWithSize:(struct CGSize { float x1; float x2; })arg1 options:(int)arg2 attributes:(id)arg3;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundingRectWithSize:(struct CGSize { float x1; float x2; })arg1 options:(int)arg2 attributes:(id)arg3 context:(id)arg4;
- (void)drawAtPoint:(struct CGPoint { float x1; float x2; })arg1 withAttributes:(id)arg2;
- (void)drawInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withAttributes:(id)arg2;
- (void)drawWithRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 options:(int)arg2 attributes:(id)arg3;
- (void)drawWithRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 options:(int)arg2 attributes:(id)arg3 context:(id)arg4;
- (struct CGSize { float x1; float x2; })sizeWithAttributes:(id)arg1;
- (id)stringByStrippingLeadingAndTrailingWhitespace;

// Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy

// NSString (null)

+ (id)_web_stringWithData:(id)arg1 textEncodingName:(id)arg2;
+ (id)_webkit_localCacheDirectoryWithBundleIdentifier:(id)arg1;

- (id)_web_bestURLForUserTypedString;
- (id)_web_capitalizeRFC822HeaderFieldName;
- (id)_web_decodeHostName;
- (id)_web_encodeHostName;
- (BOOL)_web_isUserVisibleURL;
- (id)_web_possibleURLPrefixesForUserTypedString;
- (id)_web_possibleURLsForForUserTypedString:(BOOL)arg1;
- (id)_web_possibleURLsForUserTypedString;
- (id)_web_stringByAbbreviatingWithTildeInPath;
- (id)_web_stringByStrippingReturnCharacters;
- (id)_webkit_filenameByFixingIllegalCharacters;
- (BOOL)_webkit_hasCaseInsensitivePrefix:(id)arg1;
- (BOOL)_webkit_hasCaseInsensitiveSubstring:(id)arg1;
- (BOOL)_webkit_hasCaseInsensitiveSuffix:(id)arg1;
- (BOOL)_webkit_isCaseInsensitiveEqualToString:(id)arg1;
- (BOOL)_webkit_isFileURL;
- (BOOL)_webkit_isJavaScriptURL;
- (BOOL)_webkit_looksLikeAbsoluteURL;
- (id)_webkit_queryKeysAndValues;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_webkit_rangeOfURLScheme;
- (id)_webkit_scriptIfJavaScriptURL;
- (id)_webkit_stringByCollapsingNonPrintingCharacters;
- (id)_webkit_stringByCollapsingWhitespaceCharacters;
- (id)_webkit_stringByReplacingValidPercentEscapes;
- (id)_webkit_stringByTrimmingWhitespace;
- (id)_webkit_unescapedQueryValue;

@end
