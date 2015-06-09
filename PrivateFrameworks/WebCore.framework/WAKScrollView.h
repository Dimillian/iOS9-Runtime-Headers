/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface WAKScrollView : WAKView <WebCoreFrameScrollView> {
    WAKClipView * _contentView;
    id  _delegate;
    WAKView * _documentView;
    struct CGPoint { 
        float x; 
        float y; 
    }  _scrollOrigin;
}

- (void)_adjustScrollers;
- (BOOL)_selfHandleEvent:(id)arg1;
- (id)contentView;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)documentView;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })documentVisibleRect;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)drawsBackground;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })exposedContentRect;
- (BOOL)hasHorizontalScroller;
- (BOOL)hasVerticalScroller;
- (float)horizontalLineScroll;
- (int)horizontalScrollingMode;
- (BOOL)inProgrammaticScroll;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)reflectScrolledClipView:(id)arg1;
- (struct CGPoint { float x1; float x2; })scrollOrigin;
- (void)scrollPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)scrollWheel:(id)arg1;
- (void)scrollingModes:(int*)arg1 vertical:(int*)arg2;
- (void)setActualScrollPosition:(struct CGPoint { float x1; float x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setDocumentView:(id)arg1;
- (void)setDrawsBackground:(BOOL)arg1;
- (void)setHasHorizontalScroller:(BOOL)arg1;
- (void)setHasVerticalScroller:(BOOL)arg1;
- (void)setHorizontalScrollingMode:(int)arg1;
- (void)setLineScroll:(float)arg1;
- (void)setScrollBarsSuppressed:(BOOL)arg1 repaintOnUnsuppress:(BOOL)arg2;
- (void)setScrollOrigin:(struct CGPoint { float x1; float x2; })arg1 updatePositionAtAll:(BOOL)arg2 immediately:(BOOL)arg3;
- (void)setScrollingMode:(int)arg1;
- (void)setScrollingModes:(int)arg1 vertical:(int)arg2 andLock:(BOOL)arg3;
- (void)setVerticalScrollingMode:(int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })unobscuredContentRect;
- (float)verticalLineScroll;
- (int)verticalScrollingMode;

@end
