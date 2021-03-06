/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:05 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/FindMyFriends.app/FindMyFriends
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FindMyFriends/FindMyFriends-Structs.h>
#import <UIKit/UITableViewController.h>
#import <UIKit/UIViewControllerPreviewingDelegate_Deprecated.h>
#import <UIKit/UITableViewDataSource.h>

@protocol FriendListTableViewDelegate;
@class NSArray, NSTimer, UIView, NSString;

@interface FriendListTableViewController : UITableViewController <UIViewControllerPreviewingDelegate_Deprecated, UITableViewDataSource> {

	char _isDismissingMasterPane;
	char _needsFullReload;
	char _isSelectingRow;
	char _isAnimatedUpdate;
	id<FriendListTableViewDelegate> _delegate;
	NSArray* _allFriends;
	id _appActiveNotification;
	float _calculatedRowHeight;
	id _preferredTextSizeChangedNotification;
	NSTimer* _reloadTimer;
	NSTimer* _maximumReloadTimer;
	id _selectedEntity;
	UIView* _sourceView;

}

@property (assign,nonatomic,__weak) id<FriendListTableViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSArray * allFriends;                                         //@synthesize allFriends=_allFriends - In the implementation block
@property (nonatomic,retain) id appActiveNotification;                                     //@synthesize appActiveNotification=_appActiveNotification - In the implementation block
@property (assign,nonatomic) char isDismissingMasterPane;                                  //@synthesize isDismissingMasterPane=_isDismissingMasterPane - In the implementation block
@property (assign,nonatomic) float calculatedRowHeight;                                    //@synthesize calculatedRowHeight=_calculatedRowHeight - In the implementation block
@property (nonatomic,retain) id preferredTextSizeChangedNotification;                      //@synthesize preferredTextSizeChangedNotification=_preferredTextSizeChangedNotification - In the implementation block
@property (nonatomic,retain) NSTimer * reloadTimer;                                        //@synthesize reloadTimer=_reloadTimer - In the implementation block
@property (nonatomic,retain) NSTimer * maximumReloadTimer;                                 //@synthesize maximumReloadTimer=_maximumReloadTimer - In the implementation block
@property (assign,nonatomic,__weak) id selectedEntity;                                     //@synthesize selectedEntity=_selectedEntity - In the implementation block
@property (assign,nonatomic) char needsFullReload;                                         //@synthesize needsFullReload=_needsFullReload - In the implementation block
@property (assign,nonatomic) char isSelectingRow;                                          //@synthesize isSelectingRow=_isSelectingRow - In the implementation block
@property (assign,nonatomic) char isAnimatedUpdate;                                        //@synthesize isAnimatedUpdate=_isAnimatedUpdate - In the implementation block
@property (nonatomic,retain) UIView * sourceView;                                          //@synthesize sourceView=_sourceView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setSelectedEntity:(id)arg1 ;
-(id)selectedEntity;
-(void)reloadFMFData:(id)arg1 ;
-(void)calculatePreferredCellHeight;
-(void)reloadFriendTable;
-(void)reloadFriendTableWithoutAnimation;
-(void)showHideTableView;
-(void)viewSizeDidTransition;
-(void)finishedLocatingFriends;
-(void)setupShortcuts;
-(void)setAppActiveNotification:(id)arg1 ;
-(void)setPreferredTextSizeChangedNotification:(id)arg1 ;
-(NSTimer *)reloadTimer;
-(void)setReloadTimer:(NSTimer *)arg1 ;
-(NSTimer *)maximumReloadTimer;
-(void)setMaximumReloadTimer:(NSTimer *)arg1 ;
-(id)appActiveNotification;
-(id)preferredTextSizeChangedNotification;
-(void)selectRowForEntityAnimated:(char)arg1 ;
-(void)setNeedsFullReload:(char)arg1 ;
-(void)_updateSelection:(id)arg1 animate:(char)arg2 scrollPosition:(int)arg3 ;
-(void)reselectRow;
-(NSArray *)allFriends;
-(void)setCalculatedRowHeight:(float)arg1 ;
-(char)needsFullReload;
-(void)setReloadTimer;
-(void)fireReloadTimer;
-(char)isAnimatedUpdate;
-(void)animateTableViewUpdates:(id)arg1 ;
-(void)setIsAnimatedUpdate:(char)arg1 ;
-(char)friendExist:(id)arg1 inList:(id)arg2 ;
-(int)indexForFriend:(id)arg1 inList:(id)arg2 ;
-(char)drawFullLineWidth:(id)arg1 forFriends:(id)arg2 ;
-(float)calculatedRowHeight;
-(float)heightForRowAtIndexPath:(id)arg1 ;
-(void)recalculateRowHeightForCalculatedHeight:(float)arg1 ;
-(void)setIsSelectingRow:(char)arg1 ;
-(char)isDismissingMasterPane;
-(void)setIsDismissingMasterPane:(char)arg1 ;
-(char)isSelectingRow;
-(void)setAllFriends:(NSArray *)arg1 ;
-(void)setDelegate:(id<FriendListTableViewDelegate>)arg1 ;
-(void)dealloc;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(float)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 editActionsForRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(char)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id<FriendListTableViewDelegate>)delegate;
-(void)awakeFromNib;
-(float)tableViewSpacingForExtraSeparators:(id)arg1 ;
-(UIView *)sourceView;
-(void)setSourceView:(UIView *)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(id)committedViewControllerForPreviewViewController:(id)arg1 ;
-(id)previewViewControllerForLocation:(CGPoint)arg1 inSourceView:(id)arg2 ;
-(id)previewViewControllerForPosition:(CGPoint)arg1 inSourceView:(id)arg2 ;
-(void)commitPreviewViewController:(id)arg1 committedViewController:(id)arg2 ;
-(void)performCommitTransitionForPreviewViewController:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)willPresentPreviewViewController:(id)arg1 forLocation:(CGPoint)arg2 inSourceView:(id)arg3 ;
-(void)didDismissPreviewViewController:(id)arg1 committing:(char)arg2 ;
-(void)selectionChanged:(id)arg1 ;
-(void)removeItemAtIndex:(id)arg1 ;
-(void)mapTypeChanged:(unsigned)arg1 ;
@end

