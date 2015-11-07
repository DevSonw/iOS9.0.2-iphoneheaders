/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:13 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/_UIBasicAnimationFactory.h>

@class CAMediaTimingFunction, NSString;

@interface BKCustomAnimationCurveFactory : NSObject <_UIBasicAnimationFactory> {

	CAMediaTimingFunction* _timingFunction;

}

@property (nonatomic,retain) CAMediaTimingFunction * timingFunction;              //@synthesize timingFunction=_timingFunction - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2 ;
-(id)_timingFunctionForAnimation;
-(CAMediaTimingFunction *)timingFunction;
-(void)setTimingFunction:(CAMediaTimingFunction *)arg1 ;
@end
