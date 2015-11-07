/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:55 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/backupd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, MBAppManager, MBDomainManager, PQLConnection;

@interface MBCKPostRestoreWorkQueue : NSObject {

	NSString* _path;
	unsigned _processedItems;
	MBAppManager* _appManager;
	MBDomainManager* _domainManager;
	PQLConnection* _database;
	NSString* _dbQueueLabel;

}

@property (nonatomic,retain) NSString * path;                              //@synthesize path=_path - In the implementation block
@property (nonatomic,readonly) unsigned processedItems;                    //@synthesize processedItems=_processedItems - In the implementation block
@property (nonatomic,retain) MBAppManager * appManager;                    //@synthesize appManager=_appManager - In the implementation block
@property (nonatomic,retain) MBDomainManager * domainManager;              //@synthesize domainManager=_domainManager - In the implementation block
@property (nonatomic,retain) PQLConnection * database;                     //@synthesize database=_database - In the implementation block
@property (nonatomic,retain) NSString * dbQueueLabel;                      //@synthesize dbQueueLabel=_dbQueueLabel - In the implementation block
+(id)sharedWorkQueue;
+(id)defaultPath;
-(char)processQueueWithError:(id*)arg1 ;
-(id)_newConnection:(id)arg1 ;
-(char)removeDatabaseFilesWithError:(id*)arg1 ;
-(void)_performOnDBQueue:(/*^block*/id)arg1 ;
-(char)_setupConnectionWithError:(id*)arg1 ;
-(char)_isNotFoundError:(id)arg1 ;
-(char)addWorkItem:(id)arg1 withError:(id*)arg2 ;
-(char)shouldRequeueWorkItem:(id)arg1 ;
-(void)setDomainManager:(MBDomainManager *)arg1 ;
-(void)setDbQueueLabel:(NSString *)arg1 ;
-(char)_setupDatabaseWithError:(id*)arg1 ;
-(NSString *)dbQueueLabel;
-(id)nextWorkItemWithError:(id*)arg1 ;
-(unsigned)processedItems;
-(void)setAppManager:(MBAppManager *)arg1 ;
-(void)dealloc;
-(NSString *)path;
-(void)setPath:(NSString *)arg1 ;
-(id)initWithPath:(id)arg1 ;
-(char)openWithError:(id*)arg1 ;
-(char)closeWithError:(id*)arg1 ;
-(char)resetWithError:(id*)arg1 ;
-(void)setDatabase:(PQLConnection *)arg1 ;
-(MBAppManager *)appManager;
-(MBDomainManager *)domainManager;
-(PQLConnection *)database;
@end
