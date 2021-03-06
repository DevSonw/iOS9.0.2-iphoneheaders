/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:29 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <Maps/MNGuidanceManager.h>

@interface MNWalkGuidanceManager : MNGuidanceManager
-(void)updateGuidanceForProceedToRouteAtLocation:(SCD_Struct_RA7)arg1 routeMatch:(id)arg2 remainingTime:(double)arg3 distanceUntilDestination:(double)arg4 ;
-(double)_adjustedVehicleSpeed:(id)arg1 ;
-(id)_combinedGuidanceForStep:(id)arg1 withType:(int)arg2 ;
-(void)_updatePrepareForNextStep;
-(char)_updateConsiderExecuteAnnouncement:(id)arg1 location:(id)arg2 ;
-(int)transportType;
@end

