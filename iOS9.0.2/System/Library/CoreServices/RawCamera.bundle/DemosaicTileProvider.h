/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:04 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/RawCamera.bundle/RawCamera
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <RawCamera/RawCamera-Structs.h>
@interface DemosaicTileProvider : NSObject {

	CSensorData* RAWBitmapData;
	reconstructionDataV4_s dataV4;
	unsigned long left;
	unsigned long top;
	unsigned long width;
	unsigned long height;
	unsigned long rowBytes;
	BOOL _print;
	BOOL _outputHALF;
	unsigned short _alphaOne;
	SCD_Struct_De15* noiseEnvironment;
	SCD_Struct_De18* rawEnvironment;
	noiseTables* NT;

}
-(id)initWithRAWBitmapData:(CSensorData*)arg1 reconstructionData:(reconstructionDataV4_s)arg2 left:(unsigned long)arg3 top:(unsigned long)arg4 width:(unsigned long)arg5 height:(unsigned long)arg6 rowBytes:(unsigned long)arg7 andPrintWhenCalled:(BOOL)arg8 ;
-(void)enableHALF:(BOOL)arg1 ;
-(void)provideImageData:(void*)arg1 bytesPerRow:(unsigned long)arg2 origin:(unsigned long)arg3 :(unsigned long)arg4 size:(unsigned long)arg5 :(unsigned long)arg6 userInfo:(id)arg7 ;
-(void)dealloc;
@end
