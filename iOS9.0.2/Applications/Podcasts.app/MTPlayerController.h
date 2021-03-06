/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:53 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSUserActivityDelegate.h>

@class IMAVPlayer, MTCompositeManifest, MTUpNextManfiest, MTPlayerManifest, NSString, NSUserActivity;

@interface MTPlayerController : NSObject <NSUserActivityDelegate> {

	IMAVPlayer* _player;
	MTCompositeManifest* _compositeManifest;
	MTUpNextManfiest* _upNextManifest;
	MTPlayerManifest* _userManifest;
	NSString* _previousPlayingEpisodeUuid;
	NSUserActivity* _currentActivity;
	double _lastPlaybackSaveTime;

}

@property (nonatomic,retain) IMAVPlayer * player;                                  //@synthesize player=_player - In the implementation block
@property (nonatomic,retain) MTCompositeManifest * compositeManifest;              //@synthesize compositeManifest=_compositeManifest - In the implementation block
@property (nonatomic,retain) MTUpNextManfiest * upNextManifest;                    //@synthesize upNextManifest=_upNextManifest - In the implementation block
@property (nonatomic,retain) MTPlayerManifest * userManifest;                      //@synthesize userManifest=_userManifest - In the implementation block
@property (assign,nonatomic) double currentTime; 
@property (nonatomic,retain) NSString * previousPlayingEpisodeUuid;                //@synthesize previousPlayingEpisodeUuid=_previousPlayingEpisodeUuid - In the implementation block
@property (assign,nonatomic) double lastPlaybackSaveTime;                          //@synthesize lastPlaybackSaveTime=_lastPlaybackSaveTime - In the implementation block
@property (nonatomic,retain) NSUserActivity * currentActivity;                     //@synthesize currentActivity=_currentActivity - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)setSharedInstace:(id)arg1 ;
+(id)sharedInstance;
-(void)restorePlaylistIfNeeded;
-(char)isPlayingEpisodeUuid:(id)arg1 ;
-(void)presentNowPlaying;
-(void)playPlaylistUuid:(id)arg1 startEpisodeUuid:(id)arg2 ;
-(void)playManifest:(id)arg1 startPlayback:(char)arg2 reason:(unsigned)arg3 ;
-(void)playManifest:(id)arg1 startPlayback:(char)arg2 reason:(unsigned)arg3 interactive:(char)arg4 completion:(/*^block*/id)arg5 ;
-(void)restoreFromUserActivity:(id)arg1 startPlayback:(char)arg2 reason:(unsigned)arg3 interactive:(char)arg4 completion:(/*^block*/id)arg5 ;
-(void)updateUPPEpisodeUuid:(id)arg1 bookmarkTime:(double)arg2 ;
-(MTCompositeManifest *)compositeManifest;
-(MTUpNextManfiest *)upNextManifest;
-(MTPlayerManifest *)userManifest;
-(void)setUpNextManifest:(MTUpNextManfiest *)arg1 ;
-(void)setUserManifest:(MTPlayerManifest *)arg1 ;
-(void)currentItemDidChange;
-(void)_updateCurrentActivityForPlayState;
-(void)setLastPlaybackSaveTime:(double)arg1 ;
-(void)setupPlayerNotifications;
-(void)tearDownPlayerNotifications;
-(id)_loadActivityForRestoration;
-(void)_currentActivityResignCurrent;
-(void)_saveActivityForRestoration;
-(void)_currentActivityBecomeCurrent;
-(id)_activityRestorationPath;
-(void)currentItemWillChange:(id)arg1 ;
-(void)playerPeriodicUpdate;
-(void)playerErrorDidOcurr:(id)arg1 ;
-(char)updateEpisode:(id)arg1 andPlayerItem:(id)arg2 withElapsedTime:(double)arg3 andDuration:(double)arg4 onMediaItemWillChange:(char)arg5 ;
-(void)setCurrentActivity:(NSUserActivity *)arg1 ;
-(NSString *)previousPlayingEpisodeUuid;
-(void)setPreviousPlayingEpisodeUuid:(NSString *)arg1 ;
-(double)lastPlaybackSaveTime;
-(void)_callCompletion:(/*^block*/id)arg1 started:(char)arg2 ;
-(void)_playManifest:(id)arg1 startPlayback:(char)arg2 reason:(unsigned)arg3 completion:(/*^block*/id)arg4 ;
-(void)setCompositeManifest:(MTCompositeManifest *)arg1 ;
-(char)isSeekingOrScrubbing;
-(void)setCurrentTime:(double)arg1 ;
-(double)currentTime;
-(void)setPlayer:(IMAVPlayer *)arg1 ;
-(void)playbackStateDidChange;
-(void)play;
-(char)isPlaying;
-(IMAVPlayer *)player;
-(void)dealloc;
-(id)init;
-(id)copy;
-(void)userActivityWillSave:(id)arg1 ;
-(void)userActivityWasContinued:(id)arg1 ;
-(void)userActivity:(id)arg1 didReceiveInputStream:(id)arg2 outputStream:(id)arg3 ;
-(id)currentItem;
-(void)pause;
-(NSUserActivity *)currentActivity;
@end

