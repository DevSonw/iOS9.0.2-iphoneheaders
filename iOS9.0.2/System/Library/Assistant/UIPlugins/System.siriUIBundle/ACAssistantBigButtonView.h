/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:04:50 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Assistant/UIPlugins/System.siriUIBundle/System
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <System/System-Structs.h>
#import <UIKit/UIView.h>

@class SiriUIKeyline, UIButton;

@interface ACAssistantBigButtonView : UIView {

	SiriUIKeyline* _topKeyline;
	SiriUIKeyline* _bottomKeyline;
	UIButton* _button;

}

@property (nonatomic,readonly) UIButton * button;              //@synthesize button=_button - In the implementation block
-(UIButton *)button;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end

