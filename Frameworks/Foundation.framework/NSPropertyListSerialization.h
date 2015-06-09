/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSPropertyListSerialization : NSObject {
    void * reserved;
}

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)dataFromPropertyList:(id)arg1 format:(unsigned int)arg2 errorDescription:(out id*)arg3;
+ (id)dataWithPropertyList:(id)arg1 format:(unsigned int)arg2 options:(unsigned int)arg3 error:(out id*)arg4;
+ (BOOL)propertyList:(id)arg1 isValidForFormat:(unsigned int)arg2;
+ (id)propertyListFromData:(id)arg1 mutabilityOption:(unsigned int)arg2 format:(unsigned int*)arg3 errorDescription:(out id*)arg4;
+ (id)propertyListWithData:(id)arg1 options:(unsigned int)arg2 format:(unsigned int*)arg3 error:(out id*)arg4;
+ (id)propertyListWithStream:(id)arg1 options:(unsigned int)arg2 format:(unsigned int*)arg3 error:(out id*)arg4;
+ (int)writePropertyList:(id)arg1 toStream:(id)arg2 format:(unsigned int)arg3 options:(unsigned int)arg4 error:(out id*)arg5;

- (id)init;

@end
