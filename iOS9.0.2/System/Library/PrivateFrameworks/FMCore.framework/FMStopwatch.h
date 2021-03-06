/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:37 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface FMStopwatch : NSObject {

	NSString* label;
	NSString* comment;
	double startTime;
	double endTime;

}

@property (nonatomic,copy) NSString * label; 
@property (nonatomic,copy) NSString * comment; 
@property (assign,nonatomic) double startTime; 
@property (assign,nonatomic) double endTime; 
+(void)initialize;
+(void)dumpBuffer:(id)arg1 ;
+(void)eventWithLabel:(id)arg1 comment:(id)arg2 ;
+(id)illegalLabelCharacterSet;
+(id)stopwatchWithLabel:(id)arg1 ;
+(void)eventWithLabel:(id)arg1 ;
-(void)setComment:(NSString *)arg1 ;
-(id)description;
-(void)setStartTime:(double)arg1 ;
-(void)stop;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(double)startTime;
-(id)descriptionAsData;
-(void)stopWithComment:(id)arg1 ;
-(double)endTime;
-(void)setEndTime:(double)arg1 ;
-(NSString *)comment;
-(id)initWithLabel:(id)arg1 ;
@end

