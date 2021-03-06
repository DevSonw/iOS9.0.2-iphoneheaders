/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:05:32 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/DataClassMigrators/SpringBoard.migrator/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DataMigration/DataClassMigrator.h>

@class NSArray, SBSplashBoardMigrationController;

@interface SBDataMigrator : DataClassMigrator {

	char _done;
	NSArray* _allInstalledApps;
	SBSplashBoardMigrationController* _xbController;

}
-(void)performALSMigration;
-(void)performTransientLocalNotificationsMigration;
-(void)performGameCenterNotificationsMigration;
-(void)performSplashBoardSystemLaunchImagesMigration;
-(void)performNotificationCenterTodayViewDataMigration;
-(void)performBadgingDisabledMigration;
-(void)warmUpIcons;
-(float)migrationProgress;
-(float)estimatedDuration;
-(void)dealloc;
-(id)init;
-(id)dataClassName;
-(char)performMigration;
@end

