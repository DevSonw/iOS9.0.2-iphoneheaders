/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:04 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreHAP/HAPRelayActivationClient.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface HMDRelayActivationClient : HAPRelayActivationClient {

	NSObject*<OS_dispatch_queue> _workQueue;
	NSString* _challengeIdentifier;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;              //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) NSString * challengeIdentifier;                        //@synthesize challengeIdentifier=_challengeIdentifier - In the implementation block
-(id)init;
-(void)close;
-(void)open;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)_closeWithError:(id)arg1 ;
-(void)setChallengeIdentifier:(NSString *)arg1 ;
-(NSString *)challengeIdentifier;
-(void)requestChallenge;
-(void)requestCertificateWithPublicKey:(id)arg1 challengeCertificate:(id)arg2 challengeResponse:(id)arg3 ;
@end

