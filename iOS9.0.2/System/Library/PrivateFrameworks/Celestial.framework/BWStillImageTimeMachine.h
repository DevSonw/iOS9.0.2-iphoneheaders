/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:06 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Celestial/Celestial-Structs.h>
@interface BWStillImageTimeMachine : NSObject {

	OpaqueFigSimpleMutexRef _timeMachineMutex;
	opaqueCMSampleBuffer* _frames;
	char _suspended;
	int _capacity;

}

@property (nonatomic,readonly) int capacity;              //@synthesize capacity=_capacity - In the implementation block
+(void)initialize;
+(char)afComplete:(opaqueCMSampleBufferRef)arg1 ;
-(void)dealloc;
-(id)initWithCapacity:(int)arg1 ;
-(void)resume;
-(void)drain;
-(void)_drain;
-(void)suspendAndDrain;
-(long)insertFrame:(opaqueCMSampleBufferRef)arg1 ;
-(opaqueCMSampleBufferRef)copyBestFrame;
-(int)capacity;
@end
