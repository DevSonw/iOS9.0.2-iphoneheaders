/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:58 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/APSConnectionDelegate.h>

@protocol RadioPushNotificationControllerDelegate;
@class APSConnection, NSString;

@interface RadioPushNotificationController : NSObject <APSConnectionDelegate> {

	APSConnection* _connection;
	id<RadioPushNotificationControllerDelegate> _delegate;
	NSString* _environment;
	char _notificationsEnabled;
	char _pushEnabled;

}

@property (assign,nonatomic,__weak) id<RadioPushNotificationControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char notificationsEnabled;                                                //@synthesize notificationsEnabled=_notificationsEnabled - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<RadioPushNotificationControllerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<RadioPushNotificationControllerDelegate>)delegate;
-(void)connection:(id)arg1 didReceivePublicToken:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveMessageForTopic:(id)arg2 userInfo:(id)arg3 ;
-(id)_portNameForEnvironmentName:(id)arg1 ;
-(void)_loadURLBagWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setNotificationsEnabled:(char)arg1 ;
-(char)notificationsEnabled;
@end
