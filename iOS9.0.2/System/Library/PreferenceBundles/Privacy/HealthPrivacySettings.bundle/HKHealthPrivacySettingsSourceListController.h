/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:08:22 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/Privacy/HealthPrivacySettings.bundle/HealthPrivacySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class NSArray;

@interface HKHealthPrivacySettingsSourceListController : PSListController {

	NSArray* _authorizationSources;

}

@property (nonatomic,retain) NSArray * authorizationSources;              //@synthesize authorizationSources=_authorizationSources - In the implementation block
-(void)_loadAuthorizationSources;
-(NSArray *)authorizationSources;
-(id)_specifierForSource:(id)arg1 ;
-(void)setAuthorizationSources:(NSArray *)arg1 ;
-(id)specifiers;
@end

