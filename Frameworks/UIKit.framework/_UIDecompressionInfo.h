/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIDecompressionInfo : NSObject {
    BOOL  decompressionComplete;
    NSData * imageData;
    struct CGSize { 
        float width; 
        float height; 
    }  maxSize;
    BOOL  metadataComplete;
    NSObject<OS_dispatch_semaphore> * metadataSemaphore;
    int  renderingIntent;
    NSObject<OS_dispatch_semaphore> * syncSemaphore;
}

- (void).cxx_destruct;
- (id)initWithData:(id)arg1 maxSize:(struct CGSize { float x1; float x2; })arg2 renderingIntent:(int)arg3;

@end
