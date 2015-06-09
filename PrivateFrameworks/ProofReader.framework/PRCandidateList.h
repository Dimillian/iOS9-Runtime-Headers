/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
 */

@interface PRCandidateList : NSObject {
    NSMutableArray * _candidates;
    unsigned int  _maxCount;
}

- (void)addCandidate:(id)arg1;
- (void)addCandidateWithBuffer:(char *)arg1 encoding:(unsigned long)arg2 errorType:(unsigned int)arg3;
- (void)addCandidateWithBuffer:(char *)arg1 encoding:(unsigned long)arg2 transform:(unsigned int)arg3 errorType:(unsigned int)arg4;
- (void)addCandidateWithString:(id)arg1 errorType:(unsigned int)arg2;
- (void)addReplacementCandidateWithBuffer:(char *)arg1 encoding:(unsigned long)arg2 transform:(unsigned int)arg3 intendedCharacter:(unsigned short)arg4 actualCharacter:(unsigned short)arg5;
- (void)addTranspositionCandidateWithBuffer:(char *)arg1 encoding:(unsigned long)arg2 transform:(unsigned int)arg3 intendedFirstCharacter:(unsigned short)arg4 intendedSecondCharacter:(unsigned short)arg5;
- (id)candidateStrings;
- (id)candidates;
- (unsigned int)count;
- (void)dealloc;
- (id)description;
- (id)initWithMaxCount:(unsigned int)arg1;
- (BOOL)isFull;
- (unsigned int)maxCount;

@end
