/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:05:34 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/DuetKnowledgeBase/Monitors/DuetKnowledgeMonitor.bundle/DuetKnowledgeMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSDate;


@protocol _DKHistoricalMonitor <_DKMonitor>
@property (nonatomic,copy) id historicalHandler; 
@property (nonatomic,readonly) NSDate * lastUpdate; 
@required
-(id)historicalHandler;
-(void)setHistoricalHandler:(/*^block*/id)arg1;
-(void)update;
-(NSDate *)lastUpdate;

@end
