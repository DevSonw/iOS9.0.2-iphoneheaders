/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:42 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/PerformanceAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <PerformanceAnalysis/PerformanceAnalysis-Structs.h>
@class PAStackshot;

@interface PAStackshotTask : NSObject {

	task_snapshot* _task_snap;
	PAStackshot* _stackshot;
	long _bytesUsedByThreads;
	long _bytesAvailableForThreads;
	void* _imageInfos;
	void* _mainBinary;
	int* _donationReceivingPids;

}

@property (readonly) int pid; 
@property (readonly) const char* name; 
@property (readonly) char isDarwinBG; 
@property (readonly) char isSuppressed; 
@property (readonly) char isForeground; 
-(const char*)name;
-(char)isForeground;
-(char)isFromMicrostackshot;
-(char)isDarwinBG;
-(unsigned)powerstatsFlags;
-(char)setBufferPosition:(const char*)arg1 withRemainingBytes:(unsigned long)arg2 ;
-(unsigned long)bytesUsedInBuffer;
-(unsigned long)_bytesUsedByImageInfos;
-(unsigned long)_bytesUsedByDonationReceivingPids;
-(char)isSuppressed;
-(unsigned long)bytesUsedByHeader;
-(void)iterateThreads:(/*^block*/id)arg1 ;
-(unsigned long)bytesUsedByThreads;
-(id)initWithStackshot:(id)arg1 ;
-(unsigned)numImageInfos;
-(dyld_uuid_info_64)mainBinary;
-(id)copyImageInfos;
-(id)copyDonationReceivingPids;
-(const task_snapshot*)task_snap;
-(int)pid;
@end

