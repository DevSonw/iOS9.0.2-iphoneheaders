/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:42 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UILabel, UIImageView;

@interface ICStyleSelectorCell : UITableViewCell {

	UILabel* _styleLabel;
	UIImageView* _styleActiveImage;

}

@property (assign,nonatomic,__weak) UILabel * styleLabel;                        //@synthesize styleLabel=_styleLabel - In the implementation block
@property (assign,nonatomic,__weak) UIImageView * styleActiveImage;              //@synthesize styleActiveImage=_styleActiveImage - In the implementation block
-(UIImageView *)styleActiveImage;
-(UILabel *)styleLabel;
-(void)setStyleLabel:(UILabel *)arg1 ;
-(void)setStyleActiveImage:(UIImageView *)arg1 ;
-(unsigned long long)accessibilityTraits;
@end

