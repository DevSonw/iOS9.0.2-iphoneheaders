/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:13:02 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Videos.app/Videos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayerUI/MPUCompletionQueryDataSource.h>

@class MPMediaItemCollection, NSURL;

@interface VideosTVSeasonEpisodesDataSource : MPUCompletionQueryDataSource {

	MPMediaItemCollection* _tvSeason;
	NSURL* _bestStoreURL;

}

@property (nonatomic,readonly) NSURL * bestStoreURL; 
-(id)initWithTVSeason:(id)arg1 ;
-(NSURL *)bestStoreURL;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned)count;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(unsigned)numberOfSections;
-(id)playbackContextForIndex:(unsigned)arg1 ;
-(id)sectionEntities;
-(void)_invalidateCalculatedEntities;
-(char)shouldLoadCompletionArtwork;
-(id)entities;
@end
