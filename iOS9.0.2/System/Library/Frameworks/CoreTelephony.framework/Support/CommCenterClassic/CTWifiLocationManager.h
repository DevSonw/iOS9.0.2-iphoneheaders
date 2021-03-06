/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:55 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/Support/CommCenterClassic
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@class CLLocationManager, CLLocation, NSString;

@interface CTWifiLocationManager : NSObject <CLLocationManagerDelegate> {

	CLLocationManager* _manager;
	CLLocation* _location;
	char _locationRequested;
	char _locationAvailable;
	char _locationServiceDenied;
	char _locationServiceAuthorized;
	unsigned _desiredIntegrity;
	double _desiredLocationAccuracy;

}

@property (copy) CLLocation * location;                             //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) char locationRequested;                //@synthesize locationRequested=_locationRequested - In the implementation block
@property (assign,nonatomic) char locationAvailable;                //@synthesize locationAvailable=_locationAvailable - In the implementation block
@property (assign) double desiredLocationAccuracy;                  //@synthesize desiredLocationAccuracy=_desiredLocationAccuracy - In the implementation block
@property (assign) unsigned desiredIntegrity;                       //@synthesize desiredIntegrity=_desiredIntegrity - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)stopLocationUpdates;
-(char)isLocationServiceEnabled;
-(char)locationRequested;
-(void)setLocationRequested:(char)arg1 ;
-(void)shouldUpdateLocation:(char)arg1 ;
-(unsigned)desiredIntegrity;
-(double)desiredLocationAccuracy;
-(void)startLocationUpdates;
-(id)copyLastKnownLocation;
-(char)isLocationServiceDenied;
-(char)isLocationServiceAuthorized;
-(char)locationAvailable;
-(void)setLocationAvailable:(char)arg1 ;
-(void)setDesiredLocationAccuracy:(double)arg1 ;
-(void)setDesiredIntegrity:(unsigned)arg1 ;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(CLLocation *)location;
-(void)setLocation:(CLLocation *)arg1 ;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
@end

