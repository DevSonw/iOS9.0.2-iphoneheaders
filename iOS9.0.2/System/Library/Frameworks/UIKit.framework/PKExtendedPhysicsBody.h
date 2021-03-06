/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:34 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <PhysicsKit/PKPhysicsBody.h>

@interface PKExtendedPhysicsBody : PKPhysicsBody {

	int _associations;
	float _areaFactor;

}

@property (assign,nonatomic) float normalizedDensity; 
+(id)bodyWithRectangleOfSize:(CGSize)arg1 ;
+(id)bodyWithRectangleOfSize:(CGSize)arg1 center:(CGPoint)arg2 ;
+(id)bodyWithCircleOfRadius:(float)arg1 ;
+(id)bodyWithEllipseInRect:(CGRect)arg1 ;
+(id)bodyWithPolygonFromPath:(CGPathRef)arg1 ;
+(id)bodyWithBodies:(id)arg1 ;
+(id)bodyWithEdgeLoopFromPath:(CGPathRef)arg1 ;
+(id)bodyWithEdgeFromPoint:(CGPoint)arg1 toPoint:(CGPoint)arg2 ;
+(id)bodyWithEdgeChainFromPath:(CGPathRef)arg1 ;
-(id)init;
-(id)description;
-(void)setNormalizedDensity:(float)arg1 ;
-(float)normalizedDensity;
-(char)dissociate;
-(void)associate;
-(id)initWithRectangleOfSize:(CGSize)arg1 ;
@end

