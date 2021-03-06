/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:20 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SKUIMediaQueryDelegate, OS_dispatch_source;
@class NSMapTable, NSMutableSet, NSObject;

@interface SKUIMediaQueryEvaluator : NSObject {

	NSMapTable* _cachedFeatureResults;
	id<SKUIMediaQueryDelegate> _delegate;
	NSMutableSet* _observedNotificationNames;
	NSObject*<OS_dispatch_source> _reloadTimer;

}

@property (assign,nonatomic,__weak) id<SKUIMediaQueryDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(void)initialize;
+(void)registerFeatureClass:(Class)arg1 ;
-(void)setDelegate:(id<SKUIMediaQueryDelegate>)arg1 ;
-(void)dealloc;
-(void)reloadData;
-(id)init;
-(id<SKUIMediaQueryDelegate>)delegate;
-(void)_featureDidChangeNotification:(id)arg1 ;
-(id)_delegateValuesForKeys:(id)arg1 ;
-(char)evaluateMediaQuery:(id)arg1 ;
@end

