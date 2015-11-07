/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:57 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Reminders.app/Reminders
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, NSMutableDictionary, NSDate, ACAccountStore, NSMutableSet;

@interface RemindersRefreshController : NSObject {

	NSMutableArray* _calendarsPendingRefresh;
	char _isPendingRefreshForCalendarList;
	NSMutableDictionary* _lastCalendarRefreshDates;
	NSDate* _lastCalendarListRefreshDate;
	ACAccountStore* _accountStore;
	NSMutableSet* _allRemindersSyncingAccountIDs;
	char _paused;

}

@property (nonatomic,retain) NSDate * lastCalendarListRefreshDate;              //@synthesize lastCalendarListRefreshDate=_lastCalendarListRefreshDate - In the implementation block
+(id)sharedRefreshController;
-(void)scheduleRefreshForCalendarList;
-(void)pauseScheduledRefreshes;
-(void)resumeScheduledRefreshes;
-(void)scheduleRefreshForAllCalendars;
-(void)scheduleRefreshForCalendarWithIdentifier:(id)arg1 ;
-(id)_allRemindersSyncingAccountIDs;
-(void)setLastCalendarListRefreshDate:(NSDate *)arg1 ;
-(char)_needsRefreshForCalendarWithIdentifier:(id)arg1 ;
-(void)_refreshCalendarWithIdentifier:(id)arg1 ;
-(char)_needsRefreshForCalendarList;
-(void)_refreshCalendarList;
-(NSDate *)lastCalendarListRefreshDate;
-(void)dealloc;
-(void)_accountStoreDidChange:(id)arg1 ;
-(id)_accountStore;
@end
