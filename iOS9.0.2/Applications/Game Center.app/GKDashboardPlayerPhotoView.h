/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:08 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Game Center.app/Game Center
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIImageView.h>

@class GKPlayer;

@interface GKDashboardPlayerPhotoView : UIImageView {

	GKPlayer* _player;

}

@property (nonatomic,retain) GKPlayer * player;              //@synthesize player=_player - In the implementation block
-(void)setPlayer:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)updatePhotoWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setPlayer:(GKPlayer *)arg1 ;
-(GKPlayer *)player;
-(void)dealloc;
@end
