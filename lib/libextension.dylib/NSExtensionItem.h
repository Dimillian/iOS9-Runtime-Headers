/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/usr/lib/libextension.dylib
 */

@interface NSExtensionItem : NSObject <NSCopying, NSSecureCoding> {
    NSMutableDictionary * _userInfo;
}

@property (nonatomic, copy) NSArray *attachments;
@property (nonatomic, copy) NSAttributedString *attributedContentText;
@property (nonatomic, copy) NSAttributedString *attributedTitle;
@property (nonatomic, copy) NSDictionary *userInfo;

// NSExtensionItem (null)

+ (BOOL)supportsSecureCoding;

- (id)_matchingDictionaryRepresentation;
- (id)attachments;
- (id)attributedContentText;
- (id)attributedTitle;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)setAttachments:(id)arg1;
- (void)setAttributedContentText:(id)arg1;
- (void)setAttributedTitle:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (id)userInfo;

@end
