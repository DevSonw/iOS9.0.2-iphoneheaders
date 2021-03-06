/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:10 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Health.app/Health
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Health/WDSampleListDataProvider.h>

@protocol HKNumberFormatter;
@interface WDCervicalMucusQualityListDataProvider : WDSampleListDataProvider {

	id<HKNumberFormatter> _numberFormatter;

}
-(id)sampleTypes;
-(id)dataListViewController:(id)arg1 textForObject:(id)arg2 ;
-(id)dataListViewController:(id)arg1 textForObjectWithUnits:(id)arg2 ;
-(id)initWithDataUnitGroup:(id)arg1 controllerManager:(id)arg2 unitController:(id)arg3 ;
-(id)restorationIdentifier;
@end

