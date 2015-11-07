/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:03 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthKitUI/HealthKitUI-Structs.h>
#import <libobjc.A.dylib/HKGraphSeriesBlockCoordinate.h>

@class NSString;

@interface _HKLineSeriesBlockCoordinate : NSObject <HKGraphSeriesBlockCoordinate> {

	id _userInfo;
	CGPoint _coordinate;

}

@property (nonatomic,readonly) CGPoint coordinate;                  //@synthesize coordinate=_coordinate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) float startXValue; 
@property (nonatomic,readonly) float endXValue; 
@property (nonatomic,readonly) id userInfo; 
-(CGPoint)coordinate;
-(NSString *)description;
-(id)userInfo;
-(float)startXValue;
-(id)copyWithTransform:(CGAffineTransform)arg1 roundToViewScale:(char)arg2 ;
-(float)endXValue;
-(float)minYValue;
-(float)maxYValue;
-(id)initWithCoordinate:(CGPoint)arg1 userInfo:(id)arg2 ;
@end
