/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:18 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaSocial/MediaSocial-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSError;

@interface MSCLAudioPlayerStatus : NSObject <NSCopying> {

	double _currentTime;
	double _duration;
	NSError* _error;
	int _state;

}

@property (assign,nonatomic) double currentTime;              //@synthesize currentTime=_currentTime - In the implementation block
@property (assign,nonatomic) double duration;                 //@synthesize duration=_duration - In the implementation block
@property (nonatomic,retain) NSError * error;                 //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) int state;                       //@synthesize state=_state - In the implementation block
-(void)setCurrentTime:(double)arg1 ;
-(double)currentTime;
-(NSError *)error;
-(int)state;
-(double)duration;
-(void)setState:(int)arg1 ;
-(void)setDuration:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setError:(NSError *)arg1 ;
@end
