/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface NSDate : NSObject <NSCopying, NSSecureCoding>

@property (readonly) double timeIntervalSinceReferenceDate;

// Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/CoreFoundation.framework/CoreFoundation

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)date;
+ (id)dateWithDate:(id)arg1;
+ (id)dateWithString:(id)arg1;
+ (id)dateWithTimeInterval:(double)arg1 sinceDate:(id)arg2;
+ (id)dateWithTimeIntervalSince1970:(double)arg1;
+ (id)dateWithTimeIntervalSinceNow:(double)arg1;
+ (id)dateWithTimeIntervalSinceReferenceDate:(double)arg1;
+ (id)distantFuture;
+ (id)distantPast;
+ (BOOL)supportsSecureCoding;
+ (double)timeIntervalSinceReferenceDate;

- (unsigned long)_cfTypeID;
- (id)addTimeInterval:(double)arg1;
- (int)compare:(id)arg1;
- (int)compare:(id)arg1 toUnitGranularity:(unsigned int)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateByAddingTimeInterval:(double)arg1;
- (id)description;
- (id)descriptionWithLocale:(id)arg1;
- (id)earlierDate:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDate:(id)arg1;
- (id)initWithString:(id)arg1;
- (id)initWithTimeInterval:(double)arg1 sinceDate:(id)arg2;
- (id)initWithTimeIntervalSince1970:(double)arg1;
- (id)initWithTimeIntervalSinceNow:(double)arg1;
- (id)initWithTimeIntervalSinceReferenceDate:(double)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqual:(id)arg1 toUnitGranularity:(unsigned int)arg2;
- (BOOL)isEqualToDate:(id)arg1;
- (BOOL)isInSameDayAsDate:(id)arg1;
- (BOOL)isInToday;
- (BOOL)isInTomorrow;
- (BOOL)isInYesterday;
- (BOOL)isNSDate__;
- (id)laterDate:(id)arg1;
- (double)timeIntervalSince1970;
- (double)timeIntervalSinceDate:(id)arg1;
- (double)timeIntervalSinceNow;
- (double)timeIntervalSinceReferenceDate;

// Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/Foundation.framework/Foundation

// NSDate (NSCalendarDateStuff)

- (id)dateWithCalendarFormat:(id)arg1 timeZone:(id)arg2;
- (id)descriptionWithCalendarFormat:(id)arg1 timeZone:(id)arg2 locale:(id)arg3;

// NSDate (NSDate)

- (Class)classForCoder;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// NSDate (NSDatePortCoding)

- (id)replacementObjectForPortCoder:(id)arg1;

// NSDate (NSNaturalLanguageDate)

+ (id)dateWithNaturalLanguageString:(id)arg1;
+ (id)dateWithNaturalLanguageString:(id)arg1 date:(id)arg2 locale:(id)arg3;
+ (id)dateWithNaturalLanguageString:(id)arg1 locale:(id)arg2;

// NSDate (NSURLExtras)

- (id)_web_RFC1123DateString;
- (int)_web_compareDay:(id)arg1;
- (BOOL)_web_isToday;

// Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/AggregateDictionary.framework/AggregateDictionary

// NSDate (null)

+ (id)dateForDaysSince1970:(int)arg1;
+ (int)daysSince1970;

- (int)daysSince1970;

// Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard

// NSDate (null)

- (id)bs_dateByAddingDays:(int)arg1;
- (BOOL)isAfterDate:(id)arg1;
- (BOOL)isBeforeDate:(id)arg1;

@end
