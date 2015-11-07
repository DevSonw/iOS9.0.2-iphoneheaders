/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:42 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileNotes/MobileNotes-Structs.h>
#import <QuartzCore/CALayer.h>

@class UITextView;

@interface ICTextViewSplitLayer : CALayer {

	UITextView* _textView;

}

@property (assign,nonatomic,__weak) UITextView * textView;              //@synthesize textView=_textView - In the implementation block
-(void)setTextView:(UITextView *)arg1 ;
-(UITextView *)textView;
-(void)drawInContext:(CGContextRef)arg1 ;
@end
