/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:37:06 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/PassKit.framework/passd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <passd/PDWebServiceConnectionTask.h>

@class NSString;

@interface PDRegistrationTask : PDWebServiceConnectionTask {

	NSString* _serialNumber;
	NSString* _authenticationToken;
	unsigned _requestedStatus;

}

@property (nonatomic,retain) NSString * serialNumber;                     //@synthesize serialNumber=_serialNumber - In the implementation block
@property (nonatomic,retain) NSString * authenticationToken;              //@synthesize authenticationToken=_authenticationToken - In the implementation block
@property (assign,nonatomic) unsigned requestedStatus;                    //@synthesize requestedStatus=_requestedStatus - In the implementation block
+(id)unregisterTaskWithWebService:(id)arg1 serialNumber:(id)arg2 authToken:(id)arg3 ;
+(id)registerTaskWithWebService:(id)arg1 serialNumber:(id)arg2 authToken:(id)arg3 ;
+(id)_taskWithWebService:(id)arg1 serialNumber:(id)arg2 authToken:(id)arg3 requestedStatus:(unsigned)arg4 ;
-(unsigned)requestedStatus;
-(char)coalescesWithTaskSubclass:(Class)arg1 ;
-(int)actionForInactiveTask:(id)arg1 ;
-(int)actionForActiveTask:(id)arg1 ;
-(void)handleResponse:(id)arg1 data:(id)arg2 ;
-(char)pertainsToPassTypeID:(id)arg1 serialNumber:(id)arg2 ;
-(id)endpointComponents;
-(void)setRequestedStatus:(unsigned)arg1 ;
-(char)_matchesRegistrationTask:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(char)isValid;
-(id)method;
-(void)handleError:(id)arg1 ;
-(void)setSerialNumber:(NSString *)arg1 ;
-(void)setAuthenticationToken:(NSString *)arg1 ;
-(NSString *)authenticationToken;
-(id)headerFields;
-(NSString *)serialNumber;
-(id)bodyDictionary;
@end
