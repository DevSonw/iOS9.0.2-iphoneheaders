/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:15 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore;
#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
@class CKDMMCS, NSString, NSObject, NSRunLoop;

@interface CKDMMCSEngineContext : NSObject {

	char _stopMMCSThread;
	long _refCount;
	int _state;
	CKDMMCS* _MMCS;
	mmcs_engineRef _MMCSEngine;
	NSString* _applicationBundleID;
	NSString* _path;
	NSObject*<OS_dispatch_semaphore> _semaphore;
	NSRunLoop* _runLoop;
	NSString* _runLoopMode;
	NSString* _protocolVersion;
	unsigned long _maxChunkCountForSection;

}

@property (assign,nonatomic) long refCount;                                           //@synthesize refCount=_refCount - In the implementation block
@property (assign,nonatomic) int state;                                               //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) char stopMMCSThread;                                     //@synthesize stopMMCSThread=_stopMMCSThread - In the implementation block
@property (assign,nonatomic,__weak) CKDMMCS * MMCS;                                   //@synthesize MMCS=_MMCS - In the implementation block
@property (assign,nonatomic) mmcs_engineRef MMCSEngine;                               //@synthesize MMCSEngine=_MMCSEngine - In the implementation block
@property (nonatomic,retain) NSString * applicationBundleID;                          //@synthesize applicationBundleID=_applicationBundleID - In the implementation block
@property (nonatomic,retain) NSString * path;                                         //@synthesize path=_path - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> semaphore;              //@synthesize semaphore=_semaphore - In the implementation block
@property (nonatomic,retain) NSRunLoop * runLoop;                                     //@synthesize runLoop=_runLoop - In the implementation block
@property (nonatomic,retain) NSString * runLoopMode;                                  //@synthesize runLoopMode=_runLoopMode - In the implementation block
@property (nonatomic,retain) NSString * protocolVersion;                              //@synthesize protocolVersion=_protocolVersion - In the implementation block
@property (assign,nonatomic) unsigned long maxChunkCountForSection;                   //@synthesize maxChunkCountForSection=_maxChunkCountForSection - In the implementation block
+(id)sharedContextsQueue;
+(id)_appID;
+(id)sharedContextsByPath;
+(id)setupMMCSEngineWithApplicationBundleID:(id)arg1 path:(id)arg2 error:(id*)arg3 ;
+(void)tearDownMMCSEngineWithContext:(id)arg1 ;
-(NSRunLoop *)runLoop;
-(NSObject*<OS_dispatch_semaphore>)semaphore;
-(void)dealloc;
-(id)description;
-(int)state;
-(void)setState:(int)arg1 ;
-(NSString *)path;
-(void)setPath:(NSString *)arg1 ;
-(NSString *)applicationBundleID;
-(CKDMMCS *)MMCS;
-(id)CKPropertiesDescription;
-(void)setMMCS:(CKDMMCS *)arg1 ;
-(void)setApplicationBundleID:(NSString *)arg1 ;
-(long)refCount;
-(void)setStopMMCSThread:(char)arg1 ;
-(void)setRunLoop:(NSRunLoop *)arg1 ;
-(void)_MMCSTreadAbort;
-(NSString *)runLoopMode;
-(char)stopMMCSThread;
-(mmcs_engineRef)MMCSEngine;
-(void)_MMCSThread;
-(void)setMMCSEngine:(mmcs_engineRef)arg1 ;
-(void)setMaxChunkCountForSection:(unsigned long)arg1 ;
-(char)_setupMMCSEngineWithError:(id*)arg1 ;
-(long)incRefCount;
-(id)initWithApplicationBundleID:(id)arg1 path:(id)arg2 ;
-(char)_setupMMCSEngineWithRetryCount:(unsigned)arg1 error:(id*)arg2 ;
-(long)decRefCount;
-(void)_tearDownMMCSEngine;
-(void)cancelRequestWithContext:(void*)arg1 ;
-(void)performOnRunLoop:(/*^block*/id)arg1 ;
-(void)setRefCount:(long)arg1 ;
-(void)setSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(void)setRunLoopMode:(NSString *)arg1 ;
-(unsigned long)maxChunkCountForSection;
-(void)setProtocolVersion:(NSString *)arg1 ;
-(NSString *)protocolVersion;
@end

