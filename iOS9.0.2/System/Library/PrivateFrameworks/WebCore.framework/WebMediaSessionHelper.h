/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:42 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <WebCore/WebCore-Structs.h>
@interface WebMediaSessionHelper : NSObject {

	MediaSessionManageriOS* _callback;
	RetainPtr<MPVolumeView>* _volumeView;
	RetainPtr<MPAVRoutingController>* _airPlayPresenceRoutingController;

}
-(void)dealloc;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)applicationWillResignActive:(id)arg1 ;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(id)initWithCallback:(MediaSessionManageriOS*)arg1 ;
-(void)clearCallback;
-(char)hasWirelessTargetsAvailable;
-(void)startMonitoringAirPlayRoutes;
-(void)stopMonitoringAirPlayRoutes;
-(void)setVolumeView:(RetainPtr<MPVolumeView>*)arg1 ;
-(void)wirelessRoutesAvailableDidChange:(id)arg1 ;
-(void)interruption:(id)arg1 ;
-(void)allocateVolumeView;
@end

