/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:23 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iCloudDriveApp.app/iCloudDriveApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iCloudDriveApp/iCloudDriveApp-Structs.h>
#import <UIKit/UIView.h>

@class CAShapeLayer, NSTimer, NSDate;

@interface RoundProgressView : UIView {

	CAShapeLayer* _sliceLayer;
	CAShapeLayer* _circleLayer;
	CGPoint _pieCenter;
	float _pieRadius;
	NSTimer* _progressTimer;
	float _uiProgress;
	float _realProgress;
	float _increaseRate;
	NSDate* _prevUpdateTime;
	int _style;
	float _progress;

}

@property (nonatomic,readonly) int style;                 //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) float progress;              //@synthesize progress=_progress - In the implementation block
-(void)setPieCenter:(CGPoint)arg1 ;
-(void)drawSlice;
-(void)_setupSubviews;
-(void)startProgressTimer;
-(void)resetProgress;
-(id)initWithFrame:(CGRect)arg1 ;
-(int)style;
-(void)setProgress:(float)arg1 ;
-(id)initWithFrame:(CGRect)arg1 style:(int)arg2 ;
-(float)progress;
-(void)stopProgressTimer;
-(void)setPieRadius:(float)arg1 ;
-(void)increaseUIProgress:(id)arg1 ;
-(float)toRadian:(float)arg1 ;
-(void)recalculateIncreaseProgress:(float)arg1 withTimeDiff:(double)arg2 ;
-(void)setInitialIncreaseRatePerFrame:(float)arg1 ;
@end

