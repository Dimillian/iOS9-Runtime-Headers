/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardCache : NSObject {
    BOOL  _isCommitting;
    NSSet * _layouts;
    CPBitmapStore * _store;
}

+ (BOOL)enabled;
+ (id)sharedInstance;

- (struct CGImage { }*)cachedCompositeImageForCacheKeys:(id)arg1 fromLayout:(id)arg2 opacities:(id)arg3;
- (struct CGImage { }*)cachedImageForKey:(id)arg1 fromLayout:(id)arg2;
- (void)clearNonPersistentCache;
- (void)commitTransaction;
- (void)dealloc;
- (id)displayImagesForView:(id)arg1 fromLayout:(id)arg2 imageFlags:(id)arg3;
- (void)displayView:(id)arg1 fromLayout:(id)arg2;
- (void)displayView:(id)arg1 imageWidth:(float)arg2 fromLayout:(id)arg3;
- (id)init;
- (id)uniqueLayoutsFromInputModes:(id)arg1;
- (void)updateCacheForInputModes:(id)arg1;

@end
