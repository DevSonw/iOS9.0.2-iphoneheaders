/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:06 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/FindMyFriends.app/FindMyFriends
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FindMyFriends/FindMyFriends-Structs.h>
#import <UIKit/UIView.h>

@interface BackdropView : UIView {

	char _autoresizeToFitSuperview;
	int _style;
	UIEdgeInsets _edgeInsets;

}

@property (assign,nonatomic) UIEdgeInsets edgeInsets;                    //@synthesize edgeInsets=_edgeInsets - In the implementation block
@property (assign,nonatomic) int style;                                  //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) char autoresizeToFitSuperview;              //@synthesize autoresizeToFitSuperview=_autoresizeToFitSuperview - In the implementation block
-(id)initWithFrame:(CGRect)arg1 style:(int)arg2 autoresizeToFitSuperview:(char)arg3 ;
-(void)setAutoresizeToFitSuperview:(char)arg1 ;
-(char)autoresizeToFitSuperview;
-(void)_recalculateFrame;
-(UIEdgeInsets)edgeInsets;
-(int)style;
-(void)awakeFromNib;
-(void)didMoveToSuperview;
-(void)setStyle:(int)arg1 ;
-(void)setEdgeInsets:(UIEdgeInsets)arg1 ;
@end
