/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UISearchResultsTableView : UITableView {
    UISearchDisplayController * _controller;
    float  _offsetForNoResultsMessage;
    UIView * _topShadowView;
}

@property (getter=_topShadowView, setter=_setTopShadowView:, nonatomic, retain) UIView *_topShadowView;
@property (nonatomic) UISearchDisplayController *controller;

- (void).cxx_destruct;
- (void)_numberOfRowsDidChange;
- (float)_offsetForNoResultsMessage;
- (void)_setOffsetForNoResultsMessage:(float)arg1;
- (void)_setTopShadowView:(id)arg1;
- (id)_topShadowView;
- (id)controller;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 style:(int)arg2;
- (void)setContentOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)setController:(id)arg1;

@end
