/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:41 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IAP.framework/Support/iaptransportd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iaptransportd/iaptransportd-Structs.h>
#import <libobjc.A.dylib/CRCarPlayPreferencesDelegate.h>

@class CRCarPlayPreferences, NSString;

@interface IAPCarPlayConnectionObserver : NSObject <CRCarPlayPreferencesDelegate> {

	char _isStarkPossibleByCarPlaySettings;
	CRCarPlayPreferences* _carPreferences;
	CIapPortIOKit* _parentUSBPort;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithPort:(CIapPortIOKit*)arg1 ;
-(void)handleCarPlayAllowedDidChange;
@end
