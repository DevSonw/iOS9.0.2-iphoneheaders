/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:39 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/FUChartDataSetDataSource.h>

@protocol FUChartDataGroupDataSource;
@class NSArray, NSString;

@interface FUChartDataGroup : NSObject <FUChartDataSetDataSource> {

	id<FUChartDataGroupDataSource> _dataSource;
	NSArray* _dataSets;

}

@property (assign,nonatomic,__weak) id<FUChartDataGroupDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) NSArray * dataSets;                                            //@synthesize dataSets=_dataSets - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDataSource:(id<FUChartDataGroupDataSource>)arg1 ;
-(void)reloadData;
-(NSString *)description;
-(id<FUChartDataGroupDataSource>)dataSource;
-(id)dataSetAtIndex:(unsigned)arg1 ;
-(id)minXValue;
-(id)maxXValue;
-(unsigned)numberOfDataPointsForDataSet:(id)arg1 ;
-(id)dataSet:(id)arg1 chartPointForIndex:(unsigned)arg2 ;
-(id)dataPointsForSet:(id)arg1 ;
-(id)labelsForSet:(id)arg1 ;
-(unsigned)_getNumberOfDataSets;
-(id)_dataSetAtIndexCreateIfNecessary:(unsigned)arg1 ;
-(void)_reloadDataSet:(id)arg1 ;
-(unsigned)_getNumberOfDataPointsInSetAtIndex:(unsigned)arg1 ;
-(id)_getPointForSetAtIndex:(unsigned)arg1 pointIndex:(unsigned)arg2 ;
-(id)_getPointsForSetAtIndex:(unsigned)arg1 ;
-(id)_getLabelsForSetAtIndex:(unsigned)arg1 ;
-(unsigned)numberOfDataSets;
-(void)reloadDataInSetAtIndex:(unsigned)arg1 ;
-(void)reloadDataPointInSetAtIndex:(unsigned)arg1 pointIndex:(unsigned)arg2 ;
-(void)addDataPointWithXValue:(float)arg1 yValue:(float)arg2 setIndex:(unsigned)arg3 ;
-(void)removeDataPointFromSetAtIndex:(unsigned)arg1 pointIndex:(unsigned)arg2 ;
-(NSArray *)dataSets;
-(void)setDataSets:(NSArray *)arg1 ;
-(id)minYValue;
-(id)maxYValue;
@end

