/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:12 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol BKLibraryBookCollectible <BKBookCoverAnimating>
@property (nonatomic,readonly) id<BKLibraryCollection> currentCollection; 
@property (nonatomic,readonly) char wantsTabBar; 
@required
-(id<BKLibraryCollection>)currentCollection;
-(void)setCollection:(id)arg1 animated:(char)arg2;
-(char)collectionNeedsUpdateForPresentingBook:(id)arg1;
-(id)setCollectionForBook:(id)arg1;
-(void)setCollectionForContentType:(int)arg1;
-(void)setCollection:(id)arg1 forTransition:(char)arg2;
-(char)wantsTabBar;
-(void)setCollection:(id)arg1;

@end

