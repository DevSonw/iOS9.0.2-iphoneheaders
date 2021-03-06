/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:20 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBooks/AEAudiobookFeedbackStringProducer.h>

@class IMMediaPlayer, NSString;

@interface AEAudiobookCoverFeedbackStringProducer : NSObject <AEAudiobookFeedbackStringProducer> {

	unsigned _skipCountPerUpdate;
	int _direction;
	unsigned _repeatCount;
	IMMediaPlayer* _player;

}

@property (assign,nonatomic) unsigned repeatCount;                     //@synthesize repeatCount=_repeatCount - In the implementation block
@property (nonatomic,readonly) IMMediaPlayer * player;                 //@synthesize player=_player - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) unsigned skipCountPerUpdate;              //@synthesize skipCountPerUpdate=_skipCountPerUpdate - In the implementation block
@property (assign,nonatomic) int direction;                            //@synthesize direction=_direction - In the implementation block
-(id)hudFeedbackString;
-(id)skipFeedbackString;
-(void)incrementRepeatCount;
-(id)initWithDirection:(int)arg1 player:(id)arg2 ;
-(void)setSkipCountPerUpdate:(unsigned)arg1 ;
-(id)coverFeedbackString;
-(unsigned)skipCountPerUpdate;
-(IMMediaPlayer *)player;
-(unsigned)repeatCount;
-(void)setRepeatCount:(unsigned)arg1 ;
-(void)setDirection:(int)arg1 ;
-(int)direction;
@end

