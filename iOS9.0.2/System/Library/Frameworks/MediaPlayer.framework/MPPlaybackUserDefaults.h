/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:49 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <MediaPlayer/MediaPlayer-Structs.h>
@class NSObject;

@interface MPPlaybackUserDefaults : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	char _allowsHighQualityMusicStreamingOnCellular;
	NSObject*<OS_dispatch_queue> _calloutQueue;
	vector<int, std::__1::allocator<int> >* _notifyTokens;

}

@property (nonatomic,readonly) char allowsHighQualityMusicStreamingOnCellular; 
+(id)standardUserDefaults;
-(char)allowsHighQualityMusicStreamingOnCellular;
-(void)_addNotificationObserver:(/*^block*/id)arg1 forUserDefaultKey:(CFStringRef)arg2 ;
-(void)dealloc;
-(id)init;
@end
