/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIPathLazyImageAsset : UIImageAsset {
    BOOL  _haveCGCacheImages;
    NSArray * _imagePaths;
    BOOL  _imagesHaveBeenLoaded;
}

@property (nonatomic) BOOL haveCGCacheImages;
@property (nonatomic, copy) NSArray *imagePaths;

- (void).cxx_destruct;
- (void)_clearResolvedImageResources;
- (BOOL)_containsImagesInPath:(id)arg1;
- (BOOL)haveCGCacheImages;
- (id)imagePaths;
- (id)imageWithTraitCollection:(id)arg1;
- (void)setHaveCGCacheImages:(BOOL)arg1;
- (void)setImagePaths:(id)arg1;

@end