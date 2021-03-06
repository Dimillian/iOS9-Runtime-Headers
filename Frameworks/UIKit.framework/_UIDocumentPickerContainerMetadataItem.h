/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIDocumentPickerContainerMetadataItem : _UIDocumentPickerContainerItem {
    NSDate * _cachedContentModifiedDate;
    NSString * _cachedContentType;
    NSNumber * _cachedFileObjectID;
    unsigned int  _cachedIndentation;
    BOOL  _cachedRenameable;
    NSString * _cachedSortPath;
    NSString * _cachedSubtitle;
    NSString * _cachedSubtitle2;
    NSArray * _cachedTags;
    NSString * _cachedTitle;
    int  _cachedType;
    NSURL * _cachedURL;
    NSURL * _cachedURLInLocalContainer;
}

- (void).cxx_destruct;
- (void)_modelChanged;
- (void)_removeCachedValues;
- (void)cacheValues:(id)arg1;
- (id)contentType;
- (unsigned int)hash;
- (unsigned int)indentationLevel;
- (id)initWithMetadataItem:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)modificationDate;
- (BOOL)renameable;
- (id)sortDate;
- (id)sortPath;
- (id)sortPathComponents;
- (id)subtitle;
- (id)subtitle2;
- (id)tags;
- (id)title;
- (int)type;
- (id)url;
- (id)urlInLocalContainer;

@end
