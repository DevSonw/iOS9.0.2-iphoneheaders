/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:12 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface SUICAudioLevelSmoother : NSObject {

	float _minimumPower;
	float _maximumPower;
	int _historyLength;
	int _samplesSinceLastCleared;
	float* _runningPowerLevels;
	unsigned _powerPointer;
	float _previousLevel;
	float _attackVelocity;
	float _decayVelocity;
	char _usesExponentialCurve;
	char _usesAttackAndDecaySpeed;
	float _attackSpeed;
	float _decaySpeed;
	float _baseValue;
	float _exponentMultiplier;

}

@property (nonatomic,readonly) char usesExponentialCurve;                 //@synthesize usesExponentialCurve=_usesExponentialCurve - In the implementation block
@property (nonatomic,readonly) char usesAttackAndDecaySpeed;              //@synthesize usesAttackAndDecaySpeed=_usesAttackAndDecaySpeed - In the implementation block
@property (assign,nonatomic) float minimumPower;                          //@synthesize minimumPower=_minimumPower - In the implementation block
@property (assign,nonatomic) float maximumPower;                          //@synthesize maximumPower=_maximumPower - In the implementation block
@property (assign,nonatomic) float attackSpeed;                           //@synthesize attackSpeed=_attackSpeed - In the implementation block
@property (assign,nonatomic) float decaySpeed;                            //@synthesize decaySpeed=_decaySpeed - In the implementation block
@property (assign,nonatomic) float baseValue;                             //@synthesize baseValue=_baseValue - In the implementation block
@property (assign,nonatomic) float exponentMultiplier;                    //@synthesize exponentMultiplier=_exponentMultiplier - In the implementation block
-(void)setBaseValue:(float)arg1 ;
-(float)baseValue;
-(void)dealloc;
-(void)clearHistory;
-(float)_updateMedianWithNewValue:(float)arg1 ;
-(id)_initWithHistoryLength:(int)arg1 ;
-(id)initWithMinimumPower:(float)arg1 maximumPower:(float)arg2 historyLength:(int)arg3 ;
-(id)initWithMinimumPower:(float)arg1 maximumPower:(float)arg2 historyLength:(int)arg3 attackSpeed:(float)arg4 decaySpeed:(float)arg5 ;
-(id)initWithBaseValue:(float)arg1 exponentMultiplier:(float)arg2 historyLength:(int)arg3 ;
-(float)smoothedLevelForMicPower:(float)arg1 ;
-(char)usesExponentialCurve;
-(char)usesAttackAndDecaySpeed;
-(float)minimumPower;
-(void)setMinimumPower:(float)arg1 ;
-(float)maximumPower;
-(void)setMaximumPower:(float)arg1 ;
-(float)attackSpeed;
-(void)setAttackSpeed:(float)arg1 ;
-(float)decaySpeed;
-(void)setDecaySpeed:(float)arg1 ;
-(float)exponentMultiplier;
-(void)setExponentMultiplier:(float)arg1 ;
@end

