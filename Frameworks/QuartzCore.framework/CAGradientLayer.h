/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CAGradientLayer : CALayer

@property (retain) id colorMap;
@property (copy) NSArray *colors;
@property struct CGPoint { float x1; float x2; } endPoint;
@property (copy) NSArray *locations;
@property struct CGPoint { float x1; float x2; } startPoint;
@property (copy) NSString *type;

+ (BOOL)CA_automaticallyNotifiesObservers:(Class)arg1;
+ (BOOL)_hasRenderLayerSubclass;
+ (id)defaultValueForKey:(id)arg1;

- (struct Layer { int (**x1)(); struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; struct Data { unsigned int x_3_1_1; unsigned char x_3_1_2; unsigned char x_3_1_3; unsigned char x_3_1_4; unsigned char x_3_1_5; unsigned int x_3_1_6 : 3; unsigned int x_3_1_7 : 3; unsigned int x_3_1_8 : 4; unsigned int x_3_1_9 : 4; unsigned int x_3_1_10 : 4; unsigned int x_3_1_11 : 1; unsigned int x_3_1_12 : 1; unsigned int x_3_1_13 : 1; unsigned int x_3_1_14 : 1; unsigned int x_3_1_15 : 1; unsigned int x_3_1_16 : 1; unsigned int x_3_1_17 : 1; unsigned int x_3_1_18 : 1; unsigned int x_3_1_19 : 1; unsigned int x_3_1_20 : 1; unsigned int x_3_1_21 : 1; unsigned int x_3_1_22 : 1; unsigned int x_3_1_23 : 1; unsigned int x_3_1_24 : 1; unsigned int x_3_1_25 : 1; unsigned int x_3_1_26 : 1; unsigned int x_3_1_27 : 1; unsigned int x_3_1_28 : 1; unsigned int x_3_1_29 : 1; unsigned int x_3_1_30 : 1; unsigned int x_3_1_31 : 1; unsigned int x_3_1_32 : 25; struct Vec2<double> { double x_33_2_1; double x_33_2_2; } x_3_1_33; struct Rect { double x_34_2_1; double x_34_2_2; double x_34_2_3; double x_34_2_4; } x_3_1_34; } x3; struct Ref<CA::Render::Object> { struct Object {} *x_4_1_1; } x4; struct Ref<CA::Render::Object> { struct Object {} *x_5_1_1; } x5; struct Ref<CA::Render::TypedArray<CA::Render::Layer> > { struct TypedArray<CA::Render::Layer> {} *x_6_1_1; } x6; struct Layer {} *x7; struct Ref<CA::Render::Layer::Ext> { struct Ext {} *x_8_1_1; } x8; struct Ref<CA::Render::TypedArray<CA::Render::Animation> > { struct TypedArray<CA::Render::Animation> {} *x_9_1_1; } x9; struct Ref<CA::Render::Handle> { struct Handle {} *x_10_1_1; } x10; }*)_copyRenderLayer:(struct Transaction { struct Shared {} *x1; int x2; struct HashTable<CA::Layer *, unsigned int *> {} *x3; struct SpinLock {} *x4; unsigned int x5; struct Level {} *x6; struct List<void (^)()> {} *x7; struct Command {} *x8; struct Deleted {} *x9; struct List<const void *> {} *x10; struct Context {} *x11; struct HashTable<CA::Layer *, CA::Layer *> {} *x12; struct __CFRunLoop {} *x13; struct __CFRunLoopObserver {} *x14; struct LayoutList {} *x15; struct List<CA::Layer *> {} *x16; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; unsigned int x23 : 1; }*)arg1 layerFlags:(unsigned int)arg2 commitFlags:(unsigned int*)arg3;
- (void)_renderBackgroundInContext:(struct CGContext { }*)arg1;
- (bool)_renderLayerDefinesProperty:(unsigned int)arg1;
- (unsigned int)_renderLayerPropertyAnimationFlags:(unsigned int)arg1;
- (id)colors;
- (void)didChangeValueForKey:(id)arg1;
- (struct CGPoint { float x1; float x2; })endPoint;
- (id)implicitAnimationForKeyPath:(id)arg1;
- (id)locations;
- (void)setColors:(id)arg1;
- (void)setEndPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)setLocations:(id)arg1;
- (void)setStartPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)setType:(id)arg1;
- (struct CGPoint { float x1; float x2; })startPoint;
- (id)type;

// CAGradientLayer (CAGradientLayerPrivate)

- (id)colorMap;
- (void)setColorMap:(id)arg1;

@end
