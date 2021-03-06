/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:41 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <UIKit/UIImageView.h>

@class UIView, UIColor;

@interface MusicHairlineView : UIImageView {

	UIView* _lineView;
	char _rightInsetIgnoresLayoutMargin;
	UIColor* _lineColor;
	UIOffset _lineOffset;

}

@property (nonatomic,retain) UIColor * lineColor;                             //@synthesize lineColor=_lineColor - In the implementation block
@property (assign,nonatomic) UIOffset lineOffset;                             //@synthesize lineOffset=_lineOffset - In the implementation block
@property (assign,nonatomic) char rightInsetIgnoresLayoutMargin;              //@synthesize rightInsetIgnoresLayoutMargin=_rightInsetIgnoresLayoutMargin - In the implementation block
-(void)setLineColor:(UIColor *)arg1 ;
-(UIColor *)lineColor;
-(void)layoutSubviews;
-(UIEdgeInsets)layoutMargins;
-(void)layoutMarginsDidChange;
-(void)setLineOffset:(UIOffset)arg1 ;
-(void)setRightInsetIgnoresLayoutMargin:(char)arg1 ;
-(UIOffset)lineOffset;
-(char)rightInsetIgnoresLayoutMargin;
@end

