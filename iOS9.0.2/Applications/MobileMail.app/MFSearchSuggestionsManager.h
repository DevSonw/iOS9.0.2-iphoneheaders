/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:37 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MFSearchSuggestionsManagerDelegate;
@class NSMutableDictionary, NSOperationQueue, NSLock, NSArray;

@interface MFSearchSuggestionsManager : NSObject {

	NSMutableDictionary* _activeSuggestionOperations;
	NSOperationQueue* _queue;
	NSLock* _lock;
	id<MFSearchSuggestionsManagerDelegate> _delegate;
	NSArray* _suggesters;

}

@property (assign,nonatomic) id<MFSearchSuggestionsManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSArray * suggesters;                                           //@synthesize suggesters=_suggesters - In the implementation block
-(void)setSuggesters:(NSArray *)arg1 ;
-(void)stopGeneratingSuggestionsWithIdentifier:(id)arg1 ;
-(id)startGeneratingSuggestionsForPhrase:(id)arg1 ;
-(void)_notifyDelegateOperation:(id)arg1 hasSuggestions:(id)arg2 categories:(id)arg3 forIdentifier:(id)arg4 ;
-(void)_notifyDelegateOperation:(id)arg1 finishedWithIdentifier:(id)arg2 ;
-(NSArray *)suggesters;
-(void)cancel;
-(void)setDelegate:(id<MFSearchSuggestionsManagerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<MFSearchSuggestionsManagerDelegate>)delegate;
-(id)initWithDelegate:(id)arg1 ;
@end

