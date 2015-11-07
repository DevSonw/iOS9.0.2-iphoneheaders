/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:17 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CAMediaTimingFunction;

@interface IMAnimationFloatFunction : NSObject {

	CAMediaTimingFunction* _timingFunction;
	float _startValue;
	float _endValue;
	float _speed;

}

@property (nonatomic,retain) CAMediaTimingFunction * timingFunction;              //@synthesize timingFunction=_timingFunction - In the implementation block
@property (assign,nonatomic) float startValue;                                    //@synthesize startValue=_startValue - In the implementation block
@property (assign,nonatomic) float endValue;                                      //@synthesize endValue=_endValue - In the implementation block
@property (assign,nonatomic) float speed;                                         //@synthesize speed=_speed - In the implementation block
-(id)initWithTimingFunction:(id)arg1 startValue:(float)arg2 endValue:(float)arg3 speed:(float)arg4 ;
-(float)solveForTime:(float)arg1 ;
-(float)endValue;
-(float)startValue;
-(id)init;
-(void)setSpeed:(float)arg1 ;
-(CAMediaTimingFunction *)timingFunction;
-(float)speed;
-(void)setTimingFunction:(CAMediaTimingFunction *)arg1 ;
-(void)setStartValue:(float)arg1 ;
-(void)setEndValue:(float)arg1 ;
@end
