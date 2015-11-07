/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:50 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Podcasts/MTSingleton.h>
#import <libobjc.A.dylib/NSUserActivityDelegate.h>

@class NSUserActivity, NSString;

@interface MTHandoffController : MTSingleton <NSUserActivityDelegate> {

	NSUserActivity* _activity;

}

@property (nonatomic,retain) NSUserActivity * activity;              //@synthesize activity=_activity - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)supportedActivityTypes;
-(void)continueActivity:(id)arg1 ;
-(void)continuePlaybackActivity:(id)arg1 ;
-(char)continueCoreSpotlightActivity:(id)arg1 ;
-(id)init;
-(NSUserActivity *)activity;
-(void)setActivity:(NSUserActivity *)arg1 ;
@end
