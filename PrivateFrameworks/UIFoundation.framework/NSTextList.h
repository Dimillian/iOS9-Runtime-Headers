/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface NSTextList : NSObject <NSCoding, NSCopying> {
    unsigned int  _listFlags;
    void * _listSecondary;
    NSString * _markerFormat;
    int  _startIndex;
}

@property (readonly) unsigned int listOptions;
@property (readonly, copy) NSString *markerFormat;
@property int startingItemNumber;

// NSTextList (null)

+ (id)_standardMarkerAttributesForAttributes:(id)arg1;
+ (void)initialize;

- (BOOL)_isOrdered;
- (id)_markerAtIndex:(unsigned int)arg1 inText:(id)arg2;
- (id)_markerForMarkerFormat:(id)arg1 itemNumber:(int)arg2 isNumbered:(BOOL*)arg3 substitutionStart:(unsigned int*)arg4 end:(unsigned int*)arg5 specifierStart:(unsigned int*)arg6 end:(unsigned int*)arg7;
- (id)_markerPrefix;
- (id)_markerSpecifier;
- (id)_markerSuffix;
- (id)_markerTitle;
- (id)_unaffixedMarkerForItemNumber:(int)arg1;
- (id)_unaffixedMarkerFormat;
- (id)_unaffixedMarkerTitle;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMarkerFormat:(id)arg1 options:(unsigned int)arg2;
- (unsigned int)listOptions;
- (id)markerForItemNumber:(int)arg1;
- (id)markerFormat;
- (unsigned int)options;
- (void)setStartingItemNumber:(int)arg1;
- (int)startingItemNumber;

@end
