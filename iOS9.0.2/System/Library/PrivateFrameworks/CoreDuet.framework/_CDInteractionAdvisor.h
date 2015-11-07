/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:23 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/_CDInteractionAdvising.h>

@class NSXPCConnection, NSError;

@interface _CDInteractionAdvisor : NSObject <_CDInteractionAdvising> {

	NSXPCConnection* _connection;
	NSError* _error;

}

@property (nonatomic,retain) NSError * error;              //@synthesize error=_error - In the implementation block
+(id)interactionAdvisor;
-(id)adviseInteractionsUsingSettings:(id)arg1 ;
-(NSError *)error;
-(id)initWithServiceName:(id)arg1 ;
-(id)rankCandidateContacts:(id)arg1 usingSettings:(id)arg2 ;
-(id)adviseInteractionsForDate:(id)arg1 usingSettings:(id)arg2 ;
-(id)adviseInteractionsForLocation:(id)arg1 usingSettings:(id)arg2 ;
-(id)adviseSocialInteractionsForDate:(id)arg1 andSeedContacts:(id)arg2 usingSettings:(id)arg3 ;
-(id)adviseInteractionsForKeywordsInString:(id)arg1 usingSettings:(id)arg2 ;
-(void)tuneSocialAdvisorUsingSettings:(id)arg1 heartBeatHandler:(id)arg2 ;
-(void)setError:(NSError *)arg1 ;
@end
