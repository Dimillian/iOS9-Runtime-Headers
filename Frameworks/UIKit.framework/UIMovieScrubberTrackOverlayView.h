/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIMovieScrubberTrackOverlayView : UIView {
    unsigned int  _editing;
    unsigned int  _editingHandle;
    double  _endValue;
    UIImageView * _leftFillView;
    double  _maximumValue;
    double  _minimumValue;
    UIImageView * _rightFillView;
    double  _startValue;
    double  _value;
    unsigned int  _zoomed;
}

- (void).cxx_destruct;
- (void)_clampValueAndLayout;
- (void)_updateLeftFill;
- (void)_updateRightFill;
- (void)animateFillFramesAway;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setEditing:(BOOL)arg1;
- (void)setEditingHandle:(int)arg1;
- (void)setEndValue:(double)arg1;
- (void)setIsZoomed:(BOOL)arg1;
- (void)setMaximumValue:(double)arg1;
- (void)setMinimumValue:(double)arg1;
- (void)setStartValue:(double)arg1;
- (void)setValue:(double)arg1;

@end
