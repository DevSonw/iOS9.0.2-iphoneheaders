/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:05 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSData, NSString;

@interface HMDRelayCertificateRequest : NSObject {

	NSData* _publicKey;
	NSString* _challengeIdentifier;
	NSData* _challengeResponse;
	NSData* _challengeCertificate;

}

@property (nonatomic,copy,readonly) NSData * publicKey;                          //@synthesize publicKey=_publicKey - In the implementation block
@property (nonatomic,copy,readonly) NSString * challengeIdentifier;              //@synthesize challengeIdentifier=_challengeIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSData * challengeResponse;                  //@synthesize challengeResponse=_challengeResponse - In the implementation block
@property (nonatomic,copy,readonly) NSData * challengeCertificate;               //@synthesize challengeCertificate=_challengeCertificate - In the implementation block
-(id)init;
-(NSData *)publicKey;
-(NSString *)challengeIdentifier;
-(id)initWithPublicKey:(id)arg1 challengeIdentifier:(id)arg2 challengeResponse:(id)arg3 challengeCertificate:(id)arg4 ;
-(NSData *)challengeCertificate;
-(NSData *)challengeResponse;
-(id)serializeWithError:(id*)arg1 ;
@end
