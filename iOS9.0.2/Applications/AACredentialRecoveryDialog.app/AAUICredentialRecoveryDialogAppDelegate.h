/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:11:56 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/AACredentialRecoveryDialog.app/AACredentialRecoveryDialog
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AACredentialRecoveryDialog/AACredentialRecoveryDialog-Structs.h>
#import <UIKit/UIResponder.h>
#import <UIKit/UIApplicationDelegate.h>
#import <AACredentialRecoveryDialog/AAUICredentialRecoveryPresentationDelegate.h>

@protocol AACredentialRecoveryDialogDelegate;
@class UIWindow, AAUICredentialRecoveryController, UIViewController, NSXPCConnection, NSString;

@interface AAUICredentialRecoveryDialogAppDelegate : UIResponder <UIApplicationDelegate, AAUICredentialRecoveryPresentationDelegate> {

	AAUICredentialRecoveryController* _credentialRecoveryController;
	int _orientation;
	UIViewController* _rootViewController;
	NSXPCConnection* _listenerConnection;
	id<AACredentialRecoveryDialogDelegate> _authPluginProxy;
	UIWindow* _window;

}

@property (nonatomic,retain) UIWindow * window;                     //@synthesize window=_window - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)hackCanShowAlertImplementationForApplication:(id)arg1 ;
-(void)_connectToListener;
-(void)_disconnectFromListener;
-(void)_remoteSheetDidEnd;
-(void)_endRemoteSheetWithSuccess:(char)arg1 error:(id)arg2 ;
-(UIWindow *)window;
-(char)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2 ;
-(void)setWindow:(UIWindow *)arg1 ;
-(void)credentialRecoveryController:(id)arg1 didFailWithError:(id)arg2 ;
-(void)credentialRecoveryController:(id)arg1 finishedWithSuccess:(char)arg2 ;
-(void)credentialRecoveryController:(id)arg1 needsPresentationOfViewController:(id)arg2 ;
@end

