/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:44 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iAdDeveloper.framework/iAdDeveloper
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iAdDeveloper/iAdDeveloper-Structs.h>
#import <libobjc.A.dylib/NSStreamDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class HTSHTTPServer, NSObject, NSMutableArray, NSString, NSTimer;

@interface HTSHTTPServerConnection : NSObject <NSStreamDelegate> {

	HTSHTTPServer* _server;
	NSObject*<OS_dispatch_queue> _connectionQueue;
	NSObject*<OS_dispatch_source> _readSource;
	char _readActive;
	NSObject*<OS_dispatch_source> _writeSource;
	char _writeActive;
	int _socket;
	int _socketRefCount;
	CFHTTPMessageRef _incomingMessage;
	NSMutableArray* _incomingQueue;
	NSMutableArray* _outputQueue;
	char _outputStalled;
	char _closeOnEmptyQueue;
	NSString* _identifier;
	NSTimer* _idleTimer;
	double _lastActivity;

}

@property (nonatomic,readonly) NSString * identifier;               //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) double lastActivity;                   //@synthesize lastActivity=_lastActivity - In the implementation block
@property (nonatomic,retain) NSTimer * idleTimer;                   //@synthesize idleTimer=_idleTimer - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)identifier;
-(id)initWithServer:(id)arg1 socket:(int)arg2 ;
-(void)sendResponse:(id)arg1 withLatency:(double)arg2 closeAfterSending:(char)arg3 ;
-(void)_closeInputStream;
-(void)_closeOutputStream;
-(void)setLastActivity:(double)arg1 ;
-(void)_processStreamInput;
-(void)_processStreamOutput;
-(void)_processIncomingBytes:(const char*)arg1 length:(long)arg2 ;
-(void)_shutdownIdleConnection:(id)arg1 ;
-(void)printData:(id)arg1 withMessage:(id)arg2 ;
-(double)lastActivity;
-(NSTimer *)idleTimer;
-(void)setIdleTimer:(NSTimer *)arg1 ;
@end

