/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:42 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber, NSString;

@interface PKLocation : NSObject <NSSecureCoding> {

	NSNumber* _latitude;
	NSNumber* _longitude;
	NSNumber* _maxDistance;
	NSNumber* _altitude;
	NSString* _name;
	NSString* _relevantText;

}

@property (nonatomic,retain) NSString * name;                           //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * relevantText;                   //@synthesize relevantText=_relevantText - In the implementation block
@property (nonatomic,readonly) SCD_Struct_PK11 coordinate; 
+(char)supportsSecureCoding;
-(SCD_Struct_PK11)coordinate;
-(double)latitude;
-(double)longitude;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setAltitude:(id)arg1 ;
-(char)hasAltitude;
-(double)altitude;
-(void)setLatitude:(id)arg1 ;
-(void)setLongitude:(id)arg1 ;
-(void)setRelevantText:(NSString *)arg1 ;
-(NSString *)relevantText;
-(void)setMaxDistance:(id)arg1 ;
-(double)maxDistance;
-(char)hasEqualCoordinatesToLocation:(id)arg1 ;
-(id)CLLocation;
@end

