/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVPlayerConnection : NSObject {
    NSError * _error;
    AVWeakReference * _playerItemReference;
    AVWeakReference * _playerReference;
    AVPlayerItem * _previousPlayerItem;
    int  _status;
}

@property (nonatomic, readonly) int status;

- (BOOL)addItemToPlayQueueAfterPlaybackItemOfItem:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)error;
- (id)initWithWeakReferenceToPlayer:(id)arg1 weakReferenceToPlayerItem:(id)arg2;
- (id)player;
- (id)playerItem;
- (void)removeItemFromPlayQueue;
- (int)status;

@end
