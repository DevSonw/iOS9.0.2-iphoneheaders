/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:06 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/FindMyFriends.app/FindMyFriends
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FindMyFriends/FindMyFriends-Structs.h>
#import <UIKit/UITableViewController.h>
#import <FindMyFriends/MigrationPresenter.h>
#import <FindMyFriends/AccountEmailViewControllerDelegate.h>
#import <FindMyFriends/LabelViewControllerDelegate.h>
#import <FindMyFriends/MeTableFooterDelegate.h>
#import <UIKit/UITextViewDelegate.h>

@protocol MeTableViewControllerDelegate;
@class NSString, NSDictionary, UIViewController, UIPopoverController, UINavigationController, MeDetailNotificationTableViewCell;

@interface MeTableViewController : UITableViewController <MigrationPresenter, AccountEmailViewControllerDelegate, LabelViewControllerDelegate, MeTableFooterDelegate, UITextViewDelegate> {

	char _allowFriendRequests;
	char _initialAllowFriendRequests;
	id<MeTableViewControllerDelegate> _delegate;
	NSString* _primaryEmail;
	NSString* _deviceBeingRemoved;
	NSString* _initialMeDeviceId;
	NSString* _selectedMeDeviceId;
	NSString* _initialFenceAlertPref;
	NSString* _selectedFenceAlertPref;
	NSDictionary* _realToIdealSectionMap;
	UIViewController* _migrationViewController;
	UIPopoverController* _popover;
	UINavigationController* _navDelegate;
	MeDetailNotificationTableViewCell* _labelNotificationCell;
	NSString* _currentUserID;

}

@property (assign,nonatomic,__weak) id<MeTableViewControllerDelegate> delegate;                             //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSString * primaryEmail;                                                       //@synthesize primaryEmail=_primaryEmail - In the implementation block
@property (nonatomic,retain) NSString * deviceBeingRemoved;                                                 //@synthesize deviceBeingRemoved=_deviceBeingRemoved - In the implementation block
@property (assign,nonatomic) char allowFriendRequests;                                                      //@synthesize allowFriendRequests=_allowFriendRequests - In the implementation block
@property (assign,nonatomic) char initialAllowFriendRequests;                                               //@synthesize initialAllowFriendRequests=_initialAllowFriendRequests - In the implementation block
@property (nonatomic,retain) NSString * initialMeDeviceId;                                                  //@synthesize initialMeDeviceId=_initialMeDeviceId - In the implementation block
@property (nonatomic,retain) NSString * selectedMeDeviceId;                                                 //@synthesize selectedMeDeviceId=_selectedMeDeviceId - In the implementation block
@property (nonatomic,retain) NSString * initialFenceAlertPref;                                              //@synthesize initialFenceAlertPref=_initialFenceAlertPref - In the implementation block
@property (nonatomic,retain) NSString * selectedFenceAlertPref;                                             //@synthesize selectedFenceAlertPref=_selectedFenceAlertPref - In the implementation block
@property (nonatomic,retain) NSDictionary * realToIdealSectionMap;                                          //@synthesize realToIdealSectionMap=_realToIdealSectionMap - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * migrationViewController;                             //@synthesize migrationViewController=_migrationViewController - In the implementation block
@property (assign,nonatomic,__weak) UIPopoverController * popover;                                          //@synthesize popover=_popover - In the implementation block
@property (assign,nonatomic,__weak) UINavigationController * navDelegate;                                   //@synthesize navDelegate=_navDelegate - In the implementation block
@property (assign,nonatomic,__weak) MeDetailNotificationTableViewCell * labelNotificationCell;              //@synthesize labelNotificationCell=_labelNotificationCell - In the implementation block
@property (nonatomic,retain) NSString * currentUserID;                                                      //@synthesize currentUserID=_currentUserID - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)migrationCancelling;
-(id)loggedInAs;
-(void)dismissMigrationFinished;
-(void)labelViewControllerDidComplete:(id)arg1 ;
-(void)showMigrationUI;
-(void)setNavDelegate:(UINavigationController *)arg1 ;
-(void)selectedEmailDidChange:(id)arg1 ;
-(UINavigationController *)navDelegate;
-(void)setAllowFriendRequests:(char)arg1 ;
-(char)allowFriendRequests;
-(void)setInitialMeDeviceId:(NSString *)arg1 ;
-(void)setSelectedMeDeviceId:(NSString *)arg1 ;
-(void)setInitialAllowFriendRequests:(char)arg1 ;
-(void)setInitialFenceAlertPref:(NSString *)arg1 ;
-(NSString *)initialFenceAlertPref;
-(void)setSelectedFenceAlertPref:(NSString *)arg1 ;
-(void)configureSectionMap;
-(void)verifySameUser;
-(void)accountPrefsDidChange:(id)arg1 ;
-(void)reloadTableView;
-(void)setCurrentUserID:(NSString *)arg1 ;
-(NSString *)currentUserID;
-(int)idealSection:(int)arg1 ;
-(int)numberOfRowsInIdealSection:(int)arg1 ;
-(void)setDeviceBeingRemoved:(NSString *)arg1 ;
-(NSString *)deviceBeingRemoved;
-(char)hasFencesToPreview;
-(void)setLabelNotificationCell:(MeDetailNotificationTableViewCell *)arg1 ;
-(id)getTableViewCellOfStyle:(int)arg1 ;
-(void)switchSwitched:(id)arg1 ;
-(NSString *)selectedFenceAlertPref;
-(id)locationServicesOffFooterView;
-(float)heightForSMLOffMessage;
-(float)heightForActiveDeviceMessage;
-(void)chooseLabelButtonTapped:(id)arg1 ;
-(MeDetailNotificationTableViewCell *)labelNotificationCell;
-(void)presentNotifyOthers;
-(void)setRealToIdealSectionMap:(NSDictionary *)arg1 ;
-(NSString *)selectedMeDeviceId;
-(NSDictionary *)realToIdealSectionMap;
-(UIViewController *)migrationViewController;
-(void)setMigrationViewController:(UIViewController *)arg1 ;
-(char)shouldUpdateNavigationBar;
-(void)notifyOthersButtonTapped:(id)arg1 ;
-(id)myAddress;
-(char)initialAllowFriendRequests;
-(NSString *)initialMeDeviceId;
-(void)saveChanges;
-(int)numberOfRealSections;
-(void)cancel;
-(void)setDelegate:(id<MeTableViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(int)arg3 ;
-(void)tableView:(id)arg1 willDisplayFooterView:(id)arg2 forSection:(int)arg3 ;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(float)tableView:(id)arg1 heightForFooterInSection:(int)arg2 ;
-(float)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(int)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(char)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id<MeTableViewControllerDelegate>)delegate;
-(id)leftBarButtonItem;
-(id)rightBarButtonItem;
-(CGSize)preferredContentSize;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)done;
-(char)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 ;
-(UIPopoverController *)popover;
-(void)setPopover:(UIPopoverController *)arg1 ;
-(NSString *)primaryEmail;
-(void)setPrimaryEmail:(NSString *)arg1 ;
@end
