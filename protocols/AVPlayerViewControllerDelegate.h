/* Generated by RuntimeBrowser.
 */

@protocol AVPlayerViewControllerDelegate <NSObject>

@optional

- (void)playerViewController:(void *)arg1 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(void *)arg2; // needs 2 arg types, found 7: AVPlayerViewController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BOOL, void*
- (void)playerViewControllerDidStartPictureInPicture:(AVPlayerViewController *)arg1;
- (void)playerViewControllerDidStopPictureInPicture:(AVPlayerViewController *)arg1;
- (void)playerViewControllerFailedToStartPictureInPicture:(AVPlayerViewController *)arg1 withError:(NSError *)arg2;
- (BOOL)playerViewControllerShouldAutomaticallyDismissAtPictureInPictureStart:(AVPlayerViewController *)arg1;
- (void)playerViewControllerWillStartPictureInPicture:(AVPlayerViewController *)arg1;
- (void)playerViewControllerWillStopPictureInPicture:(AVPlayerViewController *)arg1;

@end
