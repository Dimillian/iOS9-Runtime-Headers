/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface AVPlaybackQueue : NSObject {
    AVQueue * _avItemQueue;
    int  _avQueueTransactionCount;
    id  _delegate;
    struct OpaqueFigPlayer { } * _figPlayer;
    BOOL  _hasBuiltPlaybackQueue;
    int  _ignoreAVQueueModifications;
    NSMutableArray * _pbItemQueue;
    int  _repeatMode;
    BOOL  _waitingToAddFirstItem;
}

- (void)beginAVQueueTransaction;
- (void)checkQueueConsistency;
- (void)clearPBItemQueueFromIndex:(int)arg1;
- (id)currentPlaybackItem;
- (void)dealloc;
- (void)endAVQueueTransaction;
- (void)ensurePlaybackQueue;
- (void)ensurePlaybackQueueImmed;
- (void)fillInPBItemQueue;
- (id)initWithDelegate:(id)arg1 figPlayer:(struct OpaqueFigPlayer { }*)arg2;
- (void)playbackItemInspectionComplete:(id)arg1;
- (void)playbackItemWasRemovedFromPlayQueue:(id)arg1;
- (void)queueItemWasAddedNotification:(id)arg1;
- (void)queueItemWillBeRemovedNotification:(id)arg1;
- (void)removeItemsNoLongerInPlayQueue;
- (void)scheduleRemoveItemsNoLongerInPlayQueue;
- (void)setAVItemQueue:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setRepeatMode:(int)arg1;
- (void)updateBookmarkTimesIncludeFirst:(BOOL)arg1 updateFirst:(BOOL)arg2;

@end
