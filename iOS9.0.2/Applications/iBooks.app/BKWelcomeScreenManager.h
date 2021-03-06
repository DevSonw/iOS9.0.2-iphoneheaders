/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:13 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class BKLibrary, BKDatabase, NSDate;

@interface BKWelcomeScreenManager : NSObject {

	BKLibrary* _library;
	BKDatabase* _database;
	NSDate* _limitDate;
	/*^block*/id _completion;

}

@property (nonatomic,retain) BKLibrary * library;                //@synthesize library=_library - In the implementation block
@property (nonatomic,retain) BKDatabase * database;              //@synthesize database=_database - In the implementation block
@property (nonatomic,retain) NSDate * limitDate;                 //@synthesize limitDate=_limitDate - In the implementation block
@property (nonatomic,copy) id completion;                        //@synthesize completion=_completion - In the implementation block
+(void)initialize;
-(id)_libraryLoadedFuture;
-(void)_showStoreIfNeverShown;
-(void)_showStoreAfterLoadingBag;
-(void)_showLibrary;
-(void)_showStoreIfNeverShownRemotely;
-(void)_showStoreIfBagHasValidURL;
-(void)_showStore:(id)arg1 ;
-(void)_loadBag:(/*^block*/id)arg1 ;
-(NSDate *)limitDate;
-(void)_loadLibrary;
-(void)setLimitDate:(NSDate *)arg1 ;
-(BKLibrary *)library;
-(void)setLibrary:(BKLibrary *)arg1 ;
-(void)dealloc;
-(void)runWithCompletion:(/*^block*/id)arg1 ;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(void)setDatabase:(BKDatabase *)arg1 ;
-(BKDatabase *)database;
@end

