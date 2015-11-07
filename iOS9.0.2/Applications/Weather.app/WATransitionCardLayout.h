/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:13:03 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Weather.app/Weather
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Weather/Weather-Structs.h>
#import <Weather/WACardLayout.h>

@class NSIndexPath;

@interface WATransitionCardLayout : WACardLayout {

	float _pivotHeight;
	NSIndexPath* _pivotIndexPath;

}

@property (nonatomic,retain) NSIndexPath * pivotIndexPath;              //@synthesize pivotIndexPath=_pivotIndexPath - In the implementation block
-(CGRect)frameForItem:(int)arg1 ;
-(NSIndexPath *)pivotIndexPath;
-(void)setPivotIndexPath:(NSIndexPath *)arg1 ;
-(void)prepareLayout;
-(CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 ;
@end
