/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:41 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/MobileSafariSettings.bundle/MobileSafariSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileSafariSettings/MobileSafariSettings-Structs.h>
#import <Preferences/PSListController.h>

@interface SafariSettingsListController : PSListController
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)postDistributedNotificationNamed:(CFStringRef)arg1 ;
-(id)safariDefaultsValueForKey:(id)arg1 ;
-(void)setSafariDefaultsValue:(id)arg1 forKey:(id)arg2 ;
-(void)synchronizeSafariDefaults;
-(void)_promptForPasscodeIfNeededWithTitle:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(char)prepareHandlingURLForSpecifierID:(id)arg1 resourceDictionary:(id)arg2 animatePush:(char*)arg3 ;
@end

