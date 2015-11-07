/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:00 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UINavigationController.h>

@interface RUINavigationController : UINavigationController {

	unsigned _ruiSupportedInterfaceOrientations;
	/*^block*/id _menuDismissalHandler;

}

@property (nonatomic,copy) id menuDismissalHandler;              //@synthesize menuDismissalHandler=_menuDismissalHandler - In the implementation block
-(char)canBeShownFromSuspendedState;
-(unsigned)supportedInterfaceOrientations;
-(void)setSupportedInterfaceOrientations:(unsigned)arg1 ;
-(void)viewDidLoad;
-(void)setMenuDismissalHandler:(id)arg1 ;
-(void)_menuButtonPressed:(id)arg1 ;
-(id)menuDismissalHandler;
@end

