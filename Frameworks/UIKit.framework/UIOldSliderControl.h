/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIOldSliderControl : UIControl {
    float  _animationEndValue;
    float  _hitOffset;
    struct CGPoint { 
        float x; 
        float y; 
    }  _idleTrackingPoint;
    double  _idleTrackingTime;
    UIView * _knob;
    struct CGPoint { 
        float x; 
        float y; 
    }  _lastTrackingPoint;
    double  _lastTrackingTime;
    float  _maxValue;
    UIImage * _maxValueImage;
    float  _minValue;
    UIImage * _minValueImage;
    int  _numberOfTickMarks;
    struct { 
        unsigned int allowsOnlyTickMarks : 1; 
        unsigned int animating : 1; 
        unsigned int showValue : 1; 
        unsigned int layeredFill : 1; 
        unsigned int continuous : 1; 
        unsigned int sendActionDuringAnimation : 1; 
        unsigned int alternateColors : 1; 
        unsigned int shouldFlipValue : 1; 
        unsigned int needsNonOpaqueFills : 1; 
        unsigned int reserved : 24; 
    }  _sliderFlags;
    UIImage * _sliderLeftCap;
    /* Warning: unhandled union encoding: '(?="image"@"UIImage""view"@"UIView")' */ union { 
        UIImage *image; 
        id view; 
    }  _sliderLeftFill;
    UIImage * _sliderLeftFillCap;
    UIImage * _sliderRightCap;
    /* Warning: unhandled union encoding: '(?="image"@"UIImage""view"@"UIView")' */ union { 
        UIImage *image; 
        id view; 
    }  _sliderRightFill;
    UIImage * _sliderRightFullCap;
    float  _value;
}

- (void)_controlTouchBegan:(id)arg1 withEvent:(id)arg2;
- (void)_controlTouchEnded:(id)arg1 withEvent:(id)arg2;
- (void)_controlTouchMoved:(id)arg1 withEvent:(id)arg2;
- (void)_resetFillFrames;
- (void)_sendDelayedActions;
- (void)_setValue:(float)arg1 andSendAction:(BOOL)arg2;
- (void)_sliderBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 getLeftCapRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg2 rightCapRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg3 left:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg4 right:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg5;
- (float)_validatedValue:(float)arg1;
- (float)_validatedValueForPoint:(struct CGPoint { float x1; float x2; })arg1 includeTickMarks:(BOOL)arg2;
- (void)animator:(id)arg1 stopAnimation:(id)arg2;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)cancelMouseTracking;
- (BOOL)cancelTouchTracking;
- (BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)createSliderKnobView;
- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)drawSliderInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)drawSliderInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 dirtyRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (void)drawSliderPiece:(int)arg1 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })fillBounds;
- (id)imageForSliderPiece:(int)arg1;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 layeredFill:(BOOL)arg2;
- (BOOL)isAnimatingValueChange;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })maxValueImageBounds;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })minValueImageBounds;
- (void)refreshImages;
- (void)setAllowsTickMarkValuesOnly:(BOOL)arg1;
- (void)setContinuous:(BOOL)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setMaxValue:(float)arg1;
- (void)setMaxValueImage:(id)arg1;
- (void)setMinValue:(float)arg1;
- (void)setMinValueImage:(id)arg1;
- (void)setNumberOfTickMarks:(int)arg1;
- (void)setSendActionDuringAnimation:(BOOL)arg1;
- (void)setShowValue:(BOOL)arg1;
- (void)setValue:(float)arg1;
- (void)setValue:(float)arg1 animated:(BOOL)arg2;
- (void)setValue:(float)arg1 animated:(BOOL)arg2 animationCurve:(int)arg3;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })sliderBounds;
- (void)sliderBoundsChanged;
- (float)value;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })valueTextBounds;

// UIOldSliderControl (SyntheticEvents)

- (id)_scriptingInfo;

@end
