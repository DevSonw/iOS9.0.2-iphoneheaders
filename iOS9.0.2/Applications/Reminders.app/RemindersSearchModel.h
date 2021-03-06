/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:57 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Reminders.app/Reminders
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class EKEventStore, NSMutableArray, NSString;

@interface RemindersSearchModel : NSObject {

	EKEventStore* _eventStore;
	NSMutableArray* _uncompletedSearchResults;
	NSMutableArray* _completedSearchResults;
	id _lastReminderFetch;
	NSString* _lastSearchQuery;

}
-(id)completedReminders;
-(void)_cancelLastFetch;
-(void)_refreshSearchResultsWithItems:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)uncompletedReminders;
-(void)performSearchWithText:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithEventStore:(id)arg1 ;
@end

