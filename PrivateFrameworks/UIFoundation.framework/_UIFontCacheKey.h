/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface _UIFontCacheKey : NSObject <NSCopying> {
    NSString * _contentSizeCategory;
    UIFontDescriptor * _fontDescriptor;
    NSString * _fontName;
    float  _pointSize;
    NSString * _textStyle;
    int  _traits;
}

@property (nonatomic, copy) NSString *contentSizeCategory;
@property (nonatomic, copy) UIFontDescriptor *fontDescriptor;
@property (nonatomic, copy) NSString *fontName;
@property (nonatomic) float pointSize;
@property (nonatomic, copy) NSString *textStyle;
@property (nonatomic) int traits;

// _UIFontCacheKey (null)

+ (id)fontCacheKeyWithFontDescriptor:(id)arg1 pointSize:(float)arg2;
+ (id)fontCacheKeyWithFontName:(id)arg1 traits:(int)arg2 pointSize:(float)arg3;
+ (id)fontCacheKeyWithTextStyle:(id)arg1 contentSizeCategory:(id)arg2;
+ (id)systemFontCacheKeyWithTraits:(int)arg1 pointSize:(float)arg2;

- (id)contentSizeCategory;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)fontDescriptor;
- (id)fontName;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (float)pointSize;
- (void)setContentSizeCategory:(id)arg1;
- (void)setFontDescriptor:(id)arg1;
- (void)setFontName:(id)arg1;
- (void)setPointSize:(float)arg1;
- (void)setTextStyle:(id)arg1;
- (void)setTraits:(int)arg1;
- (id)textStyle;
- (int)traits;

@end
