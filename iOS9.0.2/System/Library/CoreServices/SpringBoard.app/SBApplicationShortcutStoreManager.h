/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:36 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSLock, NSMutableDictionary;

@interface SBApplicationShortcutStoreManager : NSObject {

	NSLock* _stateLock;
	NSMutableDictionary* _storesKeyedByBundleIdentifier;

}
+(id)sharedManager;
-(void)saveSynchronously;
-(id)shortcutItemsForBundleIdentifier:(id)arg1 ;
-(void)setShortcutItems:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)_installedAppsDidChange:(id)arg1 ;
-(id)_stateLock_storeForBundleIdentifier:(id)arg1 ;
-(void)dealloc;
-(id)init;
@end
