/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:39:31 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <TSUtility/TSUtility-Structs.h>
@class NSString, NSFileHandle, TSMTraceController;

@interface TSMTraceBuffer : NSObject {

	NSString* mTag;
	long mBufferID;
	long mBufferSize;
	char mSynchronizedAccess;
	NSFileHandle* mFileHandle;
	TSMTraceController* mController;
	long mCurrentIndex;
	CFDataRef mData;
	char mActive;
	unsigned long mFilters[256];
	opaque_pthread_mutex_t mLock;

}

@property (nonatomic,readonly) NSString * tag; 
@property (nonatomic,readonly) long bufferID; 
@property (nonatomic,readonly) long bufferSize; 
@property (assign,nonatomic) char synchronizedAccess; 
@property (nonatomic,readonly) char active; 
@property (nonatomic,retain) TSMTraceController * controller; 
@property (nonatomic,retain) NSFileHandle * fileHandle; 
@property (nonatomic,readonly) unsigned* filters; 
+(id)bufferWithTag:(id)arg1 size:(long)arg2 ;
-(id)initWithTag:(id)arg1 size:(long)arg2 ;
-(unsigned long)filterForModule:(int)arg1 ;
-(void)setFilter:(unsigned long)arg1 forModule:(int)arg2 ;
-(void)writeTraceRecord:(TSMTraceRecord_s*)arg1 withFilter:(unsigned long)arg2 ;
-(void)setBufferID:(long)arg1 ;
-(long)bufferID;
-(char)synchronizedAccess;
-(void)setSynchronizedAccess:(char)arg1 ;
-(void)dealloc;
-(void)flush;
-(void)stop;
-(NSString *)tag;
-(unsigned*)filters;
-(void)start;
-(char)active;
-(TSMTraceController *)controller;
-(void)setController:(TSMTraceController *)arg1 ;
-(NSFileHandle *)fileHandle;
-(void)setFileHandle:(NSFileHandle *)arg1 ;
-(long)bufferSize;
@end

