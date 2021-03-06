/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:39 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileMail/MFServiceConnectionState.h>

@protocol OS_xpc_object, OS_dispatch_queue;
@class NSObject, NSLock, MailXPCServices;

@interface MFXPCConnection : NSObject <MFServiceConnectionState> {

	NSObject*<OS_xpc_object> _connection;
	NSObject*<OS_dispatch_queue> _connectionQueue;
	NSObject*<OS_dispatch_queue> _messageQueue;
	int _cancelFlag;
	NSLock* _errorHandlerLock;
	/*^block*/id _errorHandler;
	MailXPCServices* _serviceManager;

}

@property (assign,nonatomic) MailXPCServices * serviceManager;              //@synthesize serviceManager=_serviceManager - In the implementation block
@property (copy) id errorHandler;                                           //@synthesize errorHandler=_errorHandler - In the implementation block
-(char)shouldCancel;
-(void)dealloc;
-(void)stop;
-(void)start;
-(void)setServiceManager:(MailXPCServices *)arg1 ;
-(id)errorHandler;
-(void)setErrorHandler:(id)arg1 ;
-(void)handleError:(id)arg1 ;
-(id)initWithConnection:(id)arg1 ;
-(MailXPCServices *)serviceManager;
@end

