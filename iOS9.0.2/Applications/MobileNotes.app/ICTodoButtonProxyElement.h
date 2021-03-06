/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:42 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileNotes/MobileNotes-Structs.h>
#import <UIKit/UIAccessibilityElement.h>

@class ICTodoButton, ICTextView;

@interface ICTodoButtonProxyElement : UIAccessibilityElement {

	ICTodoButton* _todoButton;
	ICTextView* _textView;
	NSRange _textRange;

}

@property (assign,nonatomic,__weak) ICTodoButton * todoButton;              //@synthesize todoButton=_todoButton - In the implementation block
@property (assign,nonatomic) NSRange textRange;                             //@synthesize textRange=_textRange - In the implementation block
@property (assign,nonatomic,__weak) ICTextView * textView;                  //@synthesize textView=_textView - In the implementation block
-(ICTodoButton *)todoButton;
-(id)initWithTodoButton:(id)arg1 inTextRange:(NSRange)arg2 textView:(id)arg3 ;
-(void)setTodoButton:(ICTodoButton *)arg1 ;
-(id)accessibilityLabel;
-(void)setTextView:(ICTextView *)arg1 ;
-(CGRect)accessibilityFrame;
-(id)accessibilityValue;
-(char)isAccessibilityElement;
-(char)accessibilityActivate;
-(ICTextView *)textView;
-(NSRange)textRange;
-(void)setTextRange:(NSRange)arg1 ;
@end

