/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:32 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AVConference/AVConference-Structs.h>
@interface ICEResultQuery : NSObject {

	unsigned long callID;
	tagCONNRESULT* result;
	char isQueryAnswered;

}

@property (assign) tagCONNRESULT* result; 
@property (assign) unsigned long callID; 
@property (assign) char isQueryAnswered; 
-(id)initWithResult:(tagCONNRESULT*)arg1 ;
-(void)dealloc;
-(tagCONNRESULT*)result;
-(id)initWithCallID:(unsigned long)arg1 ;
-(char)isQueryAnswered;
-(void)setIsQueryAnswered:(char)arg1 ;
-(void)setResult:(tagCONNRESULT*)arg1 ;
-(void)setCallID:(unsigned long)arg1 ;
-(unsigned long)callID;
@end

