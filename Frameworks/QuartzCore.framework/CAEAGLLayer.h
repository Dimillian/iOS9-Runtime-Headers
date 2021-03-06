/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CAEAGLLayer : CALayer <EAGLDrawable> {
    struct _CAEAGLNativeWindow { struct _EAGLWindowObject { int (*x_1_1_1)(); int (*x_1_1_2)(); int (*x_1_1_3)(); } x1; struct CAEAGLBuffer {} *x2; unsigned int x3; unsigned int x4; struct Atomic { struct { int x_1_2_1; } x_5_1_1; } x5; struct Atomic { struct { int x_1_2_1; } x_6_1_1; } x6; struct SpinLock { struct { int x_1_2_1; } x_7_1_1; } x7; struct _CAImageQueue {} *x8; id x9; struct x_list_struct {} x10; unsigned int x11; struct CAEAGLBuffer {} *x12; struct CAEAGLBuffer {} *x13; unsigned int x14; unsigned int x15; unsigned int x16; struct CAEAGLBuffer {} *x17; id x18; /* Warning: Unrecognized filer type: 't' using 'void*' */ void*x19; out void*x20; int x21; BOOL x22; void*x23; struct { int x_24_1_1; } x24; } * _win;
}

@property (getter=isAsynchronous) BOOL asynchronous;
@property (copy) NSDictionary *drawableProperties;
@property BOOL lowLatency;
@property (readonly) struct _EAGLWindowObject { int (*x1)(); int (*x2)(); int (*x3)(); }*nativeWindow;
@property BOOL presentsWithTransaction;

+ (BOOL)CA_automaticallyNotifiesObservers:(Class)arg1;
+ (id)defaultValueForKey:(id)arg1;

- (BOOL)_defersDidBecomeVisiblePostCommit;
- (void)_didCommitLayer:(struct Transaction { struct Shared {} *x1; int x2; struct HashTable<CA::Layer *, unsigned int *> {} *x3; struct SpinLock {} *x4; unsigned int x5; struct Level {} *x6; struct List<void (^)()> {} *x7; struct Command {} *x8; struct Deleted {} *x9; struct List<const void *> {} *x10; struct Context {} *x11; struct HashTable<CA::Layer *, CA::Layer *> {} *x12; struct __CFRunLoop {} *x13; struct __CFRunLoopObserver {} *x14; struct LayoutList {} *x15; struct List<CA::Layer *> {} *x16; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; unsigned int x23 : 1; }*)arg1;
- (void)_display;
- (void)dealloc;
- (void)didChangeValueForKey:(id)arg1;
- (id)drawableProperties;
- (void)layerDidBecomeVisible:(BOOL)arg1;
- (struct _EAGLWindowObject { int (*x1)(); int (*x2)(); int (*x3)(); }*)nativeWindow;
- (BOOL)presentsWithTransaction;
- (void)setDrawableProperties:(id)arg1;
- (void)setPresentsWithTransaction:(BOOL)arg1;
- (BOOL)shouldArchiveValueForKey:(id)arg1;

// CAEAGLLayer (CAEAGLLayerPrivate)

- (void)discardContents;
- (BOOL)isAsynchronous;
- (BOOL)lowLatency;
- (void)setAsynchronous:(BOOL)arg1;
- (void)setLowLatency:(BOOL)arg1;

@end
