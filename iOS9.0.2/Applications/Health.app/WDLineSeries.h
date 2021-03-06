/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:10 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Health.app/Health
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Health/Health-Structs.h>
#import <Health/WDChartSeries.h>

@class NSArray, UIColor, WDGradientObject;

@interface WDLineSeries : WDChartSeries {

	NSArray* _dataPoints;
	int _waveForm;
	float _lineWidth;
	UIColor* _lineColor;
	WDGradientObject* _fillGradient;
	WDGradientObject* _secondaryFillGradient;
	UIColor* _pointColor;
	int _pointStyle;
	float _pointRadius;
	float _pointLineWidth;
	float _sineWaveSmoothingFactor;

}

@property (assign,nonatomic) int waveForm;                                          //@synthesize waveForm=_waveForm - In the implementation block
@property (assign,nonatomic) float lineWidth;                                       //@synthesize lineWidth=_lineWidth - In the implementation block
@property (nonatomic,retain) UIColor * lineColor;                                   //@synthesize lineColor=_lineColor - In the implementation block
@property (nonatomic,retain) WDGradientObject * fillGradient;                       //@synthesize fillGradient=_fillGradient - In the implementation block
@property (nonatomic,retain) WDGradientObject * secondaryFillGradient;              //@synthesize secondaryFillGradient=_secondaryFillGradient - In the implementation block
@property (nonatomic,retain) UIColor * pointColor;                                  //@synthesize pointColor=_pointColor - In the implementation block
@property (assign,nonatomic) int pointStyle;                                        //@synthesize pointStyle=_pointStyle - In the implementation block
@property (assign,nonatomic) float pointRadius;                                     //@synthesize pointRadius=_pointRadius - In the implementation block
@property (assign,nonatomic) float pointLineWidth;                                  //@synthesize pointLineWidth=_pointLineWidth - In the implementation block
@property (assign,nonatomic) float sineWaveSmoothingFactor;                         //@synthesize sineWaveSmoothingFactor=_sineWaveSmoothingFactor - In the implementation block
-(void)renderFillInContext:(CGContextRef)arg1 ;
-(void)renderChartInContext:(CGContextRef)arg1 ;
-(float)pointLineWidth;
-(void)setPointLineWidth:(float)arg1 ;
-(void)prepareForRenderingWithSize:(CGSize)arg1 minXValue:(id)arg2 maxXValue:(id)arg3 minYValue:(id)arg4 maxYValue:(id)arg5 insets:(UIEdgeInsets)arg6 dataSet:(id)arg7 ;
-(void)renderSecondaryFillInContext:(CGContextRef)arg1 ;
-(void)setSecondaryFillGradient:(WDGradientObject *)arg1 ;
-(id)_getPointsFromDataSet;
-(void)_addPointClipToContext:(CGContextRef)arg1 ;
-(void)_renderLineInContext:(CGContextRef)arg1 ;
-(void)_renderPointMarkersInContext:(CGContextRef)arg1 ;
-(char)_clipPathForGaps:(char)arg1 context:(CGContextRef)arg2 ;
-(void)_renderFillInContext:(CGContextRef)arg1 gradient:(id)arg2 ;
-(void)_enumerateGapsAndConnectedRegionsWithConnectedHandler:(/*^block*/id)arg1 gapHandler:(/*^block*/id)arg2 ;
-(void)_renderChartPoint:(id)arg1 atPosition:(CGPoint)arg2 context:(CGContextRef)arg3 shouldApplyToCurrentState:(char)arg4 ;
-(void)_enumerateGapsAndConnectedPointsWithPointHandler:(/*^block*/id)arg1 gapHandler:(/*^block*/id)arg2 ;
-(id)_pathForData:(id)arg1 waveForm:(int)arg2 mustBeClosed:(char)arg3 ;
-(id)_sawToothPathForData:(id)arg1 mustBeClosed:(char)arg2 ;
-(WDGradientObject *)secondaryFillGradient;
-(void)setLineColor:(UIColor *)arg1 ;
-(UIColor *)lineColor;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(float)lineWidth;
-(void)setLineWidth:(float)arg1 ;
-(id)_getPointValuesAtIndexes:(id)arg1 ;
-(id)_pathForData:(id)arg1 ;
-(id)_fillPathForData:(id)arg1 ;
-(id)_fillPathForData:(id)arg1 waveForm:(int)arg2 ;
-(id)_sineWavePathForData:(id)arg1 ;
-(id)_squarePathForData:(id)arg1 ;
-(WDGradientObject *)fillGradient;
-(void)setFillGradient:(WDGradientObject *)arg1 ;
-(UIColor *)pointColor;
-(void)setPointColor:(UIColor *)arg1 ;
-(int)pointStyle;
-(void)setPointStyle:(int)arg1 ;
-(float)pointRadius;
-(void)setPointRadius:(float)arg1 ;
-(void)setWaveForm:(int)arg1 ;
-(int)waveForm;
-(float)sineWaveSmoothingFactor;
-(void)setSineWaveSmoothingFactor:(float)arg1 ;
@end

