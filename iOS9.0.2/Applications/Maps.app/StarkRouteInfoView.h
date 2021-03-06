/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:30 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIView.h>

@class TwoPartETALabel, TwoPartTimeLabel, TwoPartDistanceLabel, MapsAutoLayoutContext, MNGuidanceETA;

@interface StarkRouteInfoView : UIView {

	TwoPartETALabel* _ETALabel;
	TwoPartTimeLabel* _timeLabel;
	TwoPartDistanceLabel* _distanceLabel;
	MapsAutoLayoutContext* _layoutContext;

}

@property (nonatomic,retain) MNGuidanceETA * latestETA; 
-(void)setLatestETA:(MNGuidanceETA *)arg1 ;
-(double)totalRemainingTime;
-(double)totalRemainingDistance;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)updateConstraints;
@end

