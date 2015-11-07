/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:59 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMapTable;

@interface PHConcurrentMapTable : NSObject {

	NSObject*<OS_dispatch_queue> _isolationQueue;
	NSMapTable* _protectedTable;

}
+(id)mapTable;
-(void)performLockedKeyEnumeration:(/*^block*/id)arg1 ;
-(void)dispatchIsolatedWrite:(/*^block*/id)arg1 ;
-(void)dispatchIsolatedRead:(/*^block*/id)arg1 ;
-(id)queue;
-(unsigned)count;
-(id)init;
-(void)removeAllObjects;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
@end
