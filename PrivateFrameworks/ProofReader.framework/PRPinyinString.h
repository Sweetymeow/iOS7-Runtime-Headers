/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
 */

@interface PRPinyinString : NSPinyinString  {
    unsigned int _originalLength;
    unsigned int _originalCheckedLength;
    unsigned int _modificationCount;
    unsigned int *_modificationTypes;
    struct _NSRange { unsigned int x1; unsigned int x2; } *_originalRanges;
    struct _NSRange { unsigned int x1; unsigned int x2; } *_finalRanges;
    struct _NSRange { unsigned int x1; unsigned int x2; } *_originalSyllableRanges;
    struct _NSRange { unsigned int x1; unsigned int x2; } *_originalAdditionalSyllableRanges;
}

+ (id)correctionsForInputString:(id)arg1;
+ (id)prefixesForInputString:(id)arg1;
+ (id)alternativesForInputString:(id)arg1;

- (unsigned int)finalCheckedLength;
- (id)initWithString:(id)arg1 syllableCount:(unsigned int)arg2 lastSyllableIsPartial:(BOOL)arg3 score:(unsigned int)arg4 originalLength:(unsigned int)arg5 originalCheckedLength:(unsigned int)arg6 numberOfModifications:(unsigned int)arg7 modificationTypes:(unsigned int*)arg8 originalModificationRanges:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg9 finalModificationRanges:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg10 originalSyllableRanges:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg11 originalAdditionalSyllableRanges:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg12;
- (id)initWithUncheckedString:(id)arg1 score:(unsigned int)arg2 originalLength:(unsigned int)arg3;
- (id)initWithString:(id)arg1 syllableCount:(unsigned int)arg2 lastSyllableIsPartial:(BOOL)arg3 score:(unsigned int)arg4 originalLength:(unsigned int)arg5 modificationType:(unsigned int)arg6 originalModificationRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg7 finalModificationRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg8 originalSyllableRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg9 originalAdditionalSyllableRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg10;
- (id)initWithString:(id)arg1 syllableCount:(unsigned int)arg2 lastSyllableIsPartial:(BOOL)arg3 score:(unsigned int)arg4 originalLength:(unsigned int)arg5 modificationType:(unsigned int)arg6 originalModificationRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg7 finalModificationRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg8 originalSyllableRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg9;
- (id)initWithString:(id)arg1 syllableCount:(unsigned int)arg2 lastSyllableIsPartial:(BOOL)arg3 score:(unsigned int)arg4 originalLength:(unsigned int)arg5 modificationType:(unsigned int)arg6 originalModificationRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg7 finalModificationRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg8;
- (unsigned int)originalCheckedLength;
- (unsigned int)originalLength;
- (id)annotatedString;
- (struct _NSRange { unsigned int x1; unsigned int x2; })originalAdditionalSyllableRangeForModificationAtIndex:(unsigned int)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })originalSyllableRangeForModificationAtIndex:(unsigned int)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })finalRangeForModificationAtIndex:(unsigned int)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })originalRangeForModificationAtIndex:(unsigned int)arg1;
- (unsigned int)typeOfModificationAtIndex:(unsigned int)arg1;
- (unsigned int)numberOfModifications;
- (unsigned int)length;
- (unsigned short)characterAtIndex:(unsigned int)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)string;
- (void)dealloc;
- (id)description;
- (id)nonPinyinIndexSet;
- (struct _NSRange { unsigned int x1; unsigned int x2; })nonPinyinRangeAtIndex:(unsigned int)arg1;
- (unsigned int)indexOfFirstModification;
- (unsigned int)numberOfDeletions;
- (unsigned int)numberOfInsertions;
- (unsigned int)numberOfTranspositions;
- (unsigned int)numberOfReplacements;
- (unsigned int)numberOfNonPinyinRanges;
- (unsigned int)score;
- (BOOL)lastSyllableIsPartial;
- (unsigned int)syllableCount;

@end
