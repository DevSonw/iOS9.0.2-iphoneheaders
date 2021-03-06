/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:02 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <HealthDaemon/HealthDaemon-Structs.h>
@class HDSQLiteDatabase, HDSQLiteQueryDescriptor;

@interface HDSQLiteQuery : NSObject {

	HDSQLiteDatabase* _database;
	HDSQLiteQueryDescriptor* _descriptor;
	HDSQLiteQueryDescriptor* _queryDescriptor;

}

@property (readonly) HDSQLiteDatabase * database;                            //@synthesize database=_database - In the implementation block
@property (readonly) HDSQLiteQueryDescriptor * queryDescriptor;              //@synthesize queryDescriptor=_queryDescriptor - In the implementation block
@property (readonly) int countOfEntities; 
-(int)countOfEntities;
-(char)enumeratePersistentIDsAndProperties:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(char)enumeratePersistentIDsAndPropertiesAsDoubles:(id)arg1 error:(id*)arg2 usingBlock:(/*^block*/id)arg3 ;
-(char)setValuesForAllEntitiesWithDictionary:(id)arg1 ;
-(char)enumeratePersistentIDsAndProperties:(id)arg1 error:(id*)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)bindToSelectStatement:(sqlite3_stmtRef)arg1 bindingIndex:(inout int*)arg2 ;
-(id)copySelectSQLWithProperties:(id)arg1 ;
-(char)enumerateProperties:(id)arg1 error:(id*)arg2 usingBlock:(/*^block*/id)arg3 ;
-(char)deleteAllEntities;
-(void)enumerateEntitiesUsingBlock:(/*^block*/id)arg1 ;
-(id)copyEntityIdentifiers;
-(char)createTemporaryTableWithName:(id)arg1 properties:(id)arg2 ;
-(char)enumeratePersistentIDsUsingBlock:(/*^block*/id)arg1 error:(id*)arg2 ;
-(HDSQLiteQueryDescriptor *)queryDescriptor;
-(HDSQLiteDatabase *)database;
-(id)initWithDatabase:(id)arg1 descriptor:(id)arg2 ;
-(void)enumeratePersistentIDsUsingBlock:(/*^block*/id)arg1 ;
@end

