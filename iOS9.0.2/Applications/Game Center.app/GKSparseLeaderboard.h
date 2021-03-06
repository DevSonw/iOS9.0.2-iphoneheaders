/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:09 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Game Center.app/Game Center
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Game Center/Game Center-Structs.h>
#import <GameCenterFoundation/GKLeaderboard.h>

@protocol OS_dispatch_queue;
@class GKGame, GKPlayer, NSArray, NSMutableArray, NSMutableDictionary, NSObject, GKScore, NSError, GKLeaderboardItem;

@interface GKSparseLeaderboard : GKLeaderboard {

	GKGame* _game;
	GKPlayer* _player;
	NSRange _totalRange;
	NSRange _displayedRange;
	NSArray* _showcasedScores;
	unsigned _maxLoaded;
	NSRange _currentRange;
	NSMutableArray* _allLeaderboardItems;
	NSMutableDictionary* _playerIDToLeaderboardItems;
	NSObject*<OS_dispatch_queue> _loadQueue;
	char _loaded;
	GKScore* _comparePlayerScore;
	NSError* _error;
	GKLeaderboardItem* _localPlayerItem;
	GKLeaderboardItem* _comparePlayerItem;

}

@property (nonatomic,retain) GKGame * game;                                       //@synthesize game=_game - In the implementation block
@property (nonatomic,retain) GKPlayer * player;                                   //@synthesize player=_player - In the implementation block
@property (nonatomic,readonly) NSRange totalRange;                                //@synthesize totalRange=_totalRange - In the implementation block
@property (assign,nonatomic) NSRange displayedRange;                              //@synthesize displayedRange=_displayedRange - In the implementation block
@property (nonatomic,retain) GKScore * comparePlayerScore;                        //@synthesize comparePlayerScore=_comparePlayerScore - In the implementation block
@property (nonatomic,readonly) NSRange loadedRange; 
@property (nonatomic,readonly) char displayLocalPlayer; 
@property (nonatomic,readonly) char displayComparePlayer; 
@property (nonatomic,readonly) char moreScoresAvailable; 
@property (nonatomic,readonly) char showcasedScoresAdjacent; 
@property (nonatomic,readonly) char loaded;                                       //@synthesize loaded=_loaded - In the implementation block
@property (nonatomic,retain) NSError * error;                                     //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> loadQueue;              //@synthesize loadQueue=_loadQueue - In the implementation block
@property (nonatomic,retain) GKLeaderboardItem * localPlayerItem;                 //@synthesize localPlayerItem=_localPlayerItem - In the implementation block
@property (nonatomic,retain) GKLeaderboardItem * comparePlayerItem;               //@synthesize comparePlayerItem=_comparePlayerItem - In the implementation block
-(GKScore *)comparePlayerScore;
-(id)placeholderLeaderboardItemsForRankRange:(NSRange)arg1 ;
-(void)setComparePlayerScore:(GKScore *)arg1 ;
-(NSRange)totalRange;
-(NSRange)displayedRange;
-(void)setDisplayedRange:(NSRange)arg1 ;
-(void)setLoadQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setLocalPlayerItem:(GKLeaderboardItem *)arg1 ;
-(void)setComparePlayerItem:(GKLeaderboardItem *)arg1 ;
-(id)showcasedLeaderboardItemAtShowcaseIndex:(unsigned)arg1 ;
-(id)leaderboardItemAtIndex:(unsigned)arg1 ;
-(char)displayLocalPlayer;
-(char)displayComparePlayer;
-(GKLeaderboardItem *)localPlayerItem;
-(GKLeaderboardItem *)comparePlayerItem;
-(void)addLeaderboardItems:(id)arg1 ;
-(char)moreScoresAvailable;
-(unsigned)numberOfLeaderboardItems;
-(id)visibleLeaderboardItemAtIndex:(unsigned)arg1 ;
-(NSRange)loadedRange;
-(NSRange)rangeToLoadForRank:(unsigned)arg1 ;
-(char)showcasedScoresAdjacent;
-(void)setPlayer:(GKPlayer *)arg1 ;
-(NSError *)error;
-(GKPlayer *)player;
-(char)loaded;
-(void)dealloc;
-(id)description;
-(NSObject*<OS_dispatch_queue>)loadQueue;
-(void)setLocalPlayerScore:(id)arg1 ;
-(id)initWithGame:(id)arg1 ;
-(void)setGame:(GKGame *)arg1 ;
-(GKGame *)game;
-(void)loadScoresForGame:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)setError:(NSError *)arg1 ;
@end

