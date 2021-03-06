/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:40 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameController/GameController-Structs.h>
#import <GameController/GCController.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol GCNamedProfile, OS_dispatch_queue;
@class NSString, NSMutableArray, NSObject;

@interface _GCController : GCController <NSSecureCoding> {

	/*^block*/id _controllerPausedHandler;
	NSString* _vendorName;
	int _playerIndex;
	id<GCNamedProfile> _profile;
	IOHIDDeviceRef _deviceRef;
	NSMutableArray* _allDeviceRefs;
	char* _deviceHIDReportBuffer;
	unsigned _service;
	unsigned _deviceHash;
	NSObject*<OS_dispatch_queue> _handlerQueue;

}
+(char)supportsSecureCoding;
-(id)profile;
-(id)motion;
-(unsigned)deviceHash;
-(void)addDeviceRefs:(id)arg1 ;
-(void)clearDeviceRef;
-(/*^block*/id)controllerPausedHandler;
-(void)setPlayerIndex:(int)arg1 ;
-(void)setControllerPausedHandler:(/*^block*/id)arg1 ;
-(char)isAttachedToDevice;
-(int)playerIndex;
-(id)deviceRefs;
-(char*)hidReportBuffer;
-(void)setHidReportBuffer:(char*)arg1 ;
-(char)isEqualToController:(id)arg1 ;
-(void)removeDeviceRef:(IOHIDDeviceRef)arg1 ;
-(id)gamepad;
-(id)extendedGamepad;
-(id)initWithDeviceRef:(IOHIDDeviceRef)arg1 ;
-(IOHIDDeviceRef)deviceRef;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(unsigned)service;
-(id)initWithProfile:(id)arg1 ;
-(id)handlerQueue;
-(void)setHandlerQueue:(id)arg1 ;
-(void)setProfile:(id)arg1 ;
-(id)vendorName;
@end

