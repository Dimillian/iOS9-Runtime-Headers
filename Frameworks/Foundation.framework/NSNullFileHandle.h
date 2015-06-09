/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSNullFileHandle : NSFileHandle

- (id)availableData;
- (void)closeFile;
- (int)fileDescriptor;
- (unsigned long long)offsetInFile;
- (id)readDataOfLength:(unsigned int)arg1;
- (id)readDataToEndOfFile;
- (id /* block */)readabilityHandler;
- (unsigned long long)seekToEndOfFile;
- (void)seekToFileOffset:(unsigned long long)arg1;
- (void)setReadabilityHandler:(id /* block */)arg1;
- (void)setWriteabilityHandler:(id /* block */)arg1;
- (void)synchronizeFile;
- (void)truncateFileAtOffset:(unsigned long long)arg1;
- (void)writeData:(id)arg1;
- (id /* block */)writeabilityHandler;

@end
