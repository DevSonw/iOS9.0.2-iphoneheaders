/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:42 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface TSDGLTextureParameter : NSObject {

	unsigned _pname;
	unsigned _paramCount;
	int* _intData;
	float* _floatData;

}
+(id)textureParameterWithPName:(unsigned)arg1 integerParameter:(int)arg2 ;
+(id)stringWithCurrentTextureParameters;
+(id)textureParameterWithPName:(unsigned)arg1 integerParameters:(int*)arg2 count:(unsigned)arg3 ;
+(id)textureParameterWithPName:(unsigned)arg1 floatParameter:(float)arg2 ;
+(id)textureParameterWithPName:(unsigned)arg1 floatParameters:(float*)arg2 count:(unsigned)arg3 ;
-(id)initWithPName:(unsigned)arg1 paramCount:(unsigned)arg2 intData:(int*)arg3 floatData:(float*)arg4 ;
-(void)setGLTextureParameter;
-(void)dealloc;
@end

