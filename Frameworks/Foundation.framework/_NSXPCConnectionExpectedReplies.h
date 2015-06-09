/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface _NSXPCConnectionExpectedReplies : NSObject {
    int  _lock;
    NSObject<OS_dispatch_group> * _replyGroup;
    struct __CFDictionary { } * _replyTable;
    unsigned long long  _sequence;
}

- (void)addReplyCompletionBlockOnQueue:(id)arg1 block:(id /* block */)arg2;
- (void)dealloc;
- (void)decrementOutstandingReplyCount;
- (void)finalize;
- (void)incrementOutstandingReplyCount;
- (id)init;
- (id)progressForSequence:(unsigned long long)arg1;
- (void)removeSequence:(unsigned long long)arg1;
- (unsigned long long)sequenceWithProgress:(id)arg1;

@end
