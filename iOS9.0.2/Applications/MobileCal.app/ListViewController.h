/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:34 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileCal/MobileCal-Structs.h>
#import <MobileCal/MainViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <libobjc.A.dylib/ABPersonViewControllerDelegate.h>
#import <MobileCal/ListTableViewDelegate.h>
#import <libobjc.A.dylib/EKEventViewDelegatePrivate.h>
#import <libobjc.A.dylib/EKEventViewDelegate.h>
#import <UIKit/UIViewControllerPreviewingDelegate.h>
#import <MobileCal/MainViewControllerOptionalMethods.h>
#import <UIKit/UISearchBarDelegate.h>
#import <UIKit/UITableViewDelegate.h>

@protocol UIViewControllerPreviewing, ListViewControllerDelegate;
@class NSDate, NSIndexPath, EKUIRecurrenceAlertController, NSUserActivity, EKCalendarDate, CalendarModel, UINavigationItem, ListTableView, UITableView, NSString, UITraitCollection;

@interface ListViewController : MainViewController <UITableViewDataSource, ABPersonViewControllerDelegate, ListTableViewDelegate, EKEventViewDelegatePrivate, EKEventViewDelegate, UIViewControllerPreviewingDelegate, MainViewControllerOptionalMethods, UISearchBarDelegate, UITableViewDelegate> {

	NSDate* _currentYearStart;
	NSDate* _currentYearEnd;
	int _canUseTwoPartHeaderString;
	NSIndexPath* _swipedRow;
	EKUIRecurrenceAlertController* _recurrenceAlertController;
	NSUserActivity* _userActivity;
	char _needsRefresh;
	char _isVisible;
	EKCalendarDate* _dateToShowWhenVisible;
	char _editorDismissedFromDelete;
	char _needsTableReload;
	id<UIViewControllerPreviewing> _viewControllerPreviewingRegistration;
	char _allowExtendedHeightCells;
	char _showFilteredData;
	char _occurrenceCacheIsUnavailable;
	CalendarModel* _model;
	id<ListViewControllerDelegate> _delegate;
	UINavigationItem* _navItem;
	ListTableView* _tableView;

}

@property (nonatomic,retain) CalendarModel * model;                                                        //@synthesize model=_model - In the implementation block
@property (assign,nonatomic) char allowExtendedHeightCells;                                                //@synthesize allowExtendedHeightCells=_allowExtendedHeightCells - In the implementation block
@property (nonatomic,retain) id<ListViewControllerDelegate> delegate;                                      //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char showFilteredData;                                                        //@synthesize showFilteredData=_showFilteredData - In the implementation block
@property (nonatomic,readonly) char occurrenceCacheIsUnavailable;                                          //@synthesize occurrenceCacheIsUnavailable=_occurrenceCacheIsUnavailable - In the implementation block
@property (nonatomic,readonly) UITableView * tableViewForTesting; 
@property (nonatomic,retain) UINavigationItem * navItem;                                                   //@synthesize navItem=_navItem - In the implementation block
@property (nonatomic,retain) ListTableView * tableView;                                                    //@synthesize tableView=_tableView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UITraitCollection * traitCollection; 
@property (nonatomic,retain) UITraitCollection * futureTraitCollection; 
@property (nonatomic,readonly) char isTransitioningTraitCollection; 
@property (assign,nonatomic) char isWaitingForBackgroundLoadingOfSelectedEventOccurrenceView; 
@property (nonatomic,readonly) char shouldAdaptEventViewControllers; 
-(id)noContentStringForListTableView:(id)arg1 ;
-(char)occurrenceCacheIsUnavailable;
-(void)_removeAllObservers;
-(void)setupViewConstraints;
-(void)_addAllObservers;
-(void)scrollToSelectedDateAnimated:(char)arg1 ;
-(char)showFilteredData;
-(char)_selectedDateIsVisible;
-(void)_setTopVisibleDateAsSelectedDate;
-(void)showEvent:(id)arg1 animated:(char)arg2 showDetails:(char)arg3 ;
-(void)showEvent:(id)arg1 animated:(char)arg2 showDetails:(char)arg3 showComments:(char)arg4 ;
-(id)backButtonTitleForEventDetails;
-(void)selectDate:(id)arg1 animated:(char)arg2 ;
-(void)_setTopVisibleDateAsSelectedDateAndUpdateBackButton;
-(void)refreshIfNeeded;
-(char)shouldAutoScrollToSelectedDateAfterFirstRefresh;
-(void)scrollToDate:(id)arg1 animated:(char)arg2 ;
-(id)_dateForFirstVisibleRow;
-(id)_indexPathForDate:(id)arg1 ;
-(char)shouldUpdateModelSelectedDate;
-(void)_updateBackButtonOnBackViewControllerToDate:(id)arg1 ;
-(id)_eventForRowAtIndexPath:(id)arg1 ;
-(id)_indexPathForEvent:(id)arg1 ;
-(void)_timeChangedSignificantly:(id)arg1 ;
-(void)_receivedSelectedDateChangeNotification:(id)arg1 ;
-(void)_contentCategorySizeChangedNotification:(id)arg1 ;
-(char)_isDateInCurrentYear:(id)arg1 ;
-(id)_stringForHeaderDate:(id)arg1 ;
-(void)showEvent:(id)arg1 animated:(char)arg2 ;
-(char)_processScrollingMessagesOnEveryFrameFromListViewController;
-(void)_clearSwipedRow;
-(void)_deleteEventAtIndexPath:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(char)shouldPushNextLevelViewControllerWhenTodayIsVisible;
-(id)bestDateForNewEvent;
-(char)showEventDetailsWhenNewEventAdded;
-(char)isTodayVisible;
-(char)allowsOverriddenRightNavigationBarItems;
-(char)allowsOverriddenToolbarItems;
-(void)_selectTodayDate;
-(UITableView *)tableViewForTesting;
-(id)defaultEventForSelectedDate;
-(void)selectEvent:(id)arg1 animated:(char)arg2 ;
-(char)allowExtendedHeightCells;
-(void)setAllowExtendedHeightCells:(char)arg1 ;
-(void)setShowFilteredData:(char)arg1 ;
-(UINavigationItem *)navItem;
-(void)setNavItem:(UINavigationItem *)arg1 ;
-(void)_eventStoreChanged:(id)arg1 ;
-(char)personViewController:(id)arg1 shouldPerformDefaultActionForPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4 ;
-(void)eventViewController:(id)arg1 willDismissEditViewController:(id)arg2 deleted:(char)arg3 ;
-(void)eventViewControllerWillDisappear:(id)arg1 ;
-(void)eventViewController:(id)arg1 didCompleteWithAction:(int)arg2 ;
-(void)setDelegate:(id<ListViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(int)arg3 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2 ;
-(void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(NSString *)description;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3 ;
-(id<ListViewControllerDelegate>)delegate;
-(float)contentInset;
-(void)loadView;
-(ListTableView *)tableView;
-(id)tableView:(id)arg1 titleForSwipeAccessoryButtonForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 swipeAccessoryButtonPushedForRowAtIndexPath:(id)arg2 ;
-(void)setTableView:(ListTableView *)arg1 ;
-(char)tableView:(id)arg1 wantsHeaderForSection:(int)arg2 ;
-(CalendarModel *)model;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(id)previewingContext:(id)arg1 viewControllerForLocation:(CGPoint)arg2 ;
-(void)previewingContext:(id)arg1 commitViewController:(id)arg2 ;
-(id)initWithModel:(id)arg1 ;
-(void)setModel:(CalendarModel *)arg1 ;
-(char)_isVisible;
-(void)_localeChanged:(id)arg1 ;
-(void)setNeedsRefresh:(char)arg1 ;
-(void)refresh;
@end

