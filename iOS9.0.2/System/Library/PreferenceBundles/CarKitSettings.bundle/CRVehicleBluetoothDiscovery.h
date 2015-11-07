/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:08:12 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/CarKitSettings.bundle/CarKitSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CRVehicleBluetoothDiscovery <NSObject>
@optional
-(void)bluetoothDiscoverer:(id)arg1 didDiscoverDevice:(id)arg2;
-(void)bluetoothDiscoverer:(id)arg1 didUpdateDevice:(id)arg2;
-(void)bluetoothDiscoverer:(id)arg1 didRemoveDevice:(id)arg2;

@required
-(id)viewControllerPresentingPairingForBluetoothDiscoverer:(id)arg1;

@end
