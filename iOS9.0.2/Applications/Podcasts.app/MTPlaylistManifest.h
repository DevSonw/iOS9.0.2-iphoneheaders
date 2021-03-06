/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:52 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Podcasts/MTPredicateManifest.h>

@class NSString;

@interface MTPlaylistManifest : MTPredicateManifest {

	NSString* _playlistUuid;

}

@property (nonatomic,readonly) NSString * playlistUuid;              //@synthesize playlistUuid=_playlistUuid - In the implementation block
+(id)createManifestForActivity:(id)arg1 ;
+(id)activityTypeSuffix;
-(id)activitySpotlightIdentifier;
-(id)initWithPlaylistUuid:(id)arg1 initialEpisodeUuid:(id)arg2 ;
-(NSString *)playlistUuid;
-(char)_updatePlaylistEpisodes;
-(void)_propertyDidChange;
-(void)_load;
@end

