/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:11 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <AddressBookUI/ABPickerViewController.h>

@class NSArray, NSString, ABPropertyGroup, ABItemLabelPicker;

@interface ABLabelPickerViewController : ABPickerViewController {

	NSArray* _additionalLabels;
	NSString* _selectedLabel;
	void* _addressBook;
	ABPropertyGroup* _propertyGroup;
	int _itemIndex;
	ABItemLabelPicker* _labelPicker;
	char _didCreateNewLabel;

}

@property (nonatomic,retain) NSString * selectedLabel;              //@synthesize selectedLabel=_selectedLabel - In the implementation block
@property (assign,nonatomic) char didCreateNewLabel;                //@synthesize didCreateNewLabel=_didCreateNewLabel - In the implementation block
-(float)ab_heightToFitForViewInPopoverView;
-(NSString *)selectedLabel;
-(void)setSelectedLabel:(NSString *)arg1 ;
-(void)itemLabelPicker:(id)arg1 endedWithSelectionConfirmed:(char)arg2 animate:(char)arg3 ;
-(void)setDidCreateNewLabel:(char)arg1 ;
-(char)itemLabelPickerShouldDismissKeyboard:(id)arg1 ;
-(void)itemLabelPickerDidChangeSelection:(id)arg1 ;
-(void)itemLabelPicker:(id)arg1 deletedCustomLabel:(id)arg2 ;
-(void)itemLabelPickerDeletedLastCustomLabel:(id)arg1 ;
-(char)didCreateNewLabel;
-(CGSize)fullScreenContentSize;
-(id)labelPicker;
-(id)initWithAddressBook:(void*)arg1 propertyGroup:(id)arg2 itemIndex:(int)arg3 additionalLabels:(id)arg4 ;
-(void)setStyleProvider:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(void)loadView;
-(void)setEditing:(char)arg1 animated:(char)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(char)_allowsAutorotation;
-(void)_getRotationContentSettings:(SCD_Struct_AB0*)arg1 ;
@end

