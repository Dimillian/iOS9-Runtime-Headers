/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UITouchObservation : NSObject {
    unsigned int  _observedTouchCount;
    unsigned int  _observedTouchOffset;
    UITouch * _observedTouches;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)enumerateTouchesWithBlock:(id /* block */)arg1;
- (void)observeTouch:(id)arg1;
- (void)reset;
- (unsigned int)touchCount;

@end
