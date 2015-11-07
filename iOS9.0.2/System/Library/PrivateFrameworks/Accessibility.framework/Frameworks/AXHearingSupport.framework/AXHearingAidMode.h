/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:43 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXHearingSupport.framework/AXHearingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface AXHearingAidMode : NSObject <NSSecureCoding> {

	unsigned char _index;
	char _isSelected;
	NSString* _name;
	int _category;
	int _ear;
	int syncAttempts;

}

@property (nonatomic,copy) NSString * name;                    //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) int category;                     //@synthesize category=_category - In the implementation block
@property (assign,nonatomic) unsigned char index;              //@synthesize index=_index - In the implementation block
@property (assign,nonatomic) char isSelected;                  //@synthesize isSelected=_isSelected - In the implementation block
@property (assign,nonatomic) int ear;                          //@synthesize ear=_ear - In the implementation block
@property (assign,nonatomic) int syncAttempts; 
+(char)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setCategory:(int)arg1 ;
-(int)category;
-(char)isSelected;
-(unsigned char)index;
-(void)setIndex:(unsigned char)arg1 ;
-(void)setIsSelected:(char)arg1 ;
-(void)setEar:(int)arg1 ;
-(char)isStreamOrMixingStream;
-(int)ear;
-(id)initWithRepresentation:(id)arg1 ;
-(id)transportRepresentation;
-(int)syncAttempts;
-(void)setSyncAttempts:(int)arg1 ;
-(char)isMixingStream;
-(char)isStream;
@end
