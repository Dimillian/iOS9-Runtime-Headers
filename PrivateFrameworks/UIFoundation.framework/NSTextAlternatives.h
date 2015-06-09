/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface NSTextAlternatives : NSObject {
    NSArray * _alternativeStrings;
    id  _internal;
    NSString * _primaryString;
}

@property (readonly) NSArray *alternativeStrings;
@property (readonly) NSString *primaryString;

// NSTextAlternatives (null)

- (id)alternativeAtIndex:(unsigned int)arg1;
- (id)alternativeStrings;
- (id)alternatives;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithOriginalText:(id)arg1 alternatives:(id)arg2;
- (id)initWithOriginalText:(id)arg1 alternatives:(id)arg2 identifier:(id)arg3;
- (id)initWithPrimaryString:(id)arg1 alternativeStrings:(id)arg2;
- (id)initWithPrimaryString:(id)arg1 alternativeStrings:(id)arg2 identifier:(id)arg3;
- (void)noteSelectedAlternativeString:(id)arg1;
- (unsigned int)numberOfAlternatives;
- (id)originalText;
- (id)primaryString;

@end
