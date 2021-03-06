/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:08:05 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/CloudKitSettings.bundle/CloudKitSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, UIImage;

@interface CKSettingsAppNameImage : NSObject {

	NSString* _appDisplayName;
	UIImage* _appImage;

}

@property (nonatomic,retain) NSString * appDisplayName;              //@synthesize appDisplayName=_appDisplayName - In the implementation block
@property (nonatomic,retain) UIImage * appImage;                     //@synthesize appImage=_appImage - In the implementation block
+(id)_displayNameCache;
+(id)_cachedDisplayNameForBundleID:(id)arg1 ;
+(void)_setCachedDisplayName:(id)arg1 forBundleID:(id)arg2 ;
+(id)_cachedImageForBundleID:(id)arg1 ;
+(void)_setCachedImage:(id)arg1 forBundleID:(id)arg2 ;
+(void)lookUpAppNameImagesForApplicationBundleIDs:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)_imageCache;
-(UIImage *)appImage;
-(void)setAppImage:(UIImage *)arg1 ;
-(NSString *)appDisplayName;
-(void)setAppDisplayName:(NSString *)arg1 ;
@end

