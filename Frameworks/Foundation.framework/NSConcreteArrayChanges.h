/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSConcreteArrayChanges : NSArrayChanges {
    /* Warning: unhandled struct encoding: '{?="objects"@"isMutable"c"list"{?="buffer"^{_NSOrderedChange}"availableIndex"I"capacity"I"changesIndex"I"lastIndex"I"count"I}}' */ struct { 
        id objects; 
    }  _changes;
}

- (void)_enumerateChanges:(unsigned int)arg1 stop:(BOOL*)arg2 usingBlock:(id /* block */)arg3;
- (void)addChange:(id)arg1;
- (void)applyChangesToArray:(id)arg1;
- (unsigned int)changeCount;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)count;
- (unsigned int)countByEnumeratingWithState:(struct { unsigned long x1; id *x2; unsigned long x3; unsigned long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned int)arg3;
- (void)dealloc;
- (void)enumerateChanges:(unsigned int)arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateChangesUsingBlock:(id /* block */)arg1;
- (void)getObjects:(id*)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (id)init;
- (id)initWithCapacity:(unsigned int)arg1;
- (id)initWithObjects:(const id*)arg1 count:(unsigned int)arg2;
- (id)objectAtIndex:(unsigned int)arg1;
- (void)sortRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 options:(unsigned int)arg2 usingComparator:(id /* block */)arg3;

@end
