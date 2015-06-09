/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface WebTiledBackingLayer : CALayer {
    struct unique_ptr<WebCore::TileController, std::__1::default_delete<WebCore::TileController> > { 
        struct __compressed_pair<WebCore::TileController *, std::__1::default_delete<WebCore::TileController> > { 
            struct TileController {} *__first_; 
        } __ptr_; 
    }  _tileController;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)acceleratesDrawing;
- (id)actionForKey:(id)arg1;
- (float)contentsScale;
- (struct TileController { int (**x1)(); struct PlatformCALayer {} *x2; struct unique_ptr<WebCore::TileCoverageMap, std::__1::default_delete<WebCore::TileCoverageMap> > { struct __compressed_pair<WebCore::TileCoverageMap *, std::__1::default_delete<WebCore::TileCoverageMap> > { struct TileCoverageMap {} *x_1_2_1; } x_3_1_1; } x3; struct unique_ptr<WebCore::TileGrid, std::__1::default_delete<WebCore::TileGrid> > { struct __compressed_pair<WebCore::TileGrid *, std::__1::default_delete<WebCore::TileGrid> > { struct TileGrid {} *x_1_2_1; } x_4_1_1; } x4; struct unique_ptr<WebCore::TileGrid, std::__1::default_delete<WebCore::TileGrid> > { struct __compressed_pair<WebCore::TileGrid *, std::__1::default_delete<WebCore::TileGrid> > { struct TileGrid {} *x_1_2_1; } x_5_1_1; } x5; struct IntSize { int x_6_1_1; int x_6_1_2; } x6; struct FloatRect { struct FloatPoint { float x_1_2_1; float x_1_2_2; } x_7_1_1; struct FloatSize { float x_2_2_1; float x_2_2_2; } x_7_1_2; } x7; struct FloatRect { struct FloatPoint { float x_1_2_1; float x_1_2_2; } x_8_1_1; struct FloatSize { float x_2_2_1; float x_2_2_2; } x_8_1_2; } x8; struct IntRect { struct IntPoint { int x_1_2_1; int x_1_2_2; } x_9_1_1; struct IntSize { int x_2_2_1; int x_2_2_2; } x_9_1_2; } x9; struct Timer { int (**x_10_1_1)(); double x_10_1_2; double x_10_1_3; double x_10_1_4; int x_10_1_5; unsigned int x_10_1_6; struct Vector<WebCore::TimerBase *, 0, WTF::CrashOnOverflow, 16> {} *x_10_1_7; struct function<void ()>={type=[12C] {} x_10_1_8; struct __base<void ()> {} *x_10_1_9; } x10; }*)createTileController:(struct PlatformCALayer { int (**x1)(); unsigned int x2; int x3; unsigned long long x4; struct RetainPtr<CALayer> { void *x_5_1_1; } x5; struct PlatformCALayerClient {} *x6; }*)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithLayer:(id)arg1;
- (void)invalidate;
- (BOOL)isOpaque;
- (void)setAcceleratesDrawing:(BOOL)arg1;
- (void)setBorderColor:(struct CGColor { }*)arg1;
- (void)setBorderWidth:(float)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setContentsScale:(float)arg1;
- (void)setNeedsDisplay;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setOpaque:(BOOL)arg1;
- (struct TiledBacking { int (**x1)(); }*)tiledBacking;

@end
