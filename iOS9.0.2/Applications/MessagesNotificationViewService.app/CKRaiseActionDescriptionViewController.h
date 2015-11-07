/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:34 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MessagesNotificationViewService.app/MessagesNotificationViewService
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NotificationsUI/NCContentViewController.h>

@class UILabel, UIImageView;

@interface CKRaiseActionDescriptionViewController : NCContentViewController {

	char _raiseToTalk;
	UILabel* _label;
	UIImageView* _imageView;

}

@property (nonatomic,retain) UILabel * label;                                    //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                            //@synthesize imageView=_imageView - In the implementation block
@property (assign,getter=isRaiseToTalk,nonatomic) char raiseToTalk;              //@synthesize raiseToTalk=_raiseToTalk - In the implementation block
+(char)_isSecureForRemoteViewService;
-(void)_switchToRaiseToListen:(id)arg1 ;
-(void)_switchToPlaying:(id)arg1 ;
-(void)_switchToRaiseToTalk:(id)arg1 ;
-(void)_switchToRecording:(id)arg1 ;
-(void)_switchToRecorded:(id)arg1 ;
-(void)_switchToSent:(id)arg1 ;
-(char)isRaiseToTalk;
-(void)setRaiseToTalk:(char)arg1 ;
-(void)dealloc;
-(id)init;
-(char)_disableAutomaticKeyboardBehavior;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(UIImageView *)imageView;
-(UILabel *)label;
-(void)setLabel:(UILabel *)arg1 ;
-(void)setImageView:(UIImageView *)arg1 ;
@end
