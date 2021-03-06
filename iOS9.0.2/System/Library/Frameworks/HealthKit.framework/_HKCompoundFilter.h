/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:41 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/_HKFilter.h>

@class NSArray;

@interface _HKCompoundFilter : _HKFilter {

	NSArray* _subfilters;
	unsigned _compoundType;

}

@property (nonatomic,readonly) NSArray * subfilters;               //@synthesize subfilters=_subfilters - In the implementation block
@property (nonatomic,readonly) unsigned compoundType;              //@synthesize compoundType=_compoundType - In the implementation block
+(id)filterWithSubfilters:(id)arg1 compoundType:(unsigned)arg2 ;
+(char)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)acceptsDataObject:(id)arg1 ;
-(NSArray *)subfilters;
-(unsigned)compoundType;
@end

