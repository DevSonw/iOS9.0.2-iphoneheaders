/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:39:22 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
@class MPDocument, NSRecursiveLock;

@interface MPCropController : NSObject {

	id _delegate;
	MPDocument* _authoredDocument;
	NSRecursiveLock* _cropLock;

}
+(void)releaseSharedController;
+(id)sharedController;
-(void)batchCrop:(id)arg1 ;
-(void)applyCropToSlide:(id)arg1 inDocument:(id)arg2 withOptions:(id)arg3 ;
-(void)applyCropToSlide:(id)arg1 withOptions:(id)arg2 ;
-(void)cropSlidesForLayerGroup:(id)arg1 inDocument:(id)arg2 withOptions:(id)arg3 ;
-(void)setupWithDocument:(id)arg1 andOptions:(id)arg2 ;
-(void)applyCropToSlidesInEffectContainers:(id)arg1 inDocument:(id)arg2 withOptions:(id)arg3 ;
-(void)applyStationaryCropToSlide:(id)arg1 withOptions:(id)arg2 ;
-(void)applyAnimatedCropToBreakSlide:(id)arg1 withOptions:(id)arg2 ;
-(void)applyAnimatedCropWithROIsToSlide:(id)arg1 withOptions:(id)arg2 ;
-(void)applyMultiFaceAnimatedCropToSlide:(id)arg1 withOptions:(id)arg2 ;
-(void)applyAnimatedCropToSlide:(id)arg1 withOptions:(id)arg2 ;
-(void)applyAnimatedCropToSlide:(id)arg1 withOptions:(id)arg2 centeredAt:(CGPoint)arg3 alwaysZoomIn:(char)arg4 ;
-(CGPoint)checkFarApartROIs:(id)arg1 withImageSize:(CGSize)arg2 visibleAspectRatio:(float)arg3 roiCenter:(CGPoint)arg4 ;
-(double)durationOfSlide:(id)arg1 ;
-(void)_applyCropToSlidesInEffectContainersWithArguments:(id)arg1 ;
-(void)cropSlidesInDocument:(id)arg1 withOptions:(id)arg2 ;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)delegate;
-(void)cleanup;
@end
