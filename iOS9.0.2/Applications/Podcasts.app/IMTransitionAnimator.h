/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:55 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@protocol IMTransitionAnimatorDelegate;
@class NSString;

@interface IMTransitionAnimator : NSObject <UIViewControllerAnimatedTransitioning> {

	char _appearing;
	id<IMTransitionAnimatorDelegate> _delegate;
	double _duration;

}

@property (assign,nonatomic) double duration;                                               //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) char appearing;                                                //@synthesize appearing=_appearing - In the implementation block
@property (assign,nonatomic,__weak) id<IMTransitionAnimatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)willStartAnimation;
-(void)setAppearing:(char)arg1 ;
-(void)setDelegate:(id<IMTransitionAnimatorDelegate>)arg1 ;
-(id<IMTransitionAnimatorDelegate>)delegate;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(void)animationEnded:(char)arg1 ;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(char)appearing;
@end
