/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:02 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/FacebookAccountMigrationDialog.app/FacebookAccountMigrationDialog
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FacebookAccountMigrationDialog/FacebookAccountMigrationDialog-Structs.h>
#import <UIKit/UIResponder.h>
#import <UIKit/UIApplicationDelegate.h>
#import <FacebookAccountMigrationDialog/SLFacebookMigrationDialogProtocol.h>
#import <FacebookAccountMigrationDialog/SLFacebookLoginInfoViewControllerDelegate.h>
#import <FacebookAccountMigrationDialog/SLFacebookMigrationPasswordViewControllerDelegate.h>

@protocol SLFacebookMigrationDialogListener;
@class UIWindow, NSXPCConnection, UINavigationController, SLFacebookMigrationInfoViewController, SLFacebookMigrationPasswordViewController, NSString;

@interface SLFacebookMigrationAppDelegate : UIResponder <UIApplicationDelegate, SLFacebookMigrationDialogProtocol, SLFacebookLoginInfoViewControllerDelegate, SLFacebookMigrationPasswordViewControllerDelegate> {

	id<SLFacebookMigrationDialogListener> _listener;
	NSXPCConnection* _listenerConnection;
	UINavigationController* _navViewController;
	SLFacebookMigrationInfoViewController* _infoViewController;
	SLFacebookMigrationPasswordViewController* _passwordViewController;
	NSString* _username;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIWindow * window; 
-(void)_connectToListener;
-(void)_remoteSheetDidEnd;
-(void)_disconnectFromListener;
-(void)authenticationDidSucceed;
-(void)authenticationDidFailWithErrorMessage:(id)arg1 ;
-(void)userDidCancelPasswordViewController:(id)arg1 ;
-(void)userWillSignInToPasswordViewController:(id)arg1 withPassword:(id)arg2 ;
-(void)userDidSignInToPasswordViewController:(id)arg1 ;
-(void)loginInfoViewController:(id)arg1 userDidProvideConsent:(char)arg2 ;
-(char)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2 ;
-(void)setUsername:(id)arg1 ;
@end
