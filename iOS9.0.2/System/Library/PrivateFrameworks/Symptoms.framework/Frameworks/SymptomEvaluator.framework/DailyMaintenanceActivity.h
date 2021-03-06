/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:32 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface DailyMaintenanceActivity : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _maintenanceBlocks;

}

@property (retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (copy) id maintenanceBlocks;                              //@synthesize maintenanceBlocks=_maintenanceBlocks - In the implementation block
+(id)sharedInstance;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)dealloc;
-(id)init;
-(void)scheduleNextRunOnQueue:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)_handleActivityRun;
-(id)maintenanceBlocks;
-(void)setMaintenanceBlocks:(id)arg1 ;
@end

