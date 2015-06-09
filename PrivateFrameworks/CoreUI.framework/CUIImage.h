/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUIImage : NSObject <NSCopying> {
    struct CGImage { } * _cgImage;
}

@property (nonatomic, readonly) struct CGImage { }*image;
@property (nonatomic, readonly) struct CGSize { float x1; float x2; } size;

// CUIImage (null)

+ (id)imageWithCGImage:(struct CGImage { }*)arg1;

- (struct CGImage { }*)cgImage;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (struct CGImage { }*)image;
- (id)initWithCGImage:(struct CGImage { }*)arg1;
- (struct CGSize { float x1; float x2; })size;

@end
