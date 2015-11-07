/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:51 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/Support/mediaremoted
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <mediaremoted/MRDNowPlayingDataSource.h>

@class NSString;

@interface MRDMediaServerNowPlayingDataSource : MRDNowPlayingDataSource {

	NSString* _cachedNowPlayingAppDisplayID;
	int _cachedNowPlayingAppPID;
	char _cachedNowPlayingAppIsPlaying;

}
-(void)_nowPlayingAppDidChangeNotification:(id)arg1 ;
-(char)shouldSendCommand:(id)arg1 ;
-(id)nowPlayingApplicationDisplayID;
-(int)nowPlayingApplicationPID;
-(char)nowPlayingApplicationIsPlaying;
-(void)_registerAVSystemControllerNotifications;
-(void)_unregisterAVSystemControllerNotifications;
-(id)_mediaServerController;
-(void)_nowPlayingAppIsPlayingDidChangeNotification:(id)arg1 ;
-(void)_mediaServerDiedNotification:(id)arg1 ;
-(void)dealloc;
-(id)init;
@end
