/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:51 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AppleIDAuthSupport.framework/AppleIDAuthSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppleIDAuthSupport/AppleIDAuthSupport-Structs.h>
#import <libobjc.A.dylib/NSURLSessionDelegate.h>
#import <libobjc.A.dylib/NSURLSessionDataDelegate.h>

@protocol OS_dispatch_semaphore;
@class NSMutableURLRequest, NSMutableData, NSObject, NSURLSession, NSURLSessionDataTask, NSError, NSString;

@interface AIASRequest : NSObject <NSURLSessionDelegate, NSURLSessionDataDelegate> {

	BOOL _done;
	BOOL _success;
	NSMutableURLRequest* _URLRequest;
	NSMutableData* _data;
	AppleIDAuthSupportDataRef _context;
	CFStringRef _serverOID;
	NSObject*<OS_dispatch_semaphore> _sema;
	NSURLSession* _session;
	NSURLSessionDataTask* _task;
	NSError* _error;

}

@property (retain) NSMutableURLRequest * URLRequest;                   //@synthesize URLRequest=_URLRequest - In the implementation block
@property (retain) NSMutableData * data;                               //@synthesize data=_data - In the implementation block
@property (assign) BOOL done;                                          //@synthesize done=_done - In the implementation block
@property (assign) BOOL success;                                       //@synthesize success=_success - In the implementation block
@property (assign) AppleIDAuthSupportDataRef context;                  //@synthesize context=_context - In the implementation block
@property (assign) CFStringRef serverOID;                              //@synthesize serverOID=_serverOID - In the implementation block
@property (retain) NSObject*<OS_dispatch_semaphore> sema;              //@synthesize sema=_sema - In the implementation block
@property (retain) NSURLSession * session;                             //@synthesize session=_session - In the implementation block
@property (retain) NSURLSessionDataTask * task;                        //@synthesize task=_task - In the implementation block
@property (retain) NSError * error;                                    //@synthesize error=_error - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(NSURLSession *)session;
-(NSError *)error;
-(NSMutableData *)data;
-(void)setData:(NSMutableData *)arg1 ;
-(AppleIDAuthSupportDataRef)context;
-(BOOL)done;
-(void)setContext:(AppleIDAuthSupportDataRef)arg1 ;
-(NSURLSessionDataTask *)task;
-(void)setTask:(NSURLSessionDataTask *)arg1 ;
-(void)setSema:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(NSObject*<OS_dispatch_semaphore>)sema;
-(CFStringRef)serverOID;
-(id)initWithURL:(id)arg1 data:(CFDictionaryRef)arg2 clientInfo:(id)arg3 proxiedClientInfo:(id)arg4 companionClientInfo:(id)arg5 ;
-(void)setServerOID:(CFStringRef)arg1 ;
-(void)setSession:(NSURLSession *)arg1 ;
-(void)setDone:(BOOL)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(BOOL)success;
-(void)setSuccess:(BOOL)arg1 ;
-(NSMutableURLRequest *)URLRequest;
-(void)setURLRequest:(NSMutableURLRequest *)arg1 ;
@end
