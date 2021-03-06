/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UICAPackageView : UIView {
    CAPackage * _package;
    NSArray * _rootViews;
}

+ (id)_newViewHierarchyFrom:(id)arg1 publishedObjectViewClassMap:(id)arg2 into:(id)arg3;
+ (BOOL)_shouldCatchDecodingExceptions;
+ (void)loadPackageViewWithContentsOfURL:(id)arg1 publishedObjectViewClassMap:(id)arg2 completion:(id /* block */)arg3;
+ (void)loadPackageViewWithData:(id)arg1 publishedObjectViewClassMap:(id)arg2 completion:(id /* block */)arg3;
+ (void)loadPackageViewWithObject:(id)arg1 publishedObjectViewClassMap:(id)arg2 completion:(id /* block */)arg3;

- (void).cxx_destruct;
- (id)initWithContentsOfURL:(id)arg1 publishedObjectViewClassMap:(id)arg2;
- (id)initWithData:(id)arg1 publishedObjectViewClassMap:(id)arg2;
- (id)publishedObjectWithName:(id)arg1;
- (id)publishedViewWithName:(id)arg1;

@end
