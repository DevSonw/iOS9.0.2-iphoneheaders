/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:07:59 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class NSArray;

@interface SpeechController : PSListController {

	char _speechSettingsItemsHidden;
	NSArray* _speechSettingsItems;

}

@property (nonatomic,retain) NSArray * speechSettingsItems;                                                   //@synthesize speechSettingsItems=_speechSettingsItems - In the implementation block
@property (assign,getter=areSpeechSettingsItemsHidden,nonatomic) char speechSettingsItemsHidden;              //@synthesize speechSettingsItemsHidden=_speechSettingsItemsHidden - In the implementation block
-(id)quickSpeakEnabled:(id)arg1 ;
-(id)speakCorrectionsEnabled:(id)arg1 ;
-(void)setSpeakCorrectionsEnabled:(id)arg1 specifier:(id)arg2 ;
-(char)areSpeechSettingsItemsHidden;
-(void)setQuickSpeakEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)highlightWord:(id)arg1 ;
-(void)setHighlightWord:(id)arg1 specifier:(id)arg2 ;
-(id)quickSpeakSpeakingRate:(id)arg1 ;
-(void)setQuickSpeakSpeakingRate:(id)arg1 specifier:(id)arg2 ;
-(id)speakThisEnabled:(id)arg1 ;
-(void)setSpeakThisEnabled:(id)arg1 specifier:(id)arg2 ;
-(NSArray *)speechSettingsItems;
-(void)setSpeechSettingsItems:(NSArray *)arg1 ;
-(void)setSpeechSettingsItemsHidden:(char)arg1 ;
-(id)specifiers;
-(void)dealloc;
-(void)loadView;
-(void)viewWillAppear:(char)arg1 ;
-(void)updateLayout;
-(void)willBecomeActive;
@end

