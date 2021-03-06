/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:13 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface BKLibraryUtilities : NSObject
+(id)excludeDeletedBooksPredicate;
+(id)predicateForLocalBooksInSeries;
+(id)predicateForFlaggedBooksInSeries;
+(id)predicateForLocalBooksWithSeriesID:(id)arg1 ;
+(char)isExplicitMaterialAllowed;
+(id)predicateForLocalBooks;
+(id)predicateForSeriesCollections;
+(id)predicateForSeriesItemsInTheStore;
+(id)predicateForCloudBooks;
+(id)predicateForPurchasedBooks;
+(id)predicateForExcludingSeriesContainers;
+(id)predicateForAllBooksWithSeriesID:(id)arg1 ;
+(id)predicateForSeriesContainerWithSeriesID:(id)arg1 ;
+(id)predicateForAllBooksWithSeriesID:(id)arg1 forcefullyIncludePurchasedBooks:(char)arg2 ;
+(id)predicateForBooksWithBumpableHighWaterMarks;
+(id)_basePredicateForcingPurchasedBooks:(char)arg1 ;
+(id)_predicateToExcludeCloudBooks;
+(id)_basePredicate;
+(id)predicateForBooksInCollections;
+(id)_predicateForNonSeriesBooks;
+(id)_predicateForBooksOrContainersWithSeriesID:(id)arg1 ;
+(id)_predicateExcludingSeriesContainers;
+(id)predicateForSearchableBooks;
+(id)_predicateForBooksShownInAllBooksShowingPurchases:(char)arg1 ;
+(id)predicateForBooksInAllBooks;
+(id)predicateForBooksInAllAudioBooks;
+(id)predicateForBooksInAllPDFs;
+(id)predicateForStoreBooks;
+(id)predicateForBooksInSeries;
+(id)linearDocumentPredicateForDatabaseKey:(id)arg1 ;
+(id)predicateForBooksMatchingSearchText:(id)arg1 ;
@end

