/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:24 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_semaphore;
@class NSObject, NSMutableSet, NSString;

@interface _ML3DatabaseConnectionSubPool : NSObject {

	NSObject*<OS_dispatch_queue> _checkoutQueue;
	NSObject*<OS_dispatch_queue> _checkinQueue;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSObject*<OS_dispatch_semaphore> _waitingSemaphore;
	NSMutableSet* _availableConnections;
	NSMutableSet* _busyConnections;
	int _connectionsProfilingLevel;
	int _willDeleteDatabaseNotifyToken;
	int _homeSharingCachesClearedNotifyToken;
	char _useReadOnlyConnections;
	char _useDistantConnections;
	NSString* _databasePath;
	unsigned _maxConcurrentConnections;
	unsigned _connectionsJournalingMode;

}

@property (nonatomic,readonly) NSString * databasePath;                        //@synthesize databasePath=_databasePath - In the implementation block
@property (nonatomic,readonly) unsigned maxConcurrentConnections;              //@synthesize maxConcurrentConnections=_maxConcurrentConnections - In the implementation block
@property (assign,nonatomic) char useReadOnlyConnections;                      //@synthesize useReadOnlyConnections=_useReadOnlyConnections - In the implementation block
@property (assign,nonatomic) char useDistantConnections;                       //@synthesize useDistantConnections=_useDistantConnections - In the implementation block
@property (assign,nonatomic) unsigned connectionsJournalingMode;               //@synthesize connectionsJournalingMode=_connectionsJournalingMode - In the implementation block
@property (assign,nonatomic) int connectionsProfilingLevel; 
-(void)dealloc;
-(id)init;
-(void)checkInConnection:(id)arg1 ;
-(void)setConnectionsProfilingLevel:(int)arg1 ;
-(id)initWithDatabasePath:(id)arg1 maxConcurrentConnections:(unsigned)arg2 ;
-(void)setUseReadOnlyConnections:(char)arg1 ;
-(void)setUseDistantConnections:(char)arg1 ;
-(void)setConnectionsJournalingMode:(unsigned)arg1 ;
-(void)closeConnectionsAndWaitForBusyConnections:(char)arg1 ;
-(id)checkoutConnection:(char*)arg1 ;
-(int)connectionsProfilingLevel;
-(unsigned)connectionsJournalingMode;
-(void)_handleDatabaseDeletion;
-(unsigned)maxConcurrentConnections;
-(char)useReadOnlyConnections;
-(char)useDistantConnections;
-(NSString *)databasePath;
@end
