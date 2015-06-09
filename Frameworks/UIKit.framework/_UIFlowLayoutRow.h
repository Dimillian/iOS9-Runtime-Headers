/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIFlowLayoutRow : NSObject {
    float  _availableSpace;
    BOOL  _complete;
    BOOL  _fixedItemSize;
    int  _horizontalAlignement;
    int  _index;
    BOOL  _isValid;
    NSMutableArray * _items;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  _rowFrame;
    struct CGSize { 
        float width; 
        float height; 
    }  _rowSize;
    _UIFlowLayoutSection * _section;
    int  _verticalAlignement;
}

@property (nonatomic) float availableSpace;
@property (nonatomic) BOOL complete;
@property (nonatomic) BOOL fixedItemSize;
@property (nonatomic) int index;
@property (nonatomic, readonly) NSMutableArray *items;
@property (nonatomic) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } rowFrame;
@property (nonatomic) struct CGSize { float x1; float x2; } rowSize;
@property (nonatomic) _UIFlowLayoutSection *section;

- (void).cxx_destruct;
- (void)addItem:(id)arg1 atEnd:(BOOL)arg2;
- (float)availableSpace;
- (BOOL)complete;
- (id)copyFromSection:(id)arg1;
- (BOOL)fixedItemSize;
- (int)index;
- (int)indexOfNearestItemAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)init;
- (void)insertItem:(id)arg1 atIndex:(int)arg2;
- (void)invalidate;
- (id)items;
- (void)layoutRow;
- (void)removeItemAtIndex:(int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rowFrame;
- (struct CGSize { float x1; float x2; })rowSize;
- (id)section;
- (void)setAvailableSpace:(float)arg1;
- (void)setComplete:(BOOL)arg1;
- (void)setFixedItemSize:(BOOL)arg1;
- (void)setIndex:(int)arg1;
- (void)setRowFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setRowSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setSection:(id)arg1;
- (id)snapshot;

@end
