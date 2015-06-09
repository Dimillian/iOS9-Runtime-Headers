/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface NSTextTableBlock : NSTextBlock {
    int  _colNum;
    int  _colSpan;
    int  _rowNum;
    int  _rowSpan;
    NSTextTable * _table;
    void * _tableBlockPrimary;
    void * _tableBlockSecondary;
}

// NSTextTableBlock (null)

+ (void)initialize;

- (void)_setColumnSpan:(int)arg1;
- (void)_setRowSpan:(int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundsRectForContentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 textContainer:(id)arg3 characterRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg4;
- (int)columnSpan;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)drawBackgroundWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inView:(id)arg2 characterRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3 layoutManager:(id)arg4;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTable:(id)arg1 startingRow:(int)arg2 rowSpan:(int)arg3 startingColumn:(int)arg4 columnSpan:(int)arg5;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectForLayoutAtPoint:(struct CGPoint { float x1; float x2; })arg1 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 textContainer:(id)arg3 characterRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg4;
- (int)rowSpan;
- (int)startingColumn;
- (int)startingRow;
- (id)table;

@end
