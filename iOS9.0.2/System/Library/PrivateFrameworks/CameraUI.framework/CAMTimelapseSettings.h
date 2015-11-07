/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:04 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface CAMTimelapseSettings : NSObject {

	double _initialCaptureTimeInterval;
	double _maxOutputFPS;
	double _maxOutputLength;

}

@property (nonatomic,readonly) double initialCaptureTimeInterval;              //@synthesize initialCaptureTimeInterval=_initialCaptureTimeInterval - In the implementation block
@property (nonatomic,readonly) double maxOutputFPS;                            //@synthesize maxOutputFPS=_maxOutputFPS - In the implementation block
@property (nonatomic,readonly) double maxOutputLength;                         //@synthesize maxOutputLength=_maxOutputLength - In the implementation block
@property (nonatomic,readonly) int maxOutputFrames; 
@property (nonatomic,readonly) int maxMovieWriteAttempts; 
@property (nonatomic,readonly) int maxFailedStateReadAttempts; 
+(id)sharedInstance;
-(id)init;
-(id)outputSettingsPresetForWidth:(int)arg1 height:(int)arg2 ;
-(int)averageMovieBitrateForWidth:(int)arg1 height:(int)arg2 ;
-(double)initialCaptureTimeInterval;
-(int)maxOutputFrames;
-(long long)minAvailableBytesNeededForCaptureForWidth:(int)arg1 height:(int)arg2 ;
-(double)maxOutputLength;
-(double)maxOutputFPS;
-(long long)maxMovieFileLengthForWidth:(int)arg1 height:(int)arg2 ;
-(double)outputFPSForFrameCount:(int)arg1 ;
-(int)maxMovieWriteAttempts;
-(double)waitTimeBeforeNextWriteForNumberOfPreviousAttempts:(int)arg1 ;
-(int)maxFailedStateReadAttempts;
@end
