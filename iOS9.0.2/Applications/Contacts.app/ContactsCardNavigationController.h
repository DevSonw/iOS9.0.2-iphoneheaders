/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:11:59 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Contacts.app/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UINavigationController.h>

@interface ContactsCardNavigationController : UINavigationController {

	char _transitioning;

}

@property (assign,nonatomic) char transitioning;              //@synthesize transitioning=_transitioning - In the implementation block
-(void)clearViewControllersIfNeeded;
-(char)transitioning;
-(void)setTransitioning:(char)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)viewDidLoad;
@end
