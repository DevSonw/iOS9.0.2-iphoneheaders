/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:10 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Health.app/Health
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Health/WDAddDataViewController.h>
#import <Health/WDManualDataEntryTableViewCellDelegate.h>

@class NSDateFormatter, NSNumberFormatter, NSDate, NSMutableArray, UIDatePicker, WDManualDataEntryTableViewCell;

@interface WDDataUnitGroupAddDataViewController : WDAddDataViewController <WDManualDataEntryTableViewCellDelegate> {

	NSDateFormatter* _dateFormatter;
	NSDateFormatter* _timeFormatter;
	NSNumberFormatter* _numberFormatter;
	NSDate* _entryDate;
	NSDate* _entryTime;
	NSMutableArray* _cells;
	NSMutableArray* _dataEntryCells;
	UIDatePicker* _datePicker;
	UIDatePicker* _timePicker;
	WDManualDataEntryTableViewCell* _dateCell;
	WDManualDataEntryTableViewCell* _timeCell;

}
-(id)initWithDataUnitGroup:(id)arg1 controllerManager:(id)arg2 unitController:(id)arg3 initialStartDate:(id)arg4 ;
-(id)generateHKObjects;
-(void)setDataInputView:(id)arg1 ;
-(void)setDataDisplayName:(id)arg1 ;
-(double)extractValueFromCell:(id)arg1 ;
-(void)validateDataWithCompletion:(/*^block*/id)arg1 ;
-(void)manualDataEntryTableViewCell:(id)arg1 valueDidChangeToValue:(id)arg2 ;
-(id)_timePicker;
-(void)_addDataUnitCells;
-(id)_curEditCell;
-(void)_setDefaultValuesIfNecessary;
-(char)_manualEntryValueHasValidNumber:(id)arg1 ;
-(void)_iterateCellsWithFunction:(/*^block*/id)arg1 ;
-(id)_dateFromPickers;
-(void)_timePickerChanged:(id)arg1 ;
-(void)_updateCellWithCurrentBMI:(id)arg1 ;
-(void)localeDidChange:(id)arg1 ;
-(void)_datePickerChanged:(id)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(id)_datePicker;
-(void)setDataValue:(id)arg1 ;
@end
