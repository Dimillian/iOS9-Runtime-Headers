/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UINibDecoder : NSCoder {
    Class  arrayClass;
    Class * classes;
    id  delegate;
    Class  dictionaryClass;
    int  failedByKeyMask;
    struct UINibDecoderHeader { 
        unsigned char type[10]; 
        unsigned int formatVersion; 
        unsigned int coderVersion; 
        struct UINibArchiveTableInfo { 
            unsigned int count; 
            unsigned int offset; 
        } objects; 
        struct UINibArchiveTableInfo { 
            unsigned int count; 
            unsigned int offset; 
        } keys; 
        struct UINibArchiveTableInfo { 
            unsigned int count; 
            unsigned int offset; 
        } values; 
        struct UINibArchiveTableInfo { 
            unsigned int count; 
            unsigned int offset; 
        } classes; 
    }  header;
    long  inlinedValueKey;
    struct UIKeyToKeyIDCache { 
        NSString *previousKey[64]; 
        void *previousKeyID[64]; 
        BOOL previousKeyExists[64]; 
        int hashHits; 
        int hashHotMisses; 
        int hashColdMisses; 
    }  keyIDCache;
    UINibStringIDTable * keyIDTable;
    unsigned int * keyMasks;
    unsigned int * longObjectClassIDs;
    int  lookupRounds;
    int  maxPossibleLookupRounds;
    id * missingClasses;
    struct UINibDecoderObjectEntry { unsigned int x1; unsigned int x2; } * objects;
    id * objectsByObjectID;
    struct UINibDecoderRecursiveState { 
        int objectID; 
        int nextGenericKey; 
        unsigned int nextValueSearchIndex; 
        BOOL replaced; 
    }  recursiveState;
    int  savedByKeyMask;
    Class  setClass;
    char * shortObjectClassIDs;
    struct UIKeyAndScopeToValueCache { 
        unsigned int previousScope; 
        unsigned int previousKey; 
        struct UINibDecoderValue {} *previousValue; 
    }  valueCache;
    void * valueData;
    unsigned long  valueDataSize;
    char * valueTypes;
    struct UINibDecoderValue { unsigned int x1; unsigned int x2; } * values;
}

@property id delegate;

+ (id)unarchiveObjectWithData:(id)arg1;
+ (id)unarchiveObjectWithFile:(id)arg1;

- (BOOL)allowsKeyedCoding;
- (BOOL)containsValueForKey:(id)arg1;
- (void)dealloc;
- (BOOL)decodeArrayOfCGFloats:(float*)arg1 count:(int)arg2 forKey:(id)arg3;
- (BOOL)decodeArrayOfDoubles:(double*)arg1 count:(int)arg2 forKey:(id)arg3;
- (BOOL)decodeArrayOfFloats:(float*)arg1 count:(int)arg2 forKey:(id)arg3;
- (void)decodeArrayOfObjCType:(const char *)arg1 count:(unsigned int)arg2 at:(void*)arg3;
- (BOOL)decodeBoolForKey:(id)arg1;
- (const char *)decodeBytesForKey:(id)arg1 returnedLength:(unsigned int*)arg2;
- (void*)decodeBytesWithReturnedLength:(unsigned int*)arg1;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })decodeCGAffineTransformForKey:(id)arg1;
- (struct CGPoint { float x1; float x2; })decodeCGPointForKey:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })decodeCGRectForKey:(id)arg1;
- (struct CGSize { float x1; float x2; })decodeCGSizeForKey:(id)arg1;
- (id)decodeDataObject;
- (double)decodeDoubleForKey:(id)arg1;
- (float)decodeFloatForKey:(id)arg1;
- (int)decodeInt32ForKey:(id)arg1;
- (long long)decodeInt64ForKey:(id)arg1;
- (int)decodeIntForKey:(id)arg1;
- (int)decodeIntegerForKey:(id)arg1;
- (id)decodeNXObject;
- (id)decodeObject;
- (id)decodeObjectForKey:(id)arg1;
- (id)decodePropertyList;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })decodeUIEdgeInsetsForKey:(id)arg1;
- (void)decodeValueOfObjCType:(const char *)arg1 at:(void*)arg2;
- (void)decodeValuesOfObjCTypes:(const char *)arg1;
- (id)delegate;
- (void)finishDecoding;
- (id)initForReadingWithData:(id)arg1;
- (id)initForReadingWithData:(id)arg1 error:(id*)arg2;
- (id)nextGenericKey;
- (void)replaceObject:(id)arg1 withObject:(id)arg2;
- (void)setDelegate:(id)arg1;
- (unsigned int)systemVersion;
- (BOOL)validateAndIndexClasses:(const void*)arg1 length:(unsigned long)arg2;
- (BOOL)validateAndIndexData:(id)arg1 error:(id*)arg2;
- (BOOL)validateAndIndexKeys:(const void*)arg1 length:(unsigned long)arg2;
- (BOOL)validateAndIndexObjects:(const void*)arg1 length:(unsigned long)arg2;
- (BOOL)validateAndIndexValues:(const void*)arg1 length:(unsigned long)arg2;
- (int)versionForClassName:(id)arg1;

@end
