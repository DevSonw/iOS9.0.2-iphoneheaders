/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:48 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface SURemoteNotificationController : NSObject

@property (nonatomic,readonly) unsigned enabledNotificationTypes; 
+(id)sharedInstance;
-(id)init;
-(unsigned)enabledNotificationTypes;
-(void)handleRegistrationFailureWithError:(id)arg1 ;
-(void)handleRegistrationSuccessWithToken:(id)arg1 ;
-(void)handleNotificationDictionary:(id)arg1 ;
@end
