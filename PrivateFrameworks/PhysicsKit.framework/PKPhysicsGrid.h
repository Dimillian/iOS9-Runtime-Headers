/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/PhysicsKit.framework/PhysicsKit
 */

@interface PKPhysicsGrid : NSObject {
    struct shared_ptr<PKCGrid> { 
        struct PKCGrid {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  grid;
    PKQuadTree * quadTree;
}

@property (nonatomic) struct shared_ptr<PKCGrid> { struct PKCGrid {} *x1; struct __shared_weak_count {} *x2; } gridPtr;
@property (nonatomic, readonly) int height;
@property (nonatomic, readonly) int width;

// PKPhysicsGrid (null)

+ (id)gridFromOccupancyArray:(const char *)arg1 bytePitch:(int)arg2 width:(int)arg3 height:(int)arg4;
+ (id)gridFromRGBAU8PixelData:(const char *)arg1 imageWidth:(int)arg2 imageHeight:(int)arg3 alphaThreshold:(float)arg4 accuracy:(float)arg5;
+ (id)vectorGridFromRGBAU8PixelData:(const char *)arg1 imageWidth:(int)arg2 imageHeight:(int)arg3 accuracy:(float)arg4;

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned char)gridDataAtX:(int)arg1 y:(int)arg2 z:(int)arg3;
- (struct shared_ptr<PKCGrid> { struct PKCGrid {} *x1; struct __shared_weak_count {} *x2; })gridPtr;
- (int)height;
- (bool)isGridRegionOccupied:(int)arg1 y:(int)arg2 width:(int)arg3 height:(int)arg4;
- (struct shared_ptr<PKPath> { struct PKPath {} *x1; struct __shared_weak_count {} *x2; })pathFromOutlineWithSmoothingThreshold:(float)arg1 bounds:(struct { struct { float x_1_1_1; float x_1_1_2; } x1; struct { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (id)physicsBodyFromLVS0:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)physicsBodyFromSmoothedOutline:(float)arg1 size:(struct CGSize { float x1; float x2; })arg2;
- (void)setGridPtr:(struct shared_ptr<PKCGrid> { struct PKCGrid {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (int)width;

@end
