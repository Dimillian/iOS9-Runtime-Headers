/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardFlipTransitionView : UIKeyboardSplitTransitionView {
    CALayer * _backDarkening;
    CALayer * _backDarkeningLeft;
    CALayer * _backDarkeningRight;
    CALayer * _backFace;
    CALayer * _container;
    NSMutableDictionary * _controlKeys;
    UIKBCacheToken * _endKeyplaneToken;
    CALayer * _frontDarkening;
    CALayer * _frontFace;
    struct { 
        unsigned int shiftKeys : 1; 
        unsigned int returnKeys : 1; 
        unsigned int moreIntlKeys : 1; 
    }  _rebuildFlags;
    BOOL  _showingFrontFace;
    UIKBCacheToken * _startKeyplaneToken;
}

@property (getter=isShowingFrontFace, nonatomic) BOOL showingFrontFace;

- (void)_delayedUpdateTransition;
- (void)_flipToFront:(BOOL)arg1 animated:(BOOL)arg2;
- (void)dealloc;
- (struct CGImage { }*)defaultKeyboardImage;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isShowingFrontFace;
- (void)rebuildBackgroundTransition;
- (void)rebuildControlKeys:(unsigned long long)arg1;
- (void)rebuildControlSlicesForKeyName:(id)arg1;
- (void)rebuildFromKeyplane:(id)arg1 toKeyplane:(id)arg2 keyboardType:(int)arg3 orientation:(int)arg4;
- (void)rebuildMoreIntlKeys;
- (void)rebuildReturnSlices;
- (void)rebuildShiftSlices;
- (void)rebuildTransition;
- (void)rebuildTransitionForSplitStyleChange:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setShowingFrontFace:(BOOL)arg1;
- (struct CGImage { }*)splitKeyboardImage;
- (BOOL)transitionIsVisible;
- (void)updateMoreIntlKey:(id)arg1 asStart:(BOOL)arg2 withRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 showIntl:(BOOL)arg4 showDictKey:(BOOL)arg5;
- (void)updateTransition;

@end
