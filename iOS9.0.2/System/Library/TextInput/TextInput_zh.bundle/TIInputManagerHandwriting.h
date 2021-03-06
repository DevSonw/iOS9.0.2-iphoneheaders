/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:50 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/TextInput/TextInput_zh.bundle/TextInput_zh
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TextInput_zh/TextInput_zh-Structs.h>
#import <libTextInputCore.dylib/TIKeyboardInputManagerZephyr.h>

@class TIMecabraWrapper, TIHandwritingStrokes, NSArray, CIMCandidateData, NSMutableDictionary, NSMutableArray, CHRecognizer;

@interface TIInputManagerHandwriting : TIKeyboardInputManagerZephyr {

	int _completionPrefixLength;
	char _showingCompletionCandidates;
	char _isInCompletionMode;
	TIMecabraWrapper* _mecabraWrapper;
	WordTrie* _compositionTrie;
	/*^block*/id _addressBookLoader;
	id _userDictionaryObserver;
	char _shouldLearnAcceptedCandidate;
	char _showingFacemarks;
	TIHandwritingStrokes* _userDrawing;
	NSArray* _facemarkCandidates;
	CIMCandidateData* _candidateData;
	NSArray* _candidates;
	NSMutableDictionary* _candidateRefsDictionary;
	NSMutableArray* _committedCandidates;
	CHRecognizer* _recognizer;

}

@property (assign,nonatomic) char isInCompletionMode;                                    //@synthesize isInCompletionMode=_isInCompletionMode - In the implementation block
@property (assign,nonatomic) char shouldLearnAcceptedCandidate;                          //@synthesize shouldLearnAcceptedCandidate=_shouldLearnAcceptedCandidate - In the implementation block
@property (nonatomic,retain) TIHandwritingStrokes * userDrawing;                         //@synthesize userDrawing=_userDrawing - In the implementation block
@property (assign,nonatomic) char showingFacemarks;                                      //@synthesize showingFacemarks=_showingFacemarks - In the implementation block
@property (nonatomic,readonly) NSArray * facemarkCandidates;                             //@synthesize facemarkCandidates=_facemarkCandidates - In the implementation block
@property (nonatomic,readonly) CIMCandidateData * candidateData;                         //@synthesize candidateData=_candidateData - In the implementation block
@property (nonatomic,retain) NSArray * candidates;                                       //@synthesize candidates=_candidates - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * candidateRefsDictionary;              //@synthesize candidateRefsDictionary=_candidateRefsDictionary - In the implementation block
@property (nonatomic,retain) NSMutableArray * committedCandidates;                       //@synthesize committedCandidates=_committedCandidates - In the implementation block
@property (nonatomic,readonly) int recognitionType; 
@property (nonatomic,retain) CHRecognizer * recognizer;                                  //@synthesize recognizer=_recognizer - In the implementation block
-(void)dealloc;
-(void)suspend;
-(NSArray *)candidates;
-(id)keyboardBehaviors;
-(char)usesCandidateSelection;
-(id)candidateResultSet;
-(unsigned)initialSelectedIndex;
-(void)clearInput;
-(char)usesAutoDeleteWord;
-(char)shouldExtendPriorWord;
-(char)suppliesCompletions;
-(id)replacementForDoubleSpace;
-(id)defaultCandidate;
-(void)setCandidates:(NSArray *)arg1 ;
-(char)suppressPlaceholderCandidate;
-(char)canHandleKeyHitTest;
-(char)needsKeyHitTestResults;
-(id)addInputObject:(id)arg1 ;
-(CHRecognizer *)recognizer;
-(void)setRecognizer:(CHRecognizer *)arg1 ;
-(void)updateAddressBook;
-(int)recognitionType;
-(void)mainThreadUpdateCandidates:(id)arg1 ;
-(void)loadDictionary:(WordTrie*)arg1 withFile:(id)arg2 ;
-(TIHandwritingStrokes *)userDrawing;
-(char)showingFacemarks;
-(char)updateCompletionCandidatesIfAppropriate;
-(char)updateCandidates;
-(char)isDummyCandidate:(id)arg1 ;
-(void)setShowingFacemarks:(char)arg1 ;
-(NSArray *)facemarkCandidates;
-(id)markedTextForDefaultCandidate;
-(void)cancelRecognition;
-(void)setUserDrawing:(TIHandwritingStrokes *)arg1 ;
-(void)resetCompletionStates;
-(id)historyForRecognition;
-(id)processCandidates:(id)arg1 ;
-(char)isInCompletionMode;
-(void)setIsInCompletionMode:(char)arg1 ;
-(char)shouldLookForCompletionCandidates;
-(void)clearCandidateRefsDictionary;
-(unsigned long)predictionOptions:(char)arg1 ;
-(char)shouldEnableHalfWidthPunctuationForCurrentInputContext;
-(int)mecabraLanguage;
-(void)loadCompositionDictionary:(id)arg1 ;
-(CIMCandidateData *)candidateData;
-(void)setCandidateRefsDictionary:(NSMutableDictionary *)arg1 ;
-(void)setCommittedCandidates:(NSMutableArray *)arg1 ;
-(id)initWithInputMode:(id)arg1 ;
-(NSMutableArray *)committedCandidates;
-(void)updateUserWordEntries;
-(char)shouldLearnAcceptedCandidate;
-(void)setShouldLearnAcceptedCandidate:(char)arg1 ;
-(MecabraRef)mecabra;
-(void)setLearnsCorrection:(char)arg1 ;
-(void)loadDictionaries;
-(void)setCollatorLocale;
-(id)nonstopPunctuationCharacters;
-(TIInputManagerZephyr*)initImplementation;
-(void)addInput:(id)arg1 withContext:(id)arg2 ;
-(void)deleteFromInputWithContext:(id)arg1 ;
-(id)keyboardConfigurationLayoutTag;
-(void)inputLocationChanged;
-(id)didAcceptCandidate:(id)arg1 ;
-(char)shouldCommitInputString;
-(void)syncMarkedTextForKeyboardState:(id)arg1 afterContextChange:(char)arg2 ;
-(NSMutableDictionary *)candidateRefsDictionary;
@end

