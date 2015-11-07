/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:06 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/FindMyFriends.app/FindMyFriends
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UIButton, NSString, NSLayoutConstraint;

@interface FriendInfoNotifyTableViewCell : UITableViewCell {

	UIButton* _notifyMeButton;
	NSString* _notifyOthersButtonText;
	UIButton* _notifyOthersButton;
	NSLayoutConstraint* _topRuleHeightConstraint;
	NSLayoutConstraint* _bottomRuleHeightConstraint;

}

@property (nonatomic,retain) UIButton * notifyMeButton;                                    //@synthesize notifyMeButton=_notifyMeButton - In the implementation block
@property (nonatomic,retain) NSString * notifyOthersButtonText;                            //@synthesize notifyOthersButtonText=_notifyOthersButtonText - In the implementation block
@property (nonatomic,retain) UIButton * notifyOthersButton;                                //@synthesize notifyOthersButton=_notifyOthersButton - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * topRuleHeightConstraint;                 //@synthesize topRuleHeightConstraint=_topRuleHeightConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * bottomRuleHeightConstraint;              //@synthesize bottomRuleHeightConstraint=_bottomRuleHeightConstraint - In the implementation block
-(NSString *)notifyOthersButtonText;
-(void)setNotifyOthersButtonText:(NSString *)arg1 ;
-(UIButton *)notifyMeButton;
-(UIButton *)notifyOthersButton;
-(void)setNotifyOthersButton:(UIButton *)arg1 ;
-(NSLayoutConstraint *)topRuleHeightConstraint;
-(NSLayoutConstraint *)bottomRuleHeightConstraint;
-(void)setTopRuleHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setBottomRuleHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setNotifyMeButton:(UIButton *)arg1 ;
-(void)awakeFromNib;
@end
