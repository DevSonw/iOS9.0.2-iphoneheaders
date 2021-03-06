/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:03 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Feedback Assistant iOS.app/Feedback Assistant iOS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface ACMAppleConnect : NSObject {

	id _private;

}

@property (assign) id delegate; 
@property (readonly) NSString * version; 
@property (assign,nonatomic) int logLevel; 
+(id)sharedInstance;
-(int)logLevel;
-(void)setLogLevel:(int)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)delegate;
-(NSString *)version;
-(void)cancelRequests;
-(void)authenticateWithRequest:(id)arg1 password:(id)arg2 ;
-(void)handleMemoryWarningNotification:(id)arg1 ;
-(id)private;
-(void)authenticate:(id)arg1 ;
-(id)hideAppleConnectSignInDialog;
-(void)setIsUsingLocalTestEndPoint:(char)arg1 ;
-(char)isUsingLocalTestEndPoint;
-(void)verifyServiceTicket:(id)arg1 ;
-(id)realms;
@end

