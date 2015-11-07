/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:36 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <UIKit/UIControl.h>

@class UIFont, NSArray;

@interface MFAtomScopeControl : UIControl {

	UIFont* _font;
	NSArray* _buttons;
	NSArray* _titles;
	int _selectedScopeIndex;

}

@property (nonatomic,retain) UIFont * font; 
@property (nonatomic,copy) NSArray * titles;                      //@synthesize titles=_titles - In the implementation block
@property (assign,nonatomic) int selectedScopeIndex;              //@synthesize selectedScopeIndex=_selectedScopeIndex - In the implementation block
+(id)defaultFont;
-(void)_invalidateButtons;
-(void)setSelectedScopeIndex:(int)arg1 notify:(char)arg2 ;
-(void)setSelectedScopeIndex:(int)arg1 ;
-(int)selectedScopeIndex;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setEnabled:(char)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(UIFont *)font;
-(void)setTitles:(NSArray *)arg1 ;
-(NSArray *)titles;
-(id)buttons;
-(void)_buttonTapped:(id)arg1 ;
@end
