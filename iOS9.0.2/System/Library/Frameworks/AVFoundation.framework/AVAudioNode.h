/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:08 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libAVFAudio.dylib/libAVFAudio.dylib-Structs.h>
#import <libobjc.A.dylib/AVAudioMixing.h>

@class AVAudioEngine, AVAudioTime, NSString;

@interface AVAudioNode : NSObject <AVAudioMixing> {

	void* _impl;

}

@property (nonatomic,readonly) AVAudioEngine * engine; 
@property (nonatomic,readonly) unsigned numberOfInputs; 
@property (nonatomic,readonly) unsigned numberOfOutputs; 
@property (nonatomic,readonly) AVAudioTime * lastRenderTime; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) float volume; 
-(id)clock;
-(OpaqueAudioComponentInstanceRef)audioUnit;
-(void)didAttachToEngine:(id)arg1 ;
-(void)didDetachFromEngine:(id)arg1 ;
-(id)initWithImpl:(AVAudioNodeImplBase*)arg1 ;
-(id)destinationForMixer:(id)arg1 bus:(unsigned)arg2 ;
-(AVAudioNodeImplBase*)impl;
-(id)outputFormatForBus:(unsigned)arg1 ;
-(char)setOutputFormat:(id)arg1 forBus:(unsigned)arg2 ;
-(id)inputFormatForBus:(unsigned)arg1 ;
-(char)setInputFormat:(id)arg1 forBus:(unsigned)arg2 ;
-(id)nameForInputBus:(unsigned)arg1 ;
-(id)nameForOutputBus:(unsigned)arg1 ;
-(AVAudioTime *)lastRenderTime;
-(unsigned)numberOfInputs;
-(unsigned)numberOfOutputs;
-(void)setNumberOfInputs:(unsigned)arg1 ;
-(void)setNumberOfOutputs:(unsigned)arg1 ;
-(void)installTapOnBus:(unsigned)arg1 bufferSize:(unsigned)arg2 format:(id)arg3 block:(/*^block*/id)arg4 ;
-(void)removeTapOnBus:(unsigned)arg1 ;
-(float)rate;
-(void)setVolume:(float)arg1 ;
-(int)renderingAlgorithm;
-(void)setRenderingAlgorithm:(int)arg1 ;
-(float)reverbBlend;
-(void)setReverbBlend:(float)arg1 ;
-(AVAudioEngine *)engine;
-(float)obstruction;
-(void)setObstruction:(float)arg1 ;
-(float)occlusion;
-(void)setOcclusion:(float)arg1 ;
-(void)setPan:(float)arg1 ;
-(float)pan;
-(void)dealloc;
-(id)init;
-(void)reset;
-(void)setPosition:(AVAudio3DPoint)arg1 ;
-(AVAudio3DPoint)position;
-(float)volume;
-(void)setRate:(float)arg1 ;
@end

