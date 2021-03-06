/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:11 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iAdOptOut.app/iAdOptOut
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iAdOptOut/iAdOptOut-Structs.h>
#import <UIKit/UIResponder.h>
#import <iAdOptOut/MFMailComposeViewControllerDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>
#import <libobjc.A.dylib/ADAdSheetProxyDelegate.h>
#import <UIKit/UIApplicationDelegate.h>

@class UIWindow, NSString;

@interface iAdOptOutAppDelegate : UIResponder <MFMailComposeViewControllerDelegate, UIAlertViewDelegate, ADAdSheetProxyDelegate, UIApplicationDelegate> {

	UIWindow* _window;

}

@property (nonatomic,retain) UIWindow * window;                     //@synthesize window=_window - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_showiAdIDs;
-(UIWindow *)window;
-(char)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4 ;
-(char)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2 ;
-(void)setWindow:(UIWindow *)arg1 ;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2 ;
-(void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3 ;
-(char)shouldLaunchAdSheet;
-(id)additionalAdSheetLaunchOptions;
@end

