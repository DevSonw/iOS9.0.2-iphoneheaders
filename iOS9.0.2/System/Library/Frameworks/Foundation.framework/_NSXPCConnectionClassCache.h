/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:38 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableSet;

@interface _NSXPCConnectionClassCache : NSObject {

	int _lock;
	NSMutableSet* _cache;

}
-(char)containsClass:(Class)arg1 ;
-(void)addClass:(Class)arg1 ;
-(void)dealloc;
-(id)init;
-(void)clear;
@end
