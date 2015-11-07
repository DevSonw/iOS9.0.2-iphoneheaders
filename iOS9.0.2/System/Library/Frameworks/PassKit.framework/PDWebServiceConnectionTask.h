/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:37:06 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/PassKit.framework/passd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <passd/PDNetworkConnectionTask.h>

@class PDWebService, NSString;

@interface PDWebServiceConnectionTask : PDNetworkConnectionTask {

	PDWebService* _webService;

}

@property (nonatomic,retain) PDWebService * webService;              //@synthesize webService=_webService - In the implementation block
@property (nonatomic,readonly) NSString * passTypeID; 
+(id)taskWithWebService:(id)arg1 ;
+(char)supportsSecureCoding;
-(id)endpointComponents;
-(id)queryFields;
-(void)reportAuthenticationFailure;
-(void)reportUnexpectedResponseCode:(int)arg1 ;
-(void)reportNSURLConnectionError:(id)arg1 ;
-(void)reportMalformedResponseError:(id)arg1 ;
-(PDWebService *)webService;
-(void)setWebService:(PDWebService *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)request;
-(id)method;
-(NSString *)passTypeID;
-(id)headerFields;
-(id)bodyDictionary;
@end
