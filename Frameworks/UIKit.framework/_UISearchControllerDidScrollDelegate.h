/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UISearchControllerDidScrollDelegate : NSObject <_UIScrollNotification> {
    <_UIScrollNotification> * _controller;
    UIScrollView * _scrollView;
}

@property (nonatomic) <_UIScrollNotification> *controller;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) UIScrollView *scrollView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_didScroll;
- (void)_updateBackdropMaskViewsInScrollView:(id)arg1;
- (id)controller;
- (id)scrollView;
- (void)setController:(id)arg1;
- (void)setScrollView:(id)arg1;

@end
