/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:10 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKBalloonImageView.h>

@class UIImage, IMManualUpdater;

@interface CKWaveformProgressView : CKBalloonImageView {

	char _color;
	char _playing;
	char _played;
	UIImage* _waveform;
	IMManualUpdater* _displayUpdater;
	double _duration;
	double _currentTime;

}

@property (assign,nonatomic) char color;                                    //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) double duration;                               //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) double currentTime;                            //@synthesize currentTime=_currentTime - In the implementation block
@property (nonatomic,retain) UIImage * waveform;                            //@synthesize waveform=_waveform - In the implementation block
@property (assign,getter=isPlaying,nonatomic) char playing;                 //@synthesize playing=_playing - In the implementation block
@property (assign,getter=isPlayed,nonatomic) char played;                   //@synthesize played=_played - In the implementation block
@property (nonatomic,retain) IMManualUpdater * displayUpdater;              //@synthesize displayUpdater=_displayUpdater - In the implementation block
-(void)setCurrentTime:(double)arg1 ;
-(double)currentTime;
-(char)isPlaying;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(char)color;
-(void)setColor:(char)arg1 ;
-(void)prepareForDisplay;
-(void)setDisplayUpdater:(IMManualUpdater *)arg1 ;
-(void)setNeedsPrepareForDisplay;
-(IMManualUpdater *)displayUpdater;
-(void)prepareForDisplayIfNeeded;
-(void)setWaveform:(UIImage *)arg1 ;
-(void)setPlayed:(char)arg1 ;
-(char)isPlayed;
-(UIImage *)waveform;
-(void)setPlaying:(char)arg1 ;
@end
