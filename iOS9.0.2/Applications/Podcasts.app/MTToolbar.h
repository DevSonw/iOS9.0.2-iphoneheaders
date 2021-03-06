/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:50 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIToolbar.h>

@class UIView, UIColor;

@interface MTToolbar : UIToolbar {

	UIView* _separatorView;
	UIColor* _separatorColor;

}

@property (assign,getter=isSeparatorHidden,nonatomic) char separatorHidden; 
@property (nonatomic,retain) UIColor * separatorColor;                                   //@synthesize separatorColor=_separatorColor - In the implementation block
-(void)setSeparatorHidden:(char)arg1 ;
-(char)isSeparatorHidden;
-(id)init;
-(void)layoutSubviews;
-(UIColor *)separatorColor;
-(void)setSeparatorColor:(UIColor *)arg1 ;
-(id)_separatorColor;
-(void)setupView;
@end

