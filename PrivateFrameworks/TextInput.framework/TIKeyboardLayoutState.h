/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TIKeyboardLayoutState : NSObject <NSCopying, NSSecureCoding> {
    BOOL  _canMultitap;
    BOOL  _hasAccentKey;
    BOOL  _hasCandidateKey;
    NSString * _inputMode;
    BOOL  _interfaceIdiomIsPad;
    BOOL  _isAlphabeticPlane;
    NSString * _layoutTag;
}

@property (nonatomic) BOOL canMultitap;
@property (nonatomic) BOOL hasAccentKey;
@property (nonatomic) BOOL hasCandidateKey;
@property (nonatomic, copy) NSString *inputMode;
@property (nonatomic) BOOL interfaceIdiomIsPad;
@property (nonatomic) BOOL isAlphabeticPlane;
@property (nonatomic, copy) NSString *layoutTag;

+ (BOOL)supportsSecureCoding;

- (BOOL)canMultitap;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)hasAccentKey;
- (BOOL)hasCandidateKey;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (id)inputMode;
- (BOOL)interfaceIdiomIsPad;
- (BOOL)isAlphabeticPlane;
- (BOOL)isEqual:(id)arg1;
- (id)layoutTag;
- (void)setCanMultitap:(BOOL)arg1;
- (void)setHasAccentKey:(BOOL)arg1;
- (void)setHasCandidateKey:(BOOL)arg1;
- (void)setInputMode:(id)arg1;
- (void)setInterfaceIdiomIsPad:(BOOL)arg1;
- (void)setIsAlphabeticPlane:(BOOL)arg1;
- (void)setLayoutTag:(id)arg1;

@end
