/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:02 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/assistantd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ADContextManagerDelegate, OS_dispatch_queue;
@class NSObject, ADBackgroundContextCache;

@interface ADContextManager : NSObject {

	id<ADContextManagerDelegate> _delegate;
	char _alertContextIsDirty;
	NSObject*<OS_dispatch_queue> _bgContextQueue;
	char _registeredForContextUpdates;
	ADBackgroundContextCache* _bgContext;

}

@property (assign,nonatomic,__weak) id<ADContextManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_unregisterForBGUpdates;
-(void)_getCurrentUserActivity:(/*^block*/id)arg1 ;
-(void)_updateNavStatusWithCompletion:(/*^block*/id)arg1 ;
-(void)_updateNowPlayingInfoWithCompletion:(/*^block*/id)arg1 ;
-(void)_registerForBGUpdates;
-(void)_getBackgroundContext:(/*^block*/id)arg1 ;
-(void)_navStatusDidChange:(id)arg1 ;
-(void)_updateBackgroundContextIfNowPlayingInfoChanged:(id)arg1 ;
-(char)alertContextIsDirty;
-(void)clearAlertContextDirtyState;
-(void)getAppContextForLockedDevice:(char)arg1 applicationInfos:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)getAlertContextWithBulletinFetcher:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)markBulletinAsAcknolwedgedForDomainObject:(id)arg1 ;
-(void)getDomainObjectFromMessageContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(char)hasBackgroundContext;
-(void)getBackgroundContext:(/*^block*/id)arg1 ;
-(void)setDelegate:(id<ADContextManagerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<ADContextManagerDelegate>)delegate;
-(id)initWithDelegate:(id)arg1 ;
-(void)setAlertContextDirty;
@end

