/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:05:29 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/DataClassMigrators/AppleIDAccount.migrator/AppleIDAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DataMigration/DataClassMigrator.h>

@interface AppleIDAccountMigrator : DataClassMigrator
-(void)_removeAppleIDAccount:(id)arg1 accountStore:(id)arg2 ;
-(float)migrationProgress;
-(float)estimatedDuration;
-(id)dataClassName;
-(char)performMigration;
@end
