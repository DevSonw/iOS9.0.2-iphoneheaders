/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:35 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileCal/MainViewControllerContainer.h>

@class CompactWidthWeekViewController, LargeWeekViewController;

@interface WeekViewContainerViewController : MainViewControllerContainer {

	CompactWidthWeekViewController* _compactController;
	LargeWeekViewController* _regularController;

}

@property (nonatomic,retain) CompactWidthWeekViewController * compactController;              //@synthesize compactController=_compactController - In the implementation block
@property (nonatomic,retain) LargeWeekViewController * regularController;                     //@synthesize regularController=_regularController - In the implementation block
-(id)currentChildViewController;
-(id)pushedNextLevelMainViewControllerContainerAnimated:(char)arg1 ;
-(id)childViewControllerForUnknownTraits;
-(id)childViewControllerForRegularWidthCompactHeight;
-(id)childViewControllerForRegularWidthRegularHeight;
-(Class)childViewControllerClassForTraits:(id)arg1 ;
-(char)childViewControllerNeedsToBeInsettedFromNavigationElements;
-(LargeWeekViewController *)regularController;
-(void)setRegularController:(LargeWeekViewController *)arg1 ;
-(char)shouldRemoveSelfFromNavigationStackIfTraitCollectionIsUnsupported;
-(id)childViewControllerForCompactWidthCompactHeight;
-(CompactWidthWeekViewController *)compactController;
-(void)setCompactController:(CompactWidthWeekViewController *)arg1 ;
@end
