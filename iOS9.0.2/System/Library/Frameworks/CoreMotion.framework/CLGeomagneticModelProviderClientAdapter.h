/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:29 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <CoreMotion/CLNotifierServiceAdapter.h>
#import <libobjc.A.dylib/CLGeomagneticModelProviderClientProtocol.h>

@class NSString;

@interface CLGeomagneticModelProviderClientAdapter : CLNotifierServiceAdapter <CLGeomagneticModelProviderClientProtocol>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) char valid; 
+(void)becameFatallyBlocked:(id)arg1 ;
+(id)getSilo;
+(void)performSyncOnSilo:(id)arg1 invoker:(/*^block*/id)arg2 ;
+(char)isSupported;
-(void)doAsync:(/*^block*/id)arg1 ;
-(void)doAsync:(/*^block*/id)arg1 withReply:(/*^block*/id)arg2 ;
-(char)syncgetDoSync:(/*^block*/id)arg1 ;
-(void)beginService;
-(void)endService;
-(CLGeomagneticModelProviderClient*)adaptee;
-(id)initInSilo:(id)arg1 ;
@end

