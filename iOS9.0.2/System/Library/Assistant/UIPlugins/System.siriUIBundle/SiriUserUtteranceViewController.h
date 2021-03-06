/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:04:50 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Assistant/UIPlugins/System.siriUIBundle/System
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <System/System-Structs.h>
#import <SiriUI/SiriUIAceObjectViewController.h>
#import <System/SiriUserUtteranceViewDelegate.h>

@protocol OS_dispatch_source;
@class SiriUserUtteranceView, NSString, NSObject, AFUserUtterance;

@interface SiriUserUtteranceViewController : SiriUIAceObjectViewController <SiriUserUtteranceViewDelegate> {

	SiriUserUtteranceView* _utteranceView;
	NSString* _preCorrectionText;
	CGSize _currentTextSize;
	char _textChanged;
	char _correctable;
	NSObject*<OS_dispatch_source> _streamingTextTimer;
	AFUserUtterance* _userUtterance;

}

@property (setter=_setUserUtterance:,getter=_userUtterance,nonatomic,retain) AFUserUtterance * userUtterance;              //@synthesize userUtterance=_userUtterance - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_userUtterance;
-(void)_setStreamingText:(id)arg1 ;
-(void)_updateViewWithCurrentUtterance;
-(void)_checkUpdatedSizingForUtteranceView:(id)arg1 ;
-(id)_correctionIdentifier;
-(void)_resetSnippetEditingState;
-(void)utteranceViewTextDidFinishCorrecting:(id)arg1 ;
-(char)utteranceViewTextShouldPreventCorrection:(id)arg1 ;
-(void)utteranceViewTextWillBeginCorrecting:(id)arg1 ;
-(void)utteranceViewTextDidChange:(id)arg1 ;
-(void)_clearStreamingTextTimer;
-(void)_setUserUtterance:(id)arg1 ;
-(void)_handleOtherRecognitionNotification:(id)arg1 ;
-(float)desiredHeightForWidth:(float)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(void)loadView;
-(id)_text;
-(void)endEditingAndCorrect:(char)arg1 ;
-(void)setAceObject:(id)arg1 ;
-(void)_setVirgin:(char)arg1 ;
-(int)_pinAnimationType;
-(int)_insertionAnimation;
-(int)_replacementAnimation;
-(float)_insertionAnimatedZPosition;
@end

