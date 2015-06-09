/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSLookupMatch : NSObject {
    NSTextCheckingResult * _dataDetectorResult;
    NSString * _languageIdentifier;
    unsigned int  _matchType;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    }  _range;
    double  _score;
}

@property (retain) NSTextCheckingResult *dataDetectorResult;
@property (retain) NSString *languageIdentifier;
@property (readonly) unsigned int matchType;
@property (readonly) struct _NSRange { unsigned int x1; unsigned int x2; } range;
@property (readonly) double score;

+ (id)matchesInString:(id)arg1 types:(unsigned int)arg2 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;

- (id)dataDetectorResult;
- (void)dealloc;
- (id)description;
- (id)initWithType:(unsigned int)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 score:(double)arg3;
- (id)languageIdentifier;
- (unsigned int)matchType;
- (struct _NSRange { unsigned int x1; unsigned int x2; })range;
- (double)score;
- (void)setDataDetectorResult:(id)arg1;
- (void)setLanguageIdentifier:(id)arg1;

@end
