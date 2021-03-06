/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:08:21 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/NotificationsSettings.bundle/NotificationsSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@protocol SortOrderSelectionViewControllerDelegate;
@class NSMutableArray, PSSpecifier;

@interface SortOrderSelectionViewController : PSListController {

	NSMutableArray* _sections;
	int _orderRule;
	int _recentsOrderRule;
	PSSpecifier* _emptyCell;
	id<SortOrderSelectionViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SortOrderSelectionViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setSortOrderRule:(int)arg1 recentsOrderRule:(int)arg2 ;
-(void)setMode:(id)arg1 specifier:(id)arg2 ;
-(id)_specifiersFrom:(id)arg1 ;
-(void)_toggleAppListVisibleForRule:(int)arg1 ;
-(id)_filterNotInNotificationCenterSections:(id)arg1 ;
-(id)specifiers;
-(void)setDelegate:(id<SortOrderSelectionViewControllerDelegate>)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(char)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3 ;
-(char)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(char)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(id<SortOrderSelectionViewControllerDelegate>)delegate;
-(void)viewDidLoad;
-(void)viewWillDisappear:(char)arg1 ;
-(void)setSections:(id)arg1 ;
@end

