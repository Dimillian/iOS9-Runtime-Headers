/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TIWordTokenizer : NSObject {
    unsigned int  m_bufferOffset;
    struct { 
        unsigned short buffer[64]; 
        struct __CFString {} *theString; 
        unsigned short *directUniCharBuffer; 
        char *directCStringBuffer; 
        struct { 
            int location; 
            int length; 
        } rangeToBuffer; 
        int bufferedRangeStart; 
        int bufferedRangeEnd; 
    }  m_inlineBuffer;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    }  m_searchRange;
    NSString * m_string;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    }  m_tokenRange;
}

- (struct _NSRange { unsigned int x1; unsigned int x2; })advanceToNextToken;
- (id)allTokensForString:(id)arg1;
- (void)dealloc;
- (id)init;
- (struct _NSRange { unsigned int x1; unsigned int x2; })rangeOfCurrentToken;
- (void)setString:(id)arg1 withSearchRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;

@end
