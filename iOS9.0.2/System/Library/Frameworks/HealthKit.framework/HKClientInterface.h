/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:40 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol HKClientInterface <NSObject>
@required
-(void)deliverWorkoutSessionChangedToState:(int)arg1 fromState:(int)arg2 date:(id)arg3 forSessionUUID:(id)arg4;
-(void)deliverWorkoutSessionError:(id)arg1 forSessionUUID:(id)arg2;
-(void)presentAuthorizationWithRequestRecord:(id)arg1 completion:(/*^block*/id)arg2;
-(void)deliverBluetoothStatus:(int)arg1 withError:(id)arg2;
-(void)deliverDiscoveryHealthService:(id)arg1 toClient:(unsigned)arg2 finished:(char)arg3 withError:(id)arg4;
-(void)deliverSessionHealthServiceStatus:(int)arg1 toClient:(unsigned)arg2 finished:(char)arg3 withError:(id)arg4;
-(void)deliverSessionTransitoryData:(id)arg1 toClient:(unsigned)arg2 withError:(id)arg3;
-(void)deliverSessionCharacteristics:(id)arg1 forService:(id)arg2 toClient:(unsigned)arg3 withError:(id)arg4;
-(void)unitPreferencesDidUpdate;

@end

