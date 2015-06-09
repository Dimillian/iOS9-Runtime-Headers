/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSHashBuilder : NSObject {
    unsigned int  _hash;
}

// BSHashBuilder (null)

+ (id)builder;

- (void)_append:(unsigned int)arg1;
- (id)appendArray:(id)arg1;
- (id)appendBool:(BOOL)arg1;
- (id)appendCGFloat:(float)arg1;
- (id)appendDouble:(double)arg1;
- (id)appendFloat:(float)arg1;
- (id)appendHashingBlocks:(id /* block */)arg1;
- (id)appendInteger:(int)arg1;
- (id)appendObject:(id)arg1;
- (id)appendPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)appendPointer:(void*)arg1;
- (id)appendRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)appendSize:(struct CGSize { float x1; float x2; })arg1;
- (id)appendUnsignedInteger:(unsigned int)arg1;
- (unsigned int)hash;
- (id)init;

@end
