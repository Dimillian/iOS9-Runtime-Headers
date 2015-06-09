/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UISegmentedControlAppearanceStorage : NSObject {
    NSMutableDictionary * _backgroundImages;
    NSMutableDictionary * _backgroundPositionAdjustmentsForBarMetrics;
    NSMutableDictionary * _contentPositionOffsets;
    NSMutableDictionary * _dividerImages;
    BOOL  _isTiled;
    unsigned int  _leftCapWidth;
    BOOL  _legacyDontHighlight;
    BOOL  _legacySuppressOptionsBackground;
    NSMutableDictionary * _miniBackgroundImages;
    NSMutableDictionary * _miniContentPositionOffsets;
    NSMutableDictionary * _miniDividerImages;
    UIImage * _optionsBackgroundImage;
    unsigned int  _rightCapWidth;
    NSMutableDictionary * _textAttributesForState;
}

@property (nonatomic, retain) UIImage *optionsBackgroundImage;

- (void).cxx_destruct;
- (id)anyDividerImage;
- (id)anyDividerImageForMini:(BOOL)arg1;
- (id)backgroundImageForState:(unsigned int)arg1 isMini:(BOOL)arg2;
- (id)backgroundImageForState:(unsigned int)arg1 isMini:(BOOL)arg2 withFallback:(BOOL)arg3;
- (float)backgroundPositionAdjustmentForBarMetrics:(int)arg1;
- (id)contentPositionOffsetForSegment:(int)arg1 inMiniBar:(BOOL)arg2;
- (id)contentPositionOffsetForSegment:(int)arg1 inMiniBar:(BOOL)arg2 noFallback:(BOOL)arg3;
- (id)dividerImageForLeftSegmentState:(unsigned int)arg1 rightSegmentState:(unsigned int)arg2 isMini:(BOOL)arg3;
- (id)dividerImageForLeftSegmentState:(unsigned int)arg1 rightSegmentState:(unsigned int)arg2 isMini:(BOOL)arg3 withFallback:(BOOL)arg4;
- (id)init;
- (BOOL)legacySuppressOptionsBackground;
- (id)optionsBackgroundImage;
- (void)setBackgroundImage:(id)arg1 forState:(unsigned int)arg2 isMini:(BOOL)arg3;
- (void)setBackgroundPositionAdjustment:(float)arg1 forBarMetrics:(int)arg2;
- (void)setContentPositionOffset:(id)arg1 forSegment:(int)arg2 inMiniBar:(BOOL)arg3;
- (void)setDetail:(struct { id x1; float x2; struct { id x_3_1_1; id x_3_1_2; id x_3_1_3; unsigned char x_3_1_4; /* Warning: Unrecognized filer type: 'G' using 'void*' */ void*x_3_1_5; unsigned short x_3_1_6; int x_3_1_7; void*x_3_1_8; void*x_3_1_9; void*x_3_1_10; float x_3_1_11; float x_3_1_12; } x3; }*)arg1;
- (void)setDividerImage:(id)arg1 forLeftSegmentState:(unsigned int)arg2 rightSegmentState:(unsigned int)arg3 isMini:(BOOL)arg4;
- (void)setIsTiled:(BOOL)arg1 leftCapWidth:(unsigned int)arg2 rightCapWidth:(unsigned int)arg3;
- (void)setOptionsBackgroundImage:(id)arg1;
- (void)setTextAttributes:(id)arg1 forState:(unsigned int)arg2;
- (void)takeTextAttributesFrom:(struct { id x1; id x2; id x3; unsigned char x4; /* Warning: Unrecognized filer type: 'G' using 'void*' */ void*x5; unsigned short x6; int x7; void*x8; void*x9; void*x10; float x11; float x12; })arg1 forState:(unsigned int)arg2;
- (id)textAttributesForState:(unsigned int)arg1;
- (BOOL)wantsTrackingSuppressed;

@end
