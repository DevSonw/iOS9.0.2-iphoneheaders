/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:08:25 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/UsageSettings.bundle/UsageSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppleAccount/AAResponse.h>

@class NSMutableArray, NSArray;

@interface QuotaAppDetailsResponse : AAResponse {

	NSMutableArray* _apps;

}

@property (nonatomic,readonly) NSArray * apps;              //@synthesize apps=_apps - In the implementation block
-(void)addApps:(id)arg1 ;
-(id)description;
-(id)initWithHTTPResponse:(id)arg1 data:(id)arg2 ;
-(NSArray *)apps;
@end
