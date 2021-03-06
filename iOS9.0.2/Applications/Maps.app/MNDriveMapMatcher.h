/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:33 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/MNMapMatcher.h>

@class GEOLocationShifter, NSDate;

@interface MNDriveMapMatcher : MNMapMatcher {

	GEOLocationShifter* _locationShifter;
	double _lastKnownSpeed;
	NSDate* _lastVehicleSpeedUpdateTime;
	double _distanceToProject;

}
-(id)matchLocation:(id)arg1 alongRoute:(id)arg2 onDate:(id)arg3 activeTransportType:(int)arg4 ;
-(id)initWithRoutePreloadSession:(id)arg1 ;
-(id)projectInTunnelFromLocation:(id)arg1 timeInterval:(double)arg2 ;
-(void)updateLastKnownSpeed:(double)arg1 timestamp:(id)arg2 ;
-(id)_roadMatchForLocation:(id)arg1 ;
-(char)_isParkingLotFormOfWay:(int)arg1 ;
-(id)_projectInTunnelFromLocation:(id)arg1 distance:(double)arg2 speed:(double)arg3 timeInterval:(double)arg4 ;
-(void)reset;
-(int)transportType;
@end

