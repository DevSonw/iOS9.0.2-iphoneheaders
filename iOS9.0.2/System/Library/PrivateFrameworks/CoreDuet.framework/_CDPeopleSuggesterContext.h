/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:23 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDuet/CoreDuet-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate, NSString, NSSet;

@interface _CDPeopleSuggesterContext : NSObject <NSCopying> {

	NSDate* _date;
	NSString* _locationUUID;
	NSString* _title;
	NSString* _contactPrefix;
	NSSet* _seedContactIdentifiers;
	NSString* _consumerIdentifier;

}

@property (retain) NSDate * date;                               //@synthesize date=_date - In the implementation block
@property (retain) NSString * locationUUID;                     //@synthesize locationUUID=_locationUUID - In the implementation block
@property (retain) NSString * title;                            //@synthesize title=_title - In the implementation block
@property (retain) NSString * contactPrefix;                    //@synthesize contactPrefix=_contactPrefix - In the implementation block
@property (retain) NSSet * seedContactIdentifiers;              //@synthesize seedContactIdentifiers=_seedContactIdentifiers - In the implementation block
@property (retain) NSString * consumerIdentifier;               //@synthesize consumerIdentifier=_consumerIdentifier - In the implementation block
+(id)currentContext;
-(void)setLocationUUID:(NSString *)arg1 ;
-(id)init;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(NSDate *)date;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(NSString *)locationUUID;
-(NSString *)contactPrefix;
-(void)setContactPrefix:(NSString *)arg1 ;
-(NSString *)consumerIdentifier;
-(void)setConsumerIdentifier:(NSString *)arg1 ;
-(NSSet *)seedContactIdentifiers;
-(void)setSeedContactIdentifiers:(NSSet *)arg1 ;
@end
