/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:32 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface SBIconAnimationContext : NSObject {

	float _fraction;
	/*^block*/id _completion;
	NSString* _identifier;
	double _delay;

}

@property (assign,nonatomic) double delay;                              //@synthesize delay=_delay - In the implementation block
@property (assign,nonatomic) float fraction;                            //@synthesize fraction=_fraction - In the implementation block
@property (nonatomic,copy) id completion;                               //@synthesize completion=_completion - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
-(void)setFraction:(float)arg1 ;
-(id)initWithNotificationIdentifier:(id)arg1 ;
-(float)fraction;
-(void)dealloc;
-(void)invalidate;
-(NSString *)identifier;
-(double)delay;
-(void)setDelay:(double)arg1 ;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
@end
