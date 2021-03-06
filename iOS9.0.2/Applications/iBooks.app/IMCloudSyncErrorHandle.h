/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:16 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, IMCloudSyncController, IMCloudSyncError;

@interface IMCloudSyncErrorHandle : NSObject {

	NSMutableDictionary* _userInfo;
	IMCloudSyncController* _controller;
	IMCloudSyncError* _error;
	/*^block*/id _completionBlock;

}

@property (nonatomic,retain) NSMutableDictionary * userInfo;                  //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,retain) IMCloudSyncController * controller;              //@synthesize controller=_controller - In the implementation block
@property (nonatomic,retain) IMCloudSyncError * error;                        //@synthesize error=_error - In the implementation block
@property (nonatomic,copy) id completionBlock;                                //@synthesize completionBlock=_completionBlock - In the implementation block
-(void)handleError:(id)arg1 withController:(id)arg2 ;
-(void)resolveError;
-(IMCloudSyncError *)error;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(void)setUserInfo:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)userInfo;
-(IMCloudSyncController *)controller;
-(void)setController:(IMCloudSyncController *)arg1 ;
-(void)cleanup;
-(void)setError:(IMCloudSyncError *)arg1 ;
@end

