/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:16 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreRC.framework/PlugIns/InterfacePlugins/CECIOCECInterfaceListener.plugin/CECIOCECInterfaceListener
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CECIOCECInterfaceListener/CECIOCECInterfaceListener-Structs.h>
#import <CoreRC/CECInterface.h>

@interface CECIOCECInterface : CECInterface {

	char _isOpen;
	IOCECInterfaceRef _iocecInterface;

}

@property (assign,nonatomic) IOCECInterfaceRef iocecInterface;              //@synthesize iocecInterface=_iocecInterface - In the implementation block
+(id)interfaceWithIOCECInterface:(IOCECInterfaceRef)arg1 ;
-(id)initWithIOCECInterface:(IOCECInterfaceRef)arg1 ;
-(char)ioUpdateAddressMask:(id*)arg1 ;
-(int)ioSendFrame:(CECFrame)arg1 withRetryCount:(unsigned char)arg2 ;
-(void)setIocecInterface:(IOCECInterfaceRef)arg1 ;
-(IOCECInterfaceRef)iocecInterface;
-(void)removeFromRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(char)isValid;
-(void)close;
-(id)properties;
-(char)sendFrame:(CECFrame)arg1 withRetryCount:(unsigned char)arg2 error:(id*)arg3 ;
-(char)errorIsNack:(id)arg1 ;
-(char)setAddressMask:(unsigned short)arg1 error:(id*)arg2 ;
-(char)setPromiscMode:(char)arg1 error:(id*)arg2 ;
-(char)allocateCECAddress:(unsigned char*)arg1 forDeviceType:(unsigned char)arg2 error:(id*)arg3 ;
-(void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2 ;
-(int)open;
@end

