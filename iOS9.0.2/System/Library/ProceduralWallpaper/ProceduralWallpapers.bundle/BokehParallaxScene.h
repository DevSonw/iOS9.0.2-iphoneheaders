/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:49 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/ProceduralWallpaper/ProceduralWallpapers.bundle/ProceduralWallpapers
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ProceduralWallpapers/ProceduralWallpapers-Structs.h>
#import <SpriteKit/SKScene.h>

@class NSMutableArray, SKEffectNode, SKNode, BokehParallaxNode, SKLabelNode, WKMotionManager, NSString, SKSpriteNode, UIColor, NSArray;

@interface BokehParallaxScene : SKScene {

	float CAMERA_SPEED_X;
	float CAMERA_SPEED_Y;
	float CAMERA_DISTANCE;
	float DISTANCE_SCALE;
	float _filterCoefficient;
	NSMutableArray* _parallaxNodes;
	CGRect _cameraBounds;
	CGRect _worldBounds;
	CGRect _worldCameraBounds;
	SKEffectNode* _world;
	SKNode* _camera;
	BokehParallaxNode* _backdropNode;
	SKNode* _hudNode;
	SKLabelNode* _hudLabel;
	double _lastUpdate;
	double _dt;
	char _cameraWander;
	WKMotionManager* _motionManager;
	NSString* _bgImageName;
	SKSpriteNode* _bgImageNode;
	unsigned _baseFrameInterval;
	unsigned _stillFrameInterval;
	UIColor* _baseColor;
	double _timeLastGravitySample;

}

@property (assign) CGRect cameraBox; 
@property (readonly) CGRect bgBox; 
@property (assign) CGPoint cameraLocation; 
@property (assign) float previewScale; 
@property (assign) double timeLastGravitySample;              //@synthesize timeLastGravitySample=_timeLastGravitySample - In the implementation block
@property (readonly) NSArray * parallaxNodes; 
@property (assign) char cameraShouldWander; 
@property (assign) unsigned baseFrameInterval;                //@synthesize baseFrameInterval=_baseFrameInterval - In the implementation block
@property (assign) unsigned stillFrameInterval;               //@synthesize stillFrameInterval=_stillFrameInterval - In the implementation block
@property (assign) float filterCoefficient; 
@property (retain) NSString * bgImageName; 
@property (assign) float bgImageAlpha; 
@property (assign) float bgImageZPos; 
@property (retain) UIColor * baseColor;                       //@synthesize baseColor=_baseColor - In the implementation block
-(void)setBaseColor:(UIColor *)arg1 ;
-(void)didChangeSize:(CGSize)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)copy;
-(id)initWithSize:(CGSize)arg1 ;
-(void)update:(double)arg1 ;
-(void)setPaused:(char)arg1 ;
-(void)forceUpdate;
-(UIColor *)baseColor;
-(void)setTimeLastGravitySample:(double)arg1 ;
-(void)setBgImageName:(NSString *)arg1 ;
-(float)bgImageZPos;
-(void)updateParallaxNodes;
-(CGPoint)clampCameraPosition:(CGPoint)arg1 ;
-(CGRect)bgBox;
-(NSString *)bgImageName;
-(void)setCameraBox:(CGRect)arg1 ;
-(unsigned)stillFrameInterval;
-(float)filterCoefficient;
-(void)setup_parallaxNodes;
-(float)previewScale;
-(CGPoint)readGyro;
-(void)setup_world;
-(void)setFilterCoefficient:(float)arg1 ;
-(double)timeLastGravitySample;
-(unsigned)baseFrameInterval;
-(CGPoint)cameraLocation;
-(void)setCameraShouldWander:(char)arg1 ;
-(CGPoint)getCameraPositionFromNormalized:(CGPoint)arg1 ;
-(void)setBgImageAlpha:(float)arg1 ;
-(void)setStillFrameInterval:(unsigned)arg1 ;
-(char)cameraShouldWander;
-(void)setCameraLocation:(CGPoint)arg1 ;
-(void)moveCameraToRandomPoint;
-(CGRect)cameraBox;
-(void)addLabel:(id)arg1 toNode:(id)arg2 ;
-(float)bgImageAlpha;
-(void)setPreviewScale:(float)arg1 ;
-(void)setBaseFrameInterval:(unsigned)arg1 ;
-(void)computeCameraBox;
-(void)addParallaxNode:(id)arg1 ;
-(void)setBgImageZPos:(float)arg1 ;
-(NSArray *)parallaxNodes;
@end
